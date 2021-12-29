#include <iostream>

#include "forge_proc_table.h"

const uint32_t gImageCount = 3;

Renderer* pRenderer = NULL;
Buffer*   pUniformBuffer[gImageCount] = { NULL };

Queue*           pGraphicsQueue = NULL;
CmdPool*         pCmdPools[gImageCount];
Cmd*             pCmds[gImageCount];
Sampler*         pSampler = NULL;

Fence*     pRenderCompleteFences[gImageCount] = { NULL };
Semaphore* pImageAcquiredSemaphore = NULL;
Semaphore* pRenderCompleteSemaphores[gImageCount] = { NULL };

SwapChain* pSwapChain = NULL;

Shader*            pShader = NULL;
Pipeline*          pPipeline = NULL;
RootSignature*     pRootSignature = NULL;

Shader*           pComputeShader = NULL;
Pipeline*         pComputePipeline = NULL;
RootSignature*    pComputeRootSignature = NULL;
Texture*          pTextureComputeOutput = NULL;

DescriptorSet*    pDescriptorSetUniforms = NULL;
DescriptorSet*    pDescriptorSetComputeTexture = NULL;
DescriptorSet*    pDescriptorSetTexture = NULL;

uint32_t     gFrameIndex = 0;
//ProfileToken gGpuProfileToken = PROFILE_INVALID_TOKEN;
//UniformBlock gUniformData;

//ICameraController* pCameraController = NULL;

char *GetName() { return "test"; }

