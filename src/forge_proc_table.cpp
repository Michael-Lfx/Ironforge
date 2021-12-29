#include "forge_proc_table.h"

#include <stddef.h>

static ForgeProcTable procs;

/************************************************************************/
// Internal initialization settings
/************************************************************************/
RendererApi gSelectedRendererApi;
bool        gD3D11Unsupported = false;
bool        gGLESUnsupported = false;

/************************************************************************/
// Internal initialization functions
/************************************************************************/
#if defined(DIRECT3D11)
extern void initD3D11Renderer(const char* appName, const RendererDesc* pSettings, Renderer** ppRenderer);
extern void initD3D11RaytracingFunctions();
extern void exitD3D11Renderer(Renderer* pRenderer);
#endif

#if defined(DIRECT3D12)
extern void initD3D12Renderer(const char* appName, const RendererDesc* pSettings, Renderer** ppRenderer);
extern void initD3D12RaytracingFunctions();
extern void exitD3D12Renderer(Renderer* pRenderer);
extern void initD3D12RendererContext(const char* appName, const RendererContextDesc* pSettings, RendererContext** ppContext);
extern void exitD3D12RendererContext(RendererContext* pContext);
#endif

#if defined(VULKAN)
extern void initVulkanRenderer(const char* appName, const RendererDesc* pSettings, Renderer** ppRenderer);
extern void initVulkanRaytracingFunctions();
extern void exitVulkanRenderer(Renderer* pRenderer);
extern void initVulkanRendererContext(const char* appName, const RendererContextDesc* pSettings, RendererContext** ppContext);
extern void exitVulkanRendererContext(RendererContext* pContext);
#endif

#if defined(METAL)
extern void initMetalRenderer(const char* appName, const RendererDesc* pSettings, Renderer** ppRenderer);
extern void initMetalRaytracingFunctions();
extern void exitMetalRenderer(Renderer* pRenderer);
#endif

#if defined(GLES)
extern void
initGLESRenderer(ForgeProcTable *procs, const char *appName, const RendererDesc *pSettings, Renderer **ppRenderer);
extern void exitGLESRenderer(Renderer* pRenderer);
#endif

static bool apiIsUnsupported(const RendererApi api)
{
#if defined(GLES)
    if (api == RENDERER_API_GLES && gGLESUnsupported)
		return true;
#endif

#if defined(DIRECT3D11)
    if (api == RENDERER_API_D3D11 && gD3D11Unsupported)
		return true;
#endif

    return false;
}

static void initRendererAPI(const char* appName, const RendererDesc* pSettings, Renderer** ppRenderer, const RendererApi api)
{
    switch (api)
    {
#if defined(DIRECT3D11)
        case RENDERER_API_D3D11:
		initD3D11RaytracingFunctions();
		initD3D11Renderer(appName, pSettings, ppRenderer);
		break;
#endif
#if defined(DIRECT3D12)
        case RENDERER_API_D3D12:
		initD3D12RaytracingFunctions();
		initD3D12Renderer(appName, pSettings, ppRenderer);
		break;
#endif
#if defined(VULKAN)
        case RENDERER_API_VULKAN:
		initVulkanRaytracingFunctions();
		initVulkanRenderer(appName, pSettings, ppRenderer);
		break;
#endif
#if defined(METAL)
        case RENDERER_API_METAL:
		initMetalRaytracingFunctions();
		initMetalRenderer(appName, pSettings, ppRenderer);
		break;
#endif
#if defined(GLES)
        case RENDERER_API_GLES:
            initGLESRenderer(&procs, appName, pSettings, ppRenderer);
		break;
#endif
        default:
            LOGF(LogLevel::eERROR, "No Renderer API defined!");
            break;
    }
}

static void exitRendererAPI(Renderer* pRenderer, const RendererApi api)
{
    switch (api)
    {
#if defined(DIRECT3D11)
        case RENDERER_API_D3D11:
		exitD3D11Renderer(pRenderer);
		break;
#endif
#if defined(DIRECT3D12)
        case RENDERER_API_D3D12:
		exitD3D12Renderer(pRenderer);
		break;
#endif
#if defined(VULKAN)
        case RENDERER_API_VULKAN:
		exitVulkanRenderer(pRenderer);
		break;
#endif
#if defined(METAL)
        case RENDERER_API_METAL:
		exitMetalRenderer(pRenderer);
		break;
#endif
#if defined(GLES)
        case RENDERER_API_GLES:
		exitGLESRenderer(pRenderer);
		break;
#endif
        default:
            LOGF(LogLevel::eERROR, "No Renderer API defined!");
            break;
    }
}

static void initRendererContextAPI(const char* appName, const TFRendererContextDesc* pSettings, RendererContext** ppContext, const RendererApi api)
{
    switch (api)
    {
#if defined(DIRECT3D12)
        case RENDERER_API_D3D12:
		initD3D12RendererContext(appName, pSettings, ppContext);
		break;
#endif
#if defined(VULKAN)
        case RENDERER_API_VULKAN:
		initVulkanRendererContext(appName, pSettings, ppContext);
		break;
#endif
        default:
            LOGF(LogLevel::eERROR, "No Renderer API defined!");
            break;
    }
}