bool Init() {
    //    setForgeProcTable();

    // window and renderer setup
    RendererDesc settings;
    memset(&settings, 0, sizeof(settings));
    settings.mGLESUnsupported = true;
    tfInitRenderer(GetName(), &settings, &pRenderer);
    //check for init success
    if (!pRenderer)
        return false;

    QueueDesc queueDesc = {};
    queueDesc.mType = QUEUE_TYPE_GRAPHICS;
    queueDesc.mFlag = QUEUE_FLAG_INIT_MICROPROFILE;
    tfAddQueue(pRenderer, &queueDesc, &pGraphicsQueue);

    CmdPoolDesc cmdPoolDesc = {};
    cmdPoolDesc.pQueue = pGraphicsQueue;

    for (uint32_t i = 0; i < gImageCount; ++i)
    {
        tfAddCmdPool(pRenderer, &cmdPoolDesc, &pCmdPools[i]);
        CmdDesc cmdDesc = {};
        cmdDesc.pPool = pCmdPools[i];
        tfAddCmd(pRenderer, &cmdDesc, &pCmds[i]);
    }

    for (uint32_t i = 0; i < gImageCount; ++i)
    {
        tfAddFence(pRenderer, &pRenderCompleteFences[i]);
        tfAddSemaphore(pRenderer, &pRenderCompleteSemaphores[i]);
    }
    tfAddSemaphore(pRenderer, &pImageAcquiredSemaphore);

//    initResourceLoaderInterface(pRenderer);

//    ShaderLoadDesc displayShader = {};
//    displayShader.mStages[0] = { "display.vert", NULL, 0, NULL, SHADER_STAGE_LOAD_FLAG_ENABLE_VR_MULTIVIEW };
//    displayShader.mStages[1] = { "display.frag", NULL, 0, NULL, SHADER_STAGE_LOAD_FLAG_ENABLE_VR_MULTIVIEW };
//    ShaderLoadDesc computeShader = {};
//    computeShader.mStages[0] = { "compute.comp", NULL, 0, NULL, SHADER_STAGE_LOAD_FLAG_ENABLE_VR_MULTIVIEW };

//    tfAddShader(pRenderer, &displayShader, &pShader);
//    tfAddShader(pRenderer, &computeShader, &pComputeShader);

    SamplerDesc samplerDesc = { FILTER_NEAREST,
                                FILTER_NEAREST,
                                MIPMAP_MODE_NEAREST,
                                ADDRESS_MODE_CLAMP_TO_EDGE,
                                ADDRESS_MODE_CLAMP_TO_EDGE,
                                ADDRESS_MODE_CLAMP_TO_EDGE };
    addSampler(pRenderer, &samplerDesc, &pSampler);

    const char*       pStaticSamplers[] = { "uSampler0" };
    RootSignatureDesc rootDesc = {};
    rootDesc.mStaticSamplerCount = 1;
    rootDesc.ppStaticSamplerNames = pStaticSamplers;
    rootDesc.ppStaticSamplers = &pSampler;
    rootDesc.mShaderCount = 1;
    rootDesc.ppShaders = &pShader;
    addRootSignature(pRenderer, &rootDesc, &pRootSignature);

    RootSignatureDesc computeRootDesc = {};
    computeRootDesc.mShaderCount = 1;
    computeRootDesc.ppShaders = &pComputeShader;
    addRootSignature(pRenderer, &computeRootDesc, &pComputeRootSignature);

    DescriptorSetDesc setDesc = { pRootSignature, DESCRIPTOR_UPDATE_FREQ_NONE, 1 };
    addDescriptorSet(pRenderer, &setDesc, &pDescriptorSetTexture);
    setDesc = { pComputeRootSignature, DESCRIPTOR_UPDATE_FREQ_NONE, 1 };
    addDescriptorSet(pRenderer, &setDesc, &pDescriptorSetComputeTexture);
    setDesc = { pComputeRootSignature, DESCRIPTOR_UPDATE_FREQ_PER_FRAME, gImageCount };
    addDescriptorSet(pRenderer, &setDesc, &pDescriptorSetUniforms);

    PipelineDesc desc = {};
    desc.mType = PIPELINE_TYPE_COMPUTE;
    ComputePipelineDesc& computePipelineDesc = desc.mComputeDesc;
    computePipelineDesc.pRootSignature = pComputeRootSignature;
    computePipelineDesc.pShaderProgram = pComputeShader;
    addPipeline(pRenderer, &desc, &pComputePipeline);

//    BufferLoadDesc ubDesc = {};
//    ubDesc.mDesc.mDescriptors = DESCRIPTOR_TYPE_UNIFORM_BUFFER;
//    ubDesc.mDesc.mMemoryUsage = RESOURCE_MEMORY_USAGE_CPU_TO_GPU;
//    ubDesc.mDesc.mSize = sizeof(UniformBlock);
//    ubDesc.mDesc.mFlags = BUFFER_CREATION_FLAG_PERSISTENT_MAP_BIT;
//    ubDesc.pData = NULL;
//    for (uint32_t i = 0; i < gImageCount; ++i)
//    {
//        ubDesc.ppBuffer = &pUniformBuffer[i];
//        addResource(&ubDesc, NULL);
//    }
//
//    // Width and height needs to be same as Texture's
//    gUniformData.mHeight = mSettings.mHeight;
//    gUniformData.mWidth = mSettings.mWidth;
//
//    // Load fonts
//    FontDesc font = {};
//    font.pFontPath = "TitilliumText/TitilliumText-Bold.otf";
//    fntDefineFonts(&font, 1, &gFontID);
//
//    FontSystemDesc fontRenderDesc = {};
//    fontRenderDesc.pRenderer = pRenderer;
//    if (!initFontSystem(&fontRenderDesc))
//        return false; // report?
//
//    // Initialize Forge User Interface Rendering
//    UserInterfaceDesc uiRenderDesc = {};
//    uiRenderDesc.pRenderer = pRenderer;
//    initUserInterface(&uiRenderDesc);
//
//    // Initialize profile
//    ProfilerDesc profiler = {};
//    profiler.pRenderer = pRenderer;
//    profiler.mWidthUI = mSettings.mWidth;
//    profiler.mHeightUI = mSettings.mHeight;
//    initProfiler(&profiler);
//
//    gGpuProfileToken = addGpuProfiler(pRenderer, pGraphicsQueue, "Graphics");
//
//    waitForAllResourceLoads();
//
//    DescriptorData params[1] = {};
//    params[0].pName = "uniformBlock";
//    for (uint32_t i = 0; i < gImageCount; ++i)
//    {
//        params[0].ppBuffers = &pUniformBuffer[gFrameIndex];
//        updateDescriptorSet(pRenderer, i, pDescriptorSetUniforms, 1, params);
//    }
//
//    CameraMotionParameters cmp{ 100.0f, 150.0f, 300.0f };
//    vec3                   camPos{ 48.0f, 48.0f, 20.0f };
//    vec3                   lookAt{ 0 };
//
//    pCameraController = initFpsCameraController(camPos, lookAt);
//
//    pCameraController->setMotionParameters(cmp);
//
//    InputSystemDesc inputDesc = {};
//    inputDesc.pRenderer = pRenderer;
//    inputDesc.pWindow = pWindow;
//    if (!initInputSystem(&inputDesc))
//        return false;
//
//    // App Actions
//    InputActionDesc actionDesc = { InputBindings::BUTTON_FULLSCREEN, [](InputActionContext* ctx) { toggleFullscreen(((IApp*)ctx->pUserData)->pWindow); return true; }, this };
//    addInputAction(&actionDesc);
//    actionDesc = { InputBindings::BUTTON_EXIT, [](InputActionContext* ctx) { requestShutdown(); return true; } };
//    addInputAction(&actionDesc);
//    actionDesc =
//            {
//                    InputBindings::BUTTON_ANY, [](InputActionContext* ctx)
//            {
//                bool capture = uiOnButton(ctx->mBinding, ctx->mBool, ctx->pPosition);
//                setEnableCaptureInput(capture && INPUT_ACTION_PHASE_CANCELED != ctx->mPhase);
//                return true;
//            }, this
//            };
//    addInputAction(&actionDesc);
//    typedef bool (*CameraInputHandler)(InputActionContext* ctx, uint32_t index);
//    static CameraInputHandler onCameraInput = [](InputActionContext* ctx, uint32_t index)
//    {
//        if (!uiIsFocused() && *ctx->pCaptured)
//        {
//            index ? pCameraController->onRotate(ctx->mFloat2) : pCameraController->onMove(ctx->mFloat2);
//        }
//        return true;
//    };
//    actionDesc = { InputBindings::FLOAT_RIGHTSTICK, [](InputActionContext* ctx) { return onCameraInput(ctx, 1); }, NULL, 20.0f, 200.0f, 0.5f };
//    addInputAction(&actionDesc);
//    actionDesc = { InputBindings::FLOAT_LEFTSTICK, [](InputActionContext* ctx) { return onCameraInput(ctx, 0); }, NULL, 20.0f, 200.0f, 1.0f };
//    addInputAction(&actionDesc);
//    actionDesc = { InputBindings::BUTTON_NORTH, [](InputActionContext* ctx) { pCameraController->resetView(); return true; } };
//    addInputAction(&actionDesc);
//
//    gFrameIndex = 0;

    return true;
}

int main() {
    Init();
    return 0;
}