static void exitRendererContextAPI(RendererContext* pContext, const RendererApi api)
{
    switch (api)
    {
#if defined(DIRECT3D12)
        case RENDERER_API_D3D12:
		exitD3D12RendererContext(pContext);
		break;
#endif
#if defined(VULKAN)
        case RENDERER_API_VULKAN:
		exitVulkanRendererContext(pContext);
		break;
#endif
        default:
            LOGF(LogLevel::eERROR, "No Renderer API defined!");
            break;
    }

}

void initRendererContext(const char* appName, const TFRendererContextDesc* pSettings, RendererContext** ppContext)
{
    ASSERT(ppContext);
    ASSERT(*ppContext == NULL);

    ASSERT(pSettings);

    gD3D11Unsupported = true;
    gGLESUnsupported = true;

    // Init requested renderer API
    if (!apiIsUnsupported(gSelectedRendererApi))
    {
        initRendererContextAPI(appName, pSettings, ppContext, gSelectedRendererApi);
    }
    else
    {
        LOGF(LogLevel::eWARNING, "Requested Graphics API has been marked as disabled and/or not supported in the Renderer's descriptor!");
        LOGF(LogLevel::eWARNING, "Falling back to the first available API...");
    }

#if defined(USE_MULTIPLE_RENDER_APIS)
    // Fallback on other available APIs
	for (uint32_t i = 0; i < RENDERER_API_COUNT && !*ppContext; ++i)
	{
		if (i == gSelectedRendererApi || apiIsUnsupported((RendererApi)i))
			continue;

		gSelectedRendererApi = (RendererApi)i;
		initRendererContextAPI(appName, pSettings, ppContext, gSelectedRendererApi);
	}
#endif
}

void exitRendererContext(RendererContext* pContext)
{
    ASSERT(pContext);

    exitRendererContextAPI(pContext, gSelectedRendererApi);
}

void initRenderer(const char* appName, const RendererDesc* pSettings, Renderer** ppRenderer)
{
    ASSERT(ppRenderer);
    ASSERT(*ppRenderer == NULL);

    ASSERT(pSettings);

    gD3D11Unsupported = pSettings->mD3D11Unsupported;
    gGLESUnsupported = pSettings->mGLESUnsupported;

    // Init requested renderer API
    if (!apiIsUnsupported(gSelectedRendererApi))
    {
        initRendererAPI(appName, pSettings, ppRenderer, gSelectedRendererApi);
    }
    else
    {
        LOGF(LogLevel::eWARNING, "Requested Graphics API has been marked as disabled and/or not supported in the Renderer's descriptor!");
        LOGF(LogLevel::eWARNING, "Falling back to the first available API...");
    }

#if defined(USE_MULTIPLE_RENDER_APIS)
    // Fallback on other available APIs
	for (uint32_t i = 0; i < RENDERER_API_COUNT && !*ppRenderer; ++i)
	{
		if (i == gSelectedRendererApi || apiIsUnsupported((RendererApi)i))
			continue;

		gSelectedRendererApi = (RendererApi)i;
		initRendererAPI(appName, pSettings, ppRenderer, gSelectedRendererApi);
	}
#endif
}

void exitRenderer(Renderer* pRenderer)
{
    ASSERT(pRenderer);

    exitRendererAPI(pRenderer, gSelectedRendererApi);

    gD3D11Unsupported = false;
    gGLESUnsupported = false;
}

void tfInitRendererContext(const char *app_name, const TFRendererContextDesc *p_settings, RendererContext **ppContext)
{
//    return procs.initRendererContext(app_name, p_settings, ppContext);
    return initRendererContext(app_name, p_settings, ppContext);
}

void tfExitRendererContext(RendererContext *pContext)
{
//     return procs.exitRendererContext(pContext);
    return exitRendererContext(pContext);
}

void tfInitRenderer(const char *app_name, const RendererDesc *p_settings, Renderer **pRenderer)
{
//    return procs.initRenderer(app_name, p_settings, pRenderer);
    return initRenderer(app_name, p_settings, pRenderer);
}

void tfExitRenderer(Renderer *pRenderer)
{
//    return procs.exitRenderer(pRenderer);
    return exitRenderer(pRenderer);
}

void tfAddQueue(Renderer *pRenderer, QueueDesc *pQDesc, Queue **pQueue)
{
    return procs.addQueue(pRenderer, pQDesc, pQueue);
}

void tfAddFence(Renderer *pRenderer, Fence **p_fence)
{
    return procs.addFence(pRenderer, p_fence);
}

void tfRemoveFence(Renderer *pRenderer, Fence *p_fence)
{
    return procs.removeFence(pRenderer, p_fence);
}

void tfAddSemaphore(Renderer *pRenderer, Semaphore **p_semaphore)
{
    return procs.addSemaphore(pRenderer, p_semaphore);
}

void tfRemoveSemaphore(Renderer *pRenderer, Semaphore *p_semaphore)
{
    return procs.removeSemaphore(pRenderer, p_semaphore);
}

void AddCmdPool(Renderer *pRenderer, const CmdPoolDesc *p_desc, CmdPool **p_cmd_pool)
{
    return procs.addCmdPool(pRenderer, p_desc, p_cmd_pool);
}

void tfRemoveCmdPool(Renderer *pRenderer, CmdPool *p_CmdPool)
{
    return procs.removeCmdPool(pRenderer, p_CmdPool);
}

void tfAddCmdPool(Renderer *pRenderer, const CmdPoolDesc *p_desc, CmdPool **p_cmd_pool)
{
    return procs.addCmdPool(pRenderer, p_desc, p_cmd_pool);
}

void tfAddCmd(Renderer *pRenderer, const CmdDesc *p_desc, Cmd **p_cmd)
{
    return procs.addCmd(pRenderer, p_desc, p_cmd);
}

void tfRemoveCmd(Renderer *pRenderer, Cmd *pCmd)
{
    return procs.removeCmd(pRenderer, pCmd);
}

void tfAddCmd_n(Renderer *pRenderer, const CmdDesc *p_desc, uint32_t cmd_count, Cmd ***p_cmds) {
    return procs.addCmd_n(pRenderer, p_desc, cmd_count, p_cmds);
}

void tfAddSwapChain(Renderer *pRenderer, const SwapChainDesc *p_desc, SwapChain **p_swap_chain) {
    return procs.addSwapChain(pRenderer, p_desc, p_swap_chain);
}

void tfRemoveSwapChain(Renderer *pRenderer, SwapChain *p_swap_chain) {
    return procs.removeSwapChain(pRenderer, p_swap_chain);
}

void addRenderTarget(Renderer *pRenderer, const RenderTargetDesc *pDesc, RenderTarget **ppRenderTarget) {
    return procs.addRenderTarget(pRenderer, pDesc, ppRenderTarget);
}

void removeRenderTarget(Renderer *pRenderer, RenderTarget *pRenderTarget) {
    return procs.removeRenderTarget(pRenderer, pRenderTarget);
}

void addSampler(Renderer *pRenderer, const SamplerDesc *pDesc, Sampler **p_sampler) {
    return procs.addSampler(pRenderer, pDesc, p_sampler);
}

void tfRemoveSampler(Renderer *pRenderer, Sampler *p_sampler) {
    return procs.removeSampler(pRenderer, p_sampler);
}

void addRootSignature(Renderer *pRenderer, const RootSignatureDesc *pDesc, RootSignature **pRootSignature) {
    return procs.addRootSignature(pRenderer, pDesc, pRootSignature);
}

void removeRootSignature(Renderer *pRenderer, RootSignature *pRootSignature) {
    return procs.removeRootSignature(pRenderer, pRootSignature);
}

void addDescriptorSet(Renderer *pRenderer, const DescriptorSetDesc *pDesc, DescriptorSet **pDescriptorSet) {
    return procs.addDescriptorSet(pRenderer, pDesc, pDescriptorSet);
}

void removeDescriptorSet(Renderer *pRenderer, DescriptorSet *pDescriptorSet) {
    return procs.removeDescriptorSet(pRenderer, pDescriptorSet);
}

void updateDescriptorSet(Renderer *pRenderer, uint32_t index, DescriptorSet *pDescriptorSet, uint32_t count,
                         const DescriptorData *pParams) {
    return procs.updateDescriptorSet(pRenderer, index, pDescriptorSet, count, pParams);
}

void addPipeline(Renderer *pRenderer, const PipelineDesc *p_pipeline_settings, Pipeline **p_pipeline)
{
    return procs.addPipeline(pRenderer, p_pipeline_settings, p_pipeline);
}

void removePipeline(Renderer *pRenderer, Pipeline *p_pipeline)
{
    return procs.removePipeline(pRenderer, p_pipeline);
}

void addPipelineCache(Renderer *pRenderer, const PipelineCacheDesc *pDesc, PipelineCache **ppPipelineCache)
{
    return procs.addPipelineCache(pRenderer, pDesc, ppPipelineCache);
}

void getPipelineCacheData(Renderer *pRenderer, PipelineCache *pPipelineCache, size_t *pSize, void *pData)
{
    return procs.getPipelineCacheData(pRenderer, pPipelineCache, pSize, pData);
}

void removePipelineCache(Renderer *pRenderer, PipelineCache *pPipelineCache)
{
    return procs.removePipelineCache(pRenderer, pPipelineCache);
}

void tfRemoveCmd_n(Renderer *pRenderer, uint32_t cmd_count, Cmd **p_cmds)
{
    return procs.removeCmd_n(pRenderer, cmd_count, p_cmds);
}

void tfRemoveQueue(Renderer *pRenderer, Queue *pQueue)
{
    return procs.removeQueue(pRenderer, pQueue);
}

//void setForgeProcTable() {
////    procs.initRendererContext = &initRendererContext;
////    procs.initRenderer = &initRenderer;
//
//}





