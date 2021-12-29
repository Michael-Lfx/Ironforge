#ifndef FORGE_PROC_TABLE_H_
#define FORGE_PROC_TABLE_H_

#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "src/Config.h"

#include <stdint.h>


////////////////////////////////////////////
typedef uint32_t GLbitfield;
typedef uint8_t  GLboolean;
typedef int8_t   GLbyte;
typedef float    GLclampf;
typedef uint32_t GLenum;
typedef float    GLfloat;
typedef int32_t  GLint;
typedef int16_t  GLshort;
typedef int32_t  GLsizei;
typedef uint8_t  GLubyte;
typedef uint32_t GLuint;
typedef uint16_t GLushort;
typedef void     GLvoid;

#if !defined(GL_ES_VERSION_2_0)
typedef char     GLchar;
#endif
typedef int32_t  GLclampx;
typedef int32_t  GLfixed;
#if !defined(GL_ES_VERSION_3_0)
typedef uint16_t GLhalf;
#endif
#if !defined(GL_APPLE_sync) && !defined(GL_ES_VERSION_3_0)
typedef int64_t  GLint64;
typedef struct __GLsync *GLsync;
typedef uint64_t GLuint64;
#endif
typedef intptr_t GLintptr;
typedef intptr_t GLsizeiptr;
////////////////////////////////////////////













typedef void* GLContext;
typedef void* GLConfig;

#define tf_calloc calloc
#define tf_calloc_memalign(a, b, c) calloc(a, c)
#define tf_free free
#define LOGF(...)
#define ASSERT(...)

#define TinyImageFormat_Count 239U




typedef enum TinyImageFormat {
    TinyImageFormat_UNDEFINED = 0,
    TinyImageFormat_R1_UNORM = 1,
    TinyImageFormat_R2_UNORM = 2,
    TinyImageFormat_R4_UNORM = 3,
    TinyImageFormat_R4G4_UNORM = 4,
    TinyImageFormat_G4R4_UNORM = 5,
    TinyImageFormat_A8_UNORM = 6,
    TinyImageFormat_R8_UNORM = 7,
    TinyImageFormat_R8_SNORM = 8,
    TinyImageFormat_R8_UINT = 9,
    TinyImageFormat_R8_SINT = 10,
    TinyImageFormat_R8_SRGB = 11,
    TinyImageFormat_B2G3R3_UNORM = 12,
    TinyImageFormat_R4G4B4A4_UNORM = 13,
    TinyImageFormat_R4G4B4X4_UNORM = 14,
    TinyImageFormat_B4G4R4A4_UNORM = 15,
    TinyImageFormat_B4G4R4X4_UNORM = 16,
    TinyImageFormat_A4R4G4B4_UNORM = 17,
    TinyImageFormat_X4R4G4B4_UNORM = 18,
    TinyImageFormat_A4B4G4R4_UNORM = 19,
    TinyImageFormat_X4B4G4R4_UNORM = 20,
    TinyImageFormat_R5G6B5_UNORM = 21,
    TinyImageFormat_B5G6R5_UNORM = 22,
    TinyImageFormat_R5G5B5A1_UNORM = 23,
    TinyImageFormat_B5G5R5A1_UNORM = 24,
    TinyImageFormat_A1B5G5R5_UNORM = 25,
    TinyImageFormat_A1R5G5B5_UNORM = 26,
    TinyImageFormat_R5G5B5X1_UNORM = 27,
    TinyImageFormat_B5G5R5X1_UNORM = 28,
    TinyImageFormat_X1R5G5B5_UNORM = 29,
    TinyImageFormat_X1B5G5R5_UNORM = 30,
    TinyImageFormat_B2G3R3A8_UNORM = 31,
    TinyImageFormat_R8G8_UNORM = 32,
    TinyImageFormat_R8G8_SNORM = 33,
    TinyImageFormat_G8R8_UNORM = 34,
    TinyImageFormat_G8R8_SNORM = 35,
    TinyImageFormat_R8G8_UINT = 36,
    TinyImageFormat_R8G8_SINT = 37,
    TinyImageFormat_R8G8_SRGB = 38,
    TinyImageFormat_R16_UNORM = 39,
    TinyImageFormat_R16_SNORM = 40,
    TinyImageFormat_R16_UINT = 41,
    TinyImageFormat_R16_SINT = 42,
    TinyImageFormat_R16_SFLOAT = 43,
    TinyImageFormat_R16_SBFLOAT = 44,
    TinyImageFormat_R8G8B8_UNORM = 45,
    TinyImageFormat_R8G8B8_SNORM = 46,
    TinyImageFormat_R8G8B8_UINT = 47,
    TinyImageFormat_R8G8B8_SINT = 48,
    TinyImageFormat_R8G8B8_SRGB = 49,
    TinyImageFormat_B8G8R8_UNORM = 50,
    TinyImageFormat_B8G8R8_SNORM = 51,
    TinyImageFormat_B8G8R8_UINT = 52,
    TinyImageFormat_B8G8R8_SINT = 53,
    TinyImageFormat_B8G8R8_SRGB = 54,
    TinyImageFormat_R8G8B8A8_UNORM = 55,
    TinyImageFormat_R8G8B8A8_SNORM = 56,
    TinyImageFormat_R8G8B8A8_UINT = 57,
    TinyImageFormat_R8G8B8A8_SINT = 58,
    TinyImageFormat_R8G8B8A8_SRGB = 59,
    TinyImageFormat_B8G8R8A8_UNORM = 60,
    TinyImageFormat_B8G8R8A8_SNORM = 61,
    TinyImageFormat_B8G8R8A8_UINT = 62,
    TinyImageFormat_B8G8R8A8_SINT = 63,
    TinyImageFormat_B8G8R8A8_SRGB = 64,
    TinyImageFormat_R8G8B8X8_UNORM = 65,
    TinyImageFormat_B8G8R8X8_UNORM = 66,
    TinyImageFormat_R16G16_UNORM = 67,
    TinyImageFormat_G16R16_UNORM = 68,
    TinyImageFormat_R16G16_SNORM = 69,
    TinyImageFormat_G16R16_SNORM = 70,
    TinyImageFormat_R16G16_UINT = 71,
    TinyImageFormat_R16G16_SINT = 72,
    TinyImageFormat_R16G16_SFLOAT = 73,
    TinyImageFormat_R16G16_SBFLOAT = 74,
    TinyImageFormat_R32_UINT = 75,
    TinyImageFormat_R32_SINT = 76,
    TinyImageFormat_R32_SFLOAT = 77,
    TinyImageFormat_A2R10G10B10_UNORM = 78,
    TinyImageFormat_A2R10G10B10_UINT = 79,
    TinyImageFormat_A2R10G10B10_SNORM = 80,
    TinyImageFormat_A2R10G10B10_SINT = 81,
    TinyImageFormat_A2B10G10R10_UNORM = 82,
    TinyImageFormat_A2B10G10R10_UINT = 83,
    TinyImageFormat_A2B10G10R10_SNORM = 84,
    TinyImageFormat_A2B10G10R10_SINT = 85,
    TinyImageFormat_R10G10B10A2_UNORM = 86,
    TinyImageFormat_R10G10B10A2_UINT = 87,
    TinyImageFormat_R10G10B10A2_SNORM = 88,
    TinyImageFormat_R10G10B10A2_SINT = 89,
    TinyImageFormat_B10G10R10A2_UNORM = 90,
    TinyImageFormat_B10G10R10A2_UINT = 91,
    TinyImageFormat_B10G10R10A2_SNORM = 92,
    TinyImageFormat_B10G10R10A2_SINT = 93,
    TinyImageFormat_B10G11R11_UFLOAT = 94,
    TinyImageFormat_E5B9G9R9_UFLOAT = 95,
    TinyImageFormat_R16G16B16_UNORM = 96,
    TinyImageFormat_R16G16B16_SNORM = 97,
    TinyImageFormat_R16G16B16_UINT = 98,
    TinyImageFormat_R16G16B16_SINT = 99,
    TinyImageFormat_R16G16B16_SFLOAT = 100,
    TinyImageFormat_R16G16B16_SBFLOAT = 101,
    TinyImageFormat_R16G16B16A16_UNORM = 102,
    TinyImageFormat_R16G16B16A16_SNORM = 103,
    TinyImageFormat_R16G16B16A16_UINT = 104,
    TinyImageFormat_R16G16B16A16_SINT = 105,
    TinyImageFormat_R16G16B16A16_SFLOAT = 106,
    TinyImageFormat_R16G16B16A16_SBFLOAT = 107,
    TinyImageFormat_R32G32_UINT = 108,
    TinyImageFormat_R32G32_SINT = 109,
    TinyImageFormat_R32G32_SFLOAT = 110,
    TinyImageFormat_R32G32B32_UINT = 111,
    TinyImageFormat_R32G32B32_SINT = 112,
    TinyImageFormat_R32G32B32_SFLOAT = 113,
    TinyImageFormat_R32G32B32A32_UINT = 114,
    TinyImageFormat_R32G32B32A32_SINT = 115,
    TinyImageFormat_R32G32B32A32_SFLOAT = 116,
    TinyImageFormat_R64_UINT = 117,
    TinyImageFormat_R64_SINT = 118,
    TinyImageFormat_R64_SFLOAT = 119,
    TinyImageFormat_R64G64_UINT = 120,
    TinyImageFormat_R64G64_SINT = 121,
    TinyImageFormat_R64G64_SFLOAT = 122,
    TinyImageFormat_R64G64B64_UINT = 123,
    TinyImageFormat_R64G64B64_SINT = 124,
    TinyImageFormat_R64G64B64_SFLOAT = 125,
    TinyImageFormat_R64G64B64A64_UINT = 126,
    TinyImageFormat_R64G64B64A64_SINT = 127,
    TinyImageFormat_R64G64B64A64_SFLOAT = 128,
    TinyImageFormat_D16_UNORM = 129,
    TinyImageFormat_X8_D24_UNORM = 130,
    TinyImageFormat_D32_SFLOAT = 131,
    TinyImageFormat_S8_UINT = 132,
    TinyImageFormat_D16_UNORM_S8_UINT = 133,
    TinyImageFormat_D24_UNORM_S8_UINT = 134,
    TinyImageFormat_D32_SFLOAT_S8_UINT = 135,
    TinyImageFormat_DXBC1_RGB_UNORM = 136,
    TinyImageFormat_DXBC1_RGB_SRGB = 137,
    TinyImageFormat_DXBC1_RGBA_UNORM = 138,
    TinyImageFormat_DXBC1_RGBA_SRGB = 139,
    TinyImageFormat_DXBC2_UNORM = 140,
    TinyImageFormat_DXBC2_SRGB = 141,
    TinyImageFormat_DXBC3_UNORM = 142,
    TinyImageFormat_DXBC3_SRGB = 143,
    TinyImageFormat_DXBC4_UNORM = 144,
    TinyImageFormat_DXBC4_SNORM = 145,
    TinyImageFormat_DXBC5_UNORM = 146,
    TinyImageFormat_DXBC5_SNORM = 147,
    TinyImageFormat_DXBC6H_UFLOAT = 148,
    TinyImageFormat_DXBC6H_SFLOAT = 149,
    TinyImageFormat_DXBC7_UNORM = 150,
    TinyImageFormat_DXBC7_SRGB = 151,
    TinyImageFormat_PVRTC1_2BPP_UNORM = 152,
    TinyImageFormat_PVRTC1_4BPP_UNORM = 153,
    TinyImageFormat_PVRTC2_2BPP_UNORM = 154,
    TinyImageFormat_PVRTC2_4BPP_UNORM = 155,
    TinyImageFormat_PVRTC1_2BPP_SRGB = 156,
    TinyImageFormat_PVRTC1_4BPP_SRGB = 157,
    TinyImageFormat_PVRTC2_2BPP_SRGB = 158,
    TinyImageFormat_PVRTC2_4BPP_SRGB = 159,
    TinyImageFormat_ETC2_R8G8B8_UNORM = 160,
    TinyImageFormat_ETC2_R8G8B8_SRGB = 161,
    TinyImageFormat_ETC2_R8G8B8A1_UNORM = 162,
    TinyImageFormat_ETC2_R8G8B8A1_SRGB = 163,
    TinyImageFormat_ETC2_R8G8B8A8_UNORM = 164,
    TinyImageFormat_ETC2_R8G8B8A8_SRGB = 165,
    TinyImageFormat_ETC2_EAC_R11_UNORM = 166,
    TinyImageFormat_ETC2_EAC_R11_SNORM = 167,
    TinyImageFormat_ETC2_EAC_R11G11_UNORM = 168,
    TinyImageFormat_ETC2_EAC_R11G11_SNORM = 169,
    TinyImageFormat_ASTC_4x4_UNORM = 170,
    TinyImageFormat_ASTC_4x4_SRGB = 171,
    TinyImageFormat_ASTC_5x4_UNORM = 172,
    TinyImageFormat_ASTC_5x4_SRGB = 173,
    TinyImageFormat_ASTC_5x5_UNORM = 174,
    TinyImageFormat_ASTC_5x5_SRGB = 175,
    TinyImageFormat_ASTC_6x5_UNORM = 176,
    TinyImageFormat_ASTC_6x5_SRGB = 177,
    TinyImageFormat_ASTC_6x6_UNORM = 178,
    TinyImageFormat_ASTC_6x6_SRGB = 179,
    TinyImageFormat_ASTC_8x5_UNORM = 180,
    TinyImageFormat_ASTC_8x5_SRGB = 181,
    TinyImageFormat_ASTC_8x6_UNORM = 182,
    TinyImageFormat_ASTC_8x6_SRGB = 183,
    TinyImageFormat_ASTC_8x8_UNORM = 184,
    TinyImageFormat_ASTC_8x8_SRGB = 185,
    TinyImageFormat_ASTC_10x5_UNORM = 186,
    TinyImageFormat_ASTC_10x5_SRGB = 187,
    TinyImageFormat_ASTC_10x6_UNORM = 188,
    TinyImageFormat_ASTC_10x6_SRGB = 189,
    TinyImageFormat_ASTC_10x8_UNORM = 190,
    TinyImageFormat_ASTC_10x8_SRGB = 191,
    TinyImageFormat_ASTC_10x10_UNORM = 192,
    TinyImageFormat_ASTC_10x10_SRGB = 193,
    TinyImageFormat_ASTC_12x10_UNORM = 194,
    TinyImageFormat_ASTC_12x10_SRGB = 195,
    TinyImageFormat_ASTC_12x12_UNORM = 196,
    TinyImageFormat_ASTC_12x12_SRGB = 197,
    TinyImageFormat_CLUT_P4 = 198,
    TinyImageFormat_CLUT_P4A4 = 199,
    TinyImageFormat_CLUT_P8 = 200,
    TinyImageFormat_CLUT_P8A8 = 201,
    TinyImageFormat_R4G4B4A4_UNORM_PACK16 = 202,
    TinyImageFormat_B4G4R4A4_UNORM_PACK16 = 203,
    TinyImageFormat_R5G6B5_UNORM_PACK16 = 204,
    TinyImageFormat_B5G6R5_UNORM_PACK16 = 205,
    TinyImageFormat_R5G5B5A1_UNORM_PACK16 = 206,
    TinyImageFormat_B5G5R5A1_UNORM_PACK16 = 207,
    TinyImageFormat_A1R5G5B5_UNORM_PACK16 = 208,
    TinyImageFormat_G16B16G16R16_422_UNORM = 209,
    TinyImageFormat_B16G16R16G16_422_UNORM = 210,
    TinyImageFormat_R12X4G12X4B12X4A12X4_UNORM_4PACK16 = 211,
    TinyImageFormat_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16 = 212,
    TinyImageFormat_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16 = 213,
    TinyImageFormat_R10X6G10X6B10X6A10X6_UNORM_4PACK16 = 214,
    TinyImageFormat_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16 = 215,
    TinyImageFormat_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16 = 216,
    TinyImageFormat_G8B8G8R8_422_UNORM = 217,
    TinyImageFormat_B8G8R8G8_422_UNORM = 218,
    TinyImageFormat_G8_B8_R8_3PLANE_420_UNORM = 219,
    TinyImageFormat_G8_B8R8_2PLANE_420_UNORM = 220,
    TinyImageFormat_G8_B8_R8_3PLANE_422_UNORM = 221,
    TinyImageFormat_G8_B8R8_2PLANE_422_UNORM = 222,
    TinyImageFormat_G8_B8_R8_3PLANE_444_UNORM = 223,
    TinyImageFormat_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16 = 224,
    TinyImageFormat_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16 = 225,
    TinyImageFormat_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16 = 226,
    TinyImageFormat_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16 = 227,
    TinyImageFormat_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16 = 228,
    TinyImageFormat_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16 = 229,
    TinyImageFormat_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16 = 230,
    TinyImageFormat_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16 = 231,
    TinyImageFormat_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16 = 232,
    TinyImageFormat_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16 = 233,
    TinyImageFormat_G16_B16_R16_3PLANE_420_UNORM = 234,
    TinyImageFormat_G16_B16_R16_3PLANE_422_UNORM = 235,
    TinyImageFormat_G16_B16_R16_3PLANE_444_UNORM = 236,
    TinyImageFormat_G16_B16R16_2PLANE_420_UNORM = 237,
    TinyImageFormat_G16_B16R16_2PLANE_422_UNORM = 238,
} TinyImageFormat;




#if defined(TF_SHARED_LIBRARY)
#    if defined(_WIN32)
#        if defined(TF_IMPLEMENTATION)
#            define TF_EXPORT __declspec(dllexport)
#        else
#            define TF_EXPORT __declspec(dllimport)
#        endif
#    else  // defined(_WIN32)
#        if defined(TF_IMPLEMENTATION)
#            define TF_EXPORT __attribute__((visibility("default")))
#        else
#            define TF_EXPORT
#        endif
#    endif  // defined(_WIN32)
#else       // defined(TF_SHARED_LIBRARY)
#    define TF_EXPORT
#endif  // defined(TF_SHARED_LIBRARY)

//#ifdef __cplusplus
//extern "C" {
//#endif

/// TODO Resource caching system https://github.com/elnormous/ouzel
/// TODO OGRE RESOURCE MANAGER
/// TODO rafx-resources
//https://crates.io/crates/rafx-resources
//Low-level graphics API abstraction
//Higher-level resource management and lifetime handling (via render graph and other helpful utilities)
//Asset layer that integrates with atelier-assets

/// todo Rendering Resource Management
//https://github.com/GPUOpen-LibrariesAndSDKs/Cauldron

/// TODO 支持mesh shader
/// PROSPERO = ps5
/// ORBIS = PS4/PS4 slim
/// NEO = PS4 pro
/// TODO REF https://github.com/THISISAGOODNAME/leanring-The-Forge
/// TODO 本身API设计也不是特别好用那种的 没有实现shader层抽象是我最不爽的 相比ue rhi或者unity gfx/srp，功能有缺失
/// TODO shader 层抽象要实现什么功能 它不是定义了FSL+python实现shader 转换了吗 没反射 没有很多预检查
/// TODO AGDE 安卓的vs插件，可以用vs直接调试安卓工程
/// TODO https://blog.csdn.net/m0_38141537/article/details/110469669
/// TODO 检测Android Native的内存泄漏有什么好的工具么

/// TODO 使用C的原因
//        https://github.com/ConfettiFX/The-Forge/issues/177
//Why are you moving it to C language?
//I think C is better for team usage. It is also better to design high-performance architecture. This is more or less just going back to the roots because most game engine teams have writing guidelines that define something along the lines of "use C whenever you can". Our writing guidelines are similar. You can find them at the end of the GitHub page ...
//        https://github.com/ConfettiFX/The-Forge/issues/177#issuecomment-723643236

/// todo Unreal
//Mobile Rendering
//New:
//Vulkan is now allowed on devices with Adreno5xx GPUs running Android 10 or a newer Android version.
//Added an onscreen warning for mobile for a misused Sky Atmosphere. This will help to identify why Sky Atmosphere is missing on mobile platforms.
//DepthPass FullOpaque is now added when SDF or AO are activated on mobile.
//DepthPass is now decoupled from BasePass when SDF or AO are active.
//Removed reprojection from basepixel, it is no longer needed as we are now using current frame depth.
//The TC_ReflectionCapture setting is now hidden.
//Added support for Panini projection on mobile.
//FXAA mobile is now available, it can be enabled with r.DefaultFeature.AntiAliasing=1
//Added a SSAO technique to the mobile forward renderer.
//Added a config cache for a per-platform toggle of MobileNumDynamicPointLights.
//Implemented DistanceField Shadow on mobile (no GL / Metal for now).
//Added support for the ASTC decode mode on GL.
//Updated Metal version to 2.1 for the iOS desktop renderer.
//Enabled Manual Vertex Fetch on the iOS desktop renderer.
//他的release notes 这一堆，我没有几个是测试成功的，包括AA，AO
// 之前我也测试过UE手游觉得与其妥协做阉割版没有UE pc渲染特性的手游不如搞unity srp

/// TODO 内存性能监控第三方MTuner
/// TODO DFORGE_DEBUG
///         输出如下
/// 09-18 16:26:02.128 19921 19986 E The-Forge: Assertion failed: (pRenderer->pCapBits->canShaderReadFrom[pDesc->mFormat] && "GPU shader can't' read from this format")
/// 09-18 16:26:02.128 19921 19986 E The-Forge:
/// 09-18 16:26:02.128 19921 19986 E The-Forge: File: Common_3/Renderer/Vulkan/Vulkan.cpp
/// 09-18 16:26:02.128 19921 19986 E The-Forge: Line: 4098
///
/// 内部无 assert 调用


/// MIRS: 可能是cocos和filament先入为主的感觉，我始终觉得forge这种backend方式 增加了很多维护难度和接入难度

/// Wave Intrinsics 需要 shader model 6


//The-Forge Android
//2021-09-17 11:40:50.307 8275-8372/com.example.kgpu_unit_test E/The-Forge: 2021-09-17 11:40:50 [Thread-2       ]     ResourceLoader.cpp:2241   ERR| Shader compiling failed! with status shaderc_error: error: #version: ES shaders for SPIR-V require version 310 or higher
//        shaderc_error:7: error: '#version' : must occur first in shader
//        shaderc_error:82: error: 'sampler/image' : cannot construct this type
//        shaderc_error:82: error: 'constructor' : too many arguments
//        shaderc_error:82: error: 'return' : cannot convert return value to function return type
//        shaderc_error:82: warning: 'return' : type conversion on return values was not explicitly allowed until version 420
//shaderc_error:92: error: 'texture2DLod' : no matching overloaded function found
//        shaderc_error:92: error: 'return' : cannot convert return value to function return type
//        shaderc_error:92: warning: 'return' : type conversion on return values was not explicitly allowed until version 420
//shaderc_error:100: error: 'texture2DProj' : no matching overloaded function found
//        shaderc_error:100: error: 'return' : cannot convert return value


//TODO 2021.12.1 我这两天又手动测了下kgpu2的导出性能，对比线上，导出耗时劣化了一些，上周跑的自动化性能测试结果可能不是很准，我手动多次测试，结果为：一段31s 时长的720p视频，在iPhone SE 2手机上，添加特效+字幕+画中画后导出，kgpu2版本耗时为11.2 s左右，线上版本为8.8s左右。然后我又单独测了下导出时kgpu2动态编译metal shader的总耗时，约为2.2s，感觉kgpu2相对于kgpu1的耗时增量主要来源于动态编译shader造成的额外耗时，这个符合预期嘛？

// If you add more levels don't forget to change LOG_LEVELS macro to the actual number of levels
typedef enum LogLevel {
    eNONE = 0,
    eRAW = 1,
    eDEBUG = 2,
    eINFO = 4,
    eWARNING = 8,
    eERROR = 16,
    eALL = ~0
} LogLevel;

#ifdef ENABLE_NSIGHT_AFTERMATH
    #include "../ThirdParty/PrivateNvidia/NsightAftermath/include/AftermathTracker.h"
#endif

//#include "../OS/Interfaces/ILog.h"
//#include "../OS/Interfaces/IOperatingSystem.h"
//#include "../OS/Interfaces/IThread.h"
//#include "../ThirdParty/OpenSource/tinyimageformat/tinyimageformat_base.h"

#ifdef __cplusplus
    #ifndef MAKE_ENUM_FLAG
    #define MAKE_ENUM_FLAG(TYPE, ENUM_TYPE)                                                                        \
                static inline ENUM_TYPE operator|(ENUM_TYPE a, ENUM_TYPE b) { return (ENUM_TYPE)((TYPE)(a) | (TYPE)(b)); } \
                static inline ENUM_TYPE operator&(ENUM_TYPE a, ENUM_TYPE b) { return (ENUM_TYPE)((TYPE)(a) & (TYPE)(b)); } \
                static inline ENUM_TYPE operator|=(ENUM_TYPE& a, ENUM_TYPE b) { return a = (a | b); }                      \
                static inline ENUM_TYPE operator&=(ENUM_TYPE& a, ENUM_TYPE b) { return a = (a & b); }

    #endif
#else
    #define MAKE_ENUM_FLAG(TYPE, ENUM_TYPE)
#endif

//
// default capability levels of the renderer
//
#if !defined(RENDERER_CUSTOM_MAX)
enum {
    MAX_INSTANCE_EXTENSIONS = 64,
    MAX_DEVICE_EXTENSIONS = 64,
    /// Max number of GPUs in SLI or Cross-Fire
    MAX_LINKED_GPUS = 4,
    /// Max number of GPUs in unlinked mode
    MAX_UNLINKED_GPUS = 4,
    /// Max number of GPus for either linked or unlinked mode.
    MAX_MULTIPLE_GPUS = 4,//TODO 手机应该用1硬编码？
    /// LoadActionsDesc 等用在数组上，需要编译期常量。 // todo glGet() 运行查询，再判断？还是一开始就查询 Renderer 直接决定是否 MRT？
    /// MTLFeatureSet_iOS_GPUFamily2_v1 最大只支持4
    MAX_RENDER_TARGET_ATTACHMENTS = 8,
    MAX_VERTEX_BINDINGS = 15,
    MAX_VERTEX_ATTRIBS = 15, // todo 为什么是15
    MAX_RESOURCE_NAME_LENGTH = 256,
    MAX_SEMANTIC_NAME_LENGTH = 128,
    MAX_DEBUG_NAME_LENGTH = 128,
    MAX_MIP_LEVELS = 0xFFFFFFFF,
    MAX_SWAPCHAIN_IMAGES = 3,
    MAX_GPU_VENDOR_STRING_LENGTH = 64,    //max size for GPUVendorPreset strings
#if defined(VULKAN)
    MAX_PLANE_COUNT = 3,
    MAX_DESCRIPTOR_POOL_SIZE_ARRAY_COUNT = VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT + 1,
#endif
};
#endif

#ifdef DIRECT3D12
// Forward declare memory allocator classes
namespace D3D12MA {
    class Allocator;
    class Allocation;
};    // namespace D3D12MA
#endif

typedef enum RendererApi {
#if defined(GLES)
    RENDERER_API_GLES,
#endif
#if defined(DIRECT3D12)
    RENDERER_API_D3D12,
#endif
#if defined(VULKAN)
    RENDERER_API_VULKAN,
#endif
#if defined(DIRECT3D11)
    RENDERER_API_D3D11,
#endif
#if defined(METAL)
    RENDERER_API_METAL,
#endif
    RENDERER_API_COUNT
} RendererApi;

typedef enum QueueType {
    QUEUE_TYPE_GRAPHICS = 0,
    QUEUE_TYPE_TRANSFER,
    QUEUE_TYPE_COMPUTE,
    MAX_QUEUE_TYPE
} QueueType;

/// D3D11, D3D12
typedef enum QueueFlag {
    QUEUE_FLAG_NONE = 0x0,
    QUEUE_FLAG_DISABLE_GPU_TIMEOUT = 0x1,
    QUEUE_FLAG_INIT_MICROPROFILE = 0x2,
    MAX_QUEUE_FLAG = 0xFFFFFFFF
} QueueFlag;

MAKE_ENUM_FLAG(uint32_t, QueueFlag)

/// D3D12 only
typedef enum QueuePriority {
    QUEUE_PRIORITY_NORMAL,
    QUEUE_PRIORITY_HIGH,
    QUEUE_PRIORITY_GLOBAL_REALTIME,
    MAX_QUEUE_PRIORITY
} QueuePriority;

typedef enum LoadActionType {
    LOAD_ACTION_DONTCARE,
    LOAD_ACTION_LOAD,
    LOAD_ACTION_CLEAR,
    MAX_LOAD_ACTION
} LoadActionType;

typedef void (*LogFn)(LogLevel, const char *, const char *);

/// TODO 研发如何高效判断该使用哪个 ResourceState ，如果框架内部自动推导需要添加多少代码、包体积？
typedef enum ResourceState {
    RESOURCE_STATE_UNDEFINED = 0,
    RESOURCE_STATE_VERTEX_AND_CONSTANT_BUFFER = 0x1,
    RESOURCE_STATE_INDEX_BUFFER = 0x2,
    RESOURCE_STATE_RENDER_TARGET = 0x4,
    RESOURCE_STATE_UNORDERED_ACCESS = 0x8,
    RESOURCE_STATE_DEPTH_WRITE = 0x10,
    RESOURCE_STATE_DEPTH_READ = 0x20,
    RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE = 0x40,
    RESOURCE_STATE_PIXEL_SHADER_RESOURCE = 0x80,
    RESOURCE_STATE_SHADER_RESOURCE = 0x40 | 0x80,
    RESOURCE_STATE_STREAM_OUT = 0x100,
    RESOURCE_STATE_INDIRECT_ARGUMENT = 0x200,
    RESOURCE_STATE_COPY_DEST = 0x400,
    RESOURCE_STATE_COPY_SOURCE = 0x800,
    RESOURCE_STATE_GENERIC_READ = (((((0x1 | 0x2) | 0x40) | 0x80) | 0x200) | 0x800),
    RESOURCE_STATE_PRESENT = 0x1000,
    RESOURCE_STATE_COMMON = 0x2000,
    RESOURCE_STATE_RAYTRACING_ACCELERATION_STRUCTURE = 0x4000,
    RESOURCE_STATE_SHADING_RATE_SOURCE = 0x8000,
} ResourceState;
MAKE_ENUM_FLAG(uint32_t, ResourceState)

/// Choosing Memory Type
/// 只有 Buffer 使用
/// TODO: 为什么不和 Texture 共享使用？
typedef enum ResourceMemoryUsage {
    /// No intended memory usage specified.
    RESOURCE_MEMORY_USAGE_UNKNOWN = 0,
    /// Memory will be used on device only, no need to be mapped on host.
    RESOURCE_MEMORY_USAGE_GPU_ONLY = 1,
    /// Memory will be mapped on host. Could be used for transfer to device.
    RESOURCE_MEMORY_USAGE_CPU_ONLY = 2,
    /// Memory will be used for frequent (dynamic) updates from host and reads on device.
    RESOURCE_MEMORY_USAGE_CPU_TO_GPU = 3,
    /// Memory will be used for writing on device and readback on host.
    RESOURCE_MEMORY_USAGE_GPU_TO_CPU = 4,
    RESOURCE_MEMORY_USAGE_COUNT,
    RESOURCE_MEMORY_USAGE_MAX_ENUM = 0x7FFFFFFF
} ResourceMemoryUsage;

/// Forward declarations
typedef struct TFRendererContextDesc TFRendererContextDesc;
typedef struct RendererDesc RendererDesc;
typedef struct RendererContext RendererContext;
typedef struct Renderer Renderer;
typedef struct Queue Queue;
typedef struct QueueDesc QueueDesc;
typedef struct Semaphore Semaphore;
typedef struct Fence Fence;
typedef struct Pipeline Pipeline;
typedef struct Buffer Buffer;
typedef struct Texture Texture;
typedef struct RenderTarget RenderTarget;
typedef struct Shader Shader;
typedef struct SwapChainDesc SwapChainDesc;
typedef struct SwapChain SwapChain;
typedef struct CmdPoolDesc CmdPoolDesc;
typedef struct CmdPool CmdPool;
typedef struct CmdDesc CmdDesc;
typedef struct Cmd Cmd;
typedef struct DescriptorSet DescriptorSet;
typedef struct DescriptorIndexMap DescriptorIndexMap;// backend 内部数据结构 //TODO 既然定义必须相同，作为backend 内部数据结构的意义是？
typedef struct PipelineCache PipelineCache;
typedef struct RenderTargetDesc RenderTargetDesc;
typedef struct SamplerDesc SamplerDesc;
typedef struct Sampler Sampler;
typedef struct BinaryShaderDesc BinaryShaderDesc;
typedef struct BinaryShader BinaryShader;
typedef struct PipelineDesc PipelineDesc;
typedef struct RootSignatureDesc RootSignatureDesc;
typedef struct RootSignature RootSignature;
typedef struct PipelineCacheDesc PipelineCacheDesc;
typedef struct DescriptorSetDesc DescriptorSetDesc;
typedef struct DescriptorData DescriptorData;
typedef struct LoadActionsDesc LoadActionsDesc;
typedef struct BufferBarrier BufferBarrier;
typedef struct TextureBarrier TextureBarrier;
typedef struct RenderTargetBarrier RenderTargetBarrier;
typedef struct QueueSubmitDesc QueueSubmitDesc;
typedef struct QueuePresentDesc QueuePresentDesc;
typedef struct FenceStatus FenceStatus;
typedef struct CommandSignatureDesc CommandSignatureDesc;
typedef struct CommandSignature CommandSignature;
typedef struct QueryPool QueryPool;
typedef struct QueryPoolDesc QueryPoolDesc;
typedef struct QueryDesc QueryDesc;
typedef struct MarkerType MarkerType;

/// Raytracing
typedef struct Raytracing Raytracing;
typedef struct RaytracingHitGroup RaytracingHitGroup;
typedef struct AccelerationStructure AccelerationStructure;

typedef struct IndirectDrawArguments
{
    uint32_t mVertexCount;
    uint32_t mInstanceCount;
    uint32_t mStartVertex;
    uint32_t mStartInstance;
} IndirectDrawArguments;

typedef struct IndirectDrawIndexArguments
{
    uint32_t mIndexCount;
    uint32_t mInstanceCount;
    uint32_t mStartIndex;
    uint32_t mVertexOffset;
    uint32_t mStartInstance;
} IndirectDrawIndexArguments;

typedef struct IndirectDispatchArguments
{
    uint32_t mGroupCountX;
    uint32_t mGroupCountY;
    uint32_t mGroupCountZ;
} IndirectDispatchArguments;

typedef enum IndirectArgumentType
{
    INDIRECT_DRAW,
    INDIRECT_DRAW_INDEX,
    INDIRECT_DISPATCH,
    INDIRECT_VERTEX_BUFFER,
    INDIRECT_INDEX_BUFFER,
    INDIRECT_CONSTANT,
    INDIRECT_DESCRIPTOR_TABLE,         // only for vulkan
    INDIRECT_PIPELINE,                 // only for vulkan now, probably will add to dx when it comes to xbox
    INDIRECT_CONSTANT_BUFFER_VIEW,     // only for dx
    INDIRECT_SHADER_RESOURCE_VIEW,     // only for dx
    INDIRECT_UNORDERED_ACCESS_VIEW,    // only for dx
#if defined(METAL)
    INDIRECT_COMMAND_BUFFER,            // metal ICB
	INDIRECT_COMMAND_BUFFER_RESET,      // metal ICB reset
	INDIRECT_COMMAND_BUFFER_OPTIMIZE    // metal ICB optimization
#endif
} IndirectArgumentType;
/************************************************/

typedef enum DescriptorType
{
    DESCRIPTOR_TYPE_UNDEFINED = 0,
    DESCRIPTOR_TYPE_SAMPLER = 0x01,
    // SRV Read only texture
    DESCRIPTOR_TYPE_TEXTURE = (DESCRIPTOR_TYPE_SAMPLER << 1),
    /// Unordered Access view(UAV) Texture
    /// https://docs.microsoft.com/en-us/windows/uwp/graphics-concepts/shader-resource-view--srv-
    /// UAV Texture
    DESCRIPTOR_TYPE_RW_TEXTURE = (DESCRIPTOR_TYPE_TEXTURE << 1),//给 compute shader 使用，metal 模块 texInfo.isUAV ? DESCRIPTOR_TYPE_RW_TEXTURE : DESCRIPTOR_TYPE_TEXTURE
    // SRV Read only buffer
    DESCRIPTOR_TYPE_BUFFER = (DESCRIPTOR_TYPE_RW_TEXTURE << 1),
    DESCRIPTOR_TYPE_BUFFER_RAW = (DESCRIPTOR_TYPE_BUFFER | (DESCRIPTOR_TYPE_BUFFER << 1)),
    /// ![游戏引擎随笔 0x16：现代图形 API 的 UAV Counter](https://zhuanlan.zhihu.com/p/330852688)
    /// UAV Buffer
    DESCRIPTOR_TYPE_RW_BUFFER = (DESCRIPTOR_TYPE_BUFFER << 2),
    DESCRIPTOR_TYPE_RW_BUFFER_RAW = (DESCRIPTOR_TYPE_RW_BUFFER | (DESCRIPTOR_TYPE_RW_BUFFER << 1)),
    /// Uniform buffer
    DESCRIPTOR_TYPE_UNIFORM_BUFFER = (DESCRIPTOR_TYPE_RW_BUFFER << 2),
    /// Push constant / Root constant
    DESCRIPTOR_TYPE_ROOT_CONSTANT = (DESCRIPTOR_TYPE_UNIFORM_BUFFER << 1),
    /// IA
    DESCRIPTOR_TYPE_VERTEX_BUFFER = (DESCRIPTOR_TYPE_ROOT_CONSTANT << 1),
    DESCRIPTOR_TYPE_INDEX_BUFFER = (DESCRIPTOR_TYPE_VERTEX_BUFFER << 1),
    DESCRIPTOR_TYPE_INDIRECT_BUFFER = (DESCRIPTOR_TYPE_INDEX_BUFFER << 1),
    /// Cubemap SRV
    DESCRIPTOR_TYPE_TEXTURE_CUBE = (DESCRIPTOR_TYPE_TEXTURE | (DESCRIPTOR_TYPE_INDIRECT_BUFFER << 1)),
    /// RTV / DSV per mip slice
    DESCRIPTOR_TYPE_RENDER_TARGET_MIP_SLICES = (DESCRIPTOR_TYPE_INDIRECT_BUFFER << 2),
    /// RTV / DSV per array slice
    DESCRIPTOR_TYPE_RENDER_TARGET_ARRAY_SLICES = (DESCRIPTOR_TYPE_RENDER_TARGET_MIP_SLICES << 1),
    /// RTV / DSV per depth slice
    DESCRIPTOR_TYPE_RENDER_TARGET_DEPTH_SLICES = (DESCRIPTOR_TYPE_RENDER_TARGET_ARRAY_SLICES << 1),
    DESCRIPTOR_TYPE_RAY_TRACING = (DESCRIPTOR_TYPE_RENDER_TARGET_DEPTH_SLICES << 1),
#if defined(VULKAN)
    /// Subpass input (descriptor type only available in Vulkan)
	DESCRIPTOR_TYPE_INPUT_ATTACHMENT = (DESCRIPTOR_TYPE_RAY_TRACING << 1),
	DESCRIPTOR_TYPE_TEXEL_BUFFER = (DESCRIPTOR_TYPE_INPUT_ATTACHMENT << 1),
	DESCRIPTOR_TYPE_RW_TEXEL_BUFFER = (DESCRIPTOR_TYPE_TEXEL_BUFFER << 1),
	DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER = (DESCRIPTOR_TYPE_RW_TEXEL_BUFFER << 1),

	/// Khronos extension ray tracing
	DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE = (DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER << 1),
	DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_BUILD_INPUT = (DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE << 1),
	DESCRIPTOR_TYPE_SHADER_DEVICE_ADDRESS = (DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_BUILD_INPUT << 1),
	DESCRIPTOR_TYPE_SHADER_BINDING_TABLE = (DESCRIPTOR_TYPE_SHADER_DEVICE_ADDRESS << 1),
#endif
#if defined(METAL)
    DESCRIPTOR_TYPE_ARGUMENT_BUFFER = (DESCRIPTOR_TYPE_RAY_TRACING << 1),
	DESCRIPTOR_TYPE_INDIRECT_COMMAND_BUFFER = (DESCRIPTOR_TYPE_ARGUMENT_BUFFER << 1),
	DESCRIPTOR_TYPE_RENDER_PIPELINE_STATE = (DESCRIPTOR_TYPE_INDIRECT_COMMAND_BUFFER << 1),
#endif
} DescriptorType;
MAKE_ENUM_FLAG(uint32_t, DescriptorType)

typedef enum SampleCount
{
    SAMPLE_COUNT_1 = 1,
    SAMPLE_COUNT_2 = 2,
    SAMPLE_COUNT_4 = 4,
    SAMPLE_COUNT_8 = 8,
    SAMPLE_COUNT_16 = 16,
} SampleCount;

#ifdef METAL
typedef enum ShaderStage
{
	SHADER_STAGE_NONE = 0,
	SHADER_STAGE_VERT = 0X00000001,
	SHADER_STAGE_FRAG = 0X00000002,
	SHADER_STAGE_COMP = 0X00000004,
	SHADER_STAGE_ALL_GRAPHICS = ((uint32_t)SHADER_STAGE_VERT | (uint32_t)SHADER_STAGE_FRAG),
	SHADER_STAGE_COUNT = 3,
} ShaderStage;
#else
typedef enum ShaderStage
{
    SHADER_STAGE_NONE = 0,
    SHADER_STAGE_VERT = 0X00000001,
    SHADER_STAGE_TESC = 0X00000002,
    SHADER_STAGE_TESE = 0X00000004,
    SHADER_STAGE_GEOM = 0X00000008,
    SHADER_STAGE_FRAG = 0X00000010,
    SHADER_STAGE_COMP = 0X00000020,
    SHADER_STAGE_RAYTRACING = 0X00000040,
    SHADER_STAGE_ALL_GRAPHICS =
    ((uint32_t)SHADER_STAGE_VERT | (uint32_t)SHADER_STAGE_TESC | (uint32_t)SHADER_STAGE_TESE | (uint32_t)SHADER_STAGE_GEOM |
     (uint32_t)SHADER_STAGE_FRAG),
    SHADER_STAGE_HULL = SHADER_STAGE_TESC,
    SHADER_STAGE_DOMN = SHADER_STAGE_TESE,
    SHADER_STAGE_COUNT = 7,// todo 改成硬件feature set变量？
} ShaderStage;
#endif // ifdef METAL
MAKE_ENUM_FLAG(uint32_t, ShaderStage)

// This include is placed here because it uses data types defined previously in this file
// and forward enums are not allowed for some compilers (Xcode).
//#include "IShaderReflection.h" //TODO 1

typedef enum PrimitiveTopology
{
    PRIMITIVE_TOPO_POINT_LIST = 0,
    PRIMITIVE_TOPO_LINE_LIST,
    PRIMITIVE_TOPO_LINE_STRIP,
    PRIMITIVE_TOPO_TRI_LIST,
    PRIMITIVE_TOPO_TRI_STRIP,
    PRIMITIVE_TOPO_PATCH_LIST,
    PRIMITIVE_TOPO_COUNT,
} PrimitiveTopology;

typedef enum IndexType
{
    INDEX_TYPE_UINT32 = 0,
    INDEX_TYPE_UINT16,
} IndexType;

typedef enum ShaderSemantic
{
    SEMANTIC_UNDEFINED = 0,
    SEMANTIC_POSITION,
    SEMANTIC_NORMAL,
    SEMANTIC_COLOR,
    SEMANTIC_TANGENT,
    SEMANTIC_BITANGENT,
    SEMANTIC_JOINTS,
    SEMANTIC_WEIGHTS,
    SEMANTIC_SHADING_RATE,
    SEMANTIC_TEXCOORD0,
    SEMANTIC_TEXCOORD1,
    SEMANTIC_TEXCOORD2,
    SEMANTIC_TEXCOORD3,
    SEMANTIC_TEXCOORD4,
    SEMANTIC_TEXCOORD5,
    SEMANTIC_TEXCOORD6,
    SEMANTIC_TEXCOORD7,
    SEMANTIC_TEXCOORD8,
    SEMANTIC_TEXCOORD9,
} ShaderSemantic;

typedef enum BlendConstant
{
    BC_ZERO = 0,
    BC_ONE,
    BC_SRC_COLOR,
    BC_ONE_MINUS_SRC_COLOR,
    BC_DST_COLOR,
    BC_ONE_MINUS_DST_COLOR,
    BC_SRC_ALPHA,
    BC_ONE_MINUS_SRC_ALPHA,
    BC_DST_ALPHA,
    BC_ONE_MINUS_DST_ALPHA,
    BC_SRC_ALPHA_SATURATE,
    BC_BLEND_FACTOR,
    BC_ONE_MINUS_BLEND_FACTOR,
    MAX_BLEND_CONSTANTS
} BlendConstant;

typedef enum BlendMode
{
    BM_ADD,
    BM_SUBTRACT,
    BM_REVERSE_SUBTRACT,
    BM_MIN,
    BM_MAX,
    MAX_BLEND_MODES,
} BlendMode;

typedef enum CompareMode
{
    CMP_NEVER,
    CMP_LESS,
    CMP_EQUAL,
    CMP_LEQUAL,
    CMP_GREATER,
    CMP_NOTEQUAL,
    CMP_GEQUAL,
    CMP_ALWAYS,
    MAX_COMPARE_MODES,
} CompareMode;

typedef enum StencilOp
{
    STENCIL_OP_KEEP,
    STENCIL_OP_SET_ZERO,
    STENCIL_OP_REPLACE,
    STENCIL_OP_INVERT,
    STENCIL_OP_INCR,
    STENCIL_OP_DECR,
    STENCIL_OP_INCR_SAT,
    STENCIL_OP_DECR_SAT,
    MAX_STENCIL_OPS,
} StencilOp;

static const int RED = 0x1;
static const int GREEN = 0x2;
static const int BLUE = 0x4;
static const int ALPHA = 0x8;
static const int ALL = (RED | GREEN | BLUE | ALPHA);
static const int NONE = 0;

static const int BS_NONE = -1;
static const int DS_NONE = -1;
static const int RS_NONE = -1;

// Blend states are always attached to one of the eight or more render targets that
// are in a MRT
// Mask constants
typedef enum BlendStateTargets
{
    BLEND_STATE_TARGET_0 = 0x1,
    BLEND_STATE_TARGET_1 = 0x2,
    BLEND_STATE_TARGET_2 = 0x4,
    BLEND_STATE_TARGET_3 = 0x8,
    BLEND_STATE_TARGET_4 = 0x10,
    BLEND_STATE_TARGET_5 = 0x20,
    BLEND_STATE_TARGET_6 = 0x40,
    BLEND_STATE_TARGET_7 = 0x80,
    BLEND_STATE_TARGET_ALL = 0xFF,
} BlendStateTargets;
MAKE_ENUM_FLAG(uint32_t, BlendStateTargets)

typedef enum CullMode
{
    CULL_MODE_NONE = 0,
    CULL_MODE_BACK,
    CULL_MODE_FRONT,
    CULL_MODE_BOTH,
    MAX_CULL_MODES
} CullMode;

typedef enum FrontFace
{
    FRONT_FACE_CCW = 0,
    FRONT_FACE_CW
} FrontFace;

typedef enum FillMode
{
    FILL_MODE_SOLID,
    FILL_MODE_WIREFRAME,
    MAX_FILL_MODES
} FillMode;

typedef enum PipelineType
{
    PIPELINE_TYPE_UNDEFINED = 0,
    PIPELINE_TYPE_COMPUTE,
    PIPELINE_TYPE_GRAPHICS,
    PIPELINE_TYPE_RAYTRACING,
    PIPELINE_TYPE_COUNT,
} PipelineType;

typedef enum FilterType
{
    FILTER_NEAREST = 0,
    FILTER_LINEAR,
} FilterType;

typedef enum AddressMode
{
    ADDRESS_MODE_MIRROR,
    ADDRESS_MODE_REPEAT,
    ADDRESS_MODE_CLAMP_TO_EDGE,
    ADDRESS_MODE_CLAMP_TO_BORDER
} AddressMode;

typedef enum MipMapMode
{
    MIPMAP_MODE_NEAREST = 0,
    MIPMAP_MODE_LINEAR
} MipMapMode;

typedef union ClearValue
{
    struct
    {
        float r;
        float g;
        float b;
        float a;
    };
    struct
    {
        float    depth;
        uint32_t stencil;
    };
} ClearValue;

/// d3d12 only
typedef enum ShadingRate  // moltenvk interlockFeatures->fragmentShaderShadingRateInterlock = false;    // Requires variable rate shading; not supported yet in Metal
{
    SHADING_RATE_NOT_SUPPORTED = 0x0,
    SHADING_RATE_FULL = 0x1,
    SHADING_RATE_HALF = SHADING_RATE_FULL << 1,
    SHADING_RATE_QUARTER = SHADING_RATE_HALF << 1,
    SHADING_RATE_EIGHTH = SHADING_RATE_QUARTER << 1,
    SHADING_RATE_1X2 = SHADING_RATE_EIGHTH << 1,
    SHADING_RATE_2X1 = SHADING_RATE_1X2 << 1,
    SHADING_RATE_2X4 = SHADING_RATE_2X1 << 1,
    SHADING_RATE_4X2 = SHADING_RATE_2X4 << 1,
} ShadingRate;
MAKE_ENUM_FLAG(uint32_t, ShadingRate)

typedef enum ShadingRateCombiner
{
    SHADING_RATE_COMBINER_PASSTHROUGH = 0,
    SHADING_RATE_COMBINER_OVERRIDE = 1,
    SHADING_RATE_COMBINER_MIN = 2,
    SHADING_RATE_COMBINER_MAX = 3,
    SHADING_RATE_COMBINER_SUM = 4,
} ShadingRateCombiner;

typedef enum ShadingRateCaps
{
    SHADING_RATE_CAPS_NOT_SUPPORTED = 0x0,
    SHADING_RATE_CAPS_PER_DRAW = 0x1,
    SHADING_RATE_CAPS_PER_TILE = SHADING_RATE_CAPS_PER_DRAW << 1,
} ShadingRateCaps;
MAKE_ENUM_FLAG(uint32_t, ShadingRateCaps)

typedef enum BufferCreationFlags
{
    /// Default flag (Buffer will use aliased memory, buffer will not be cpu accessible until mapBuffer is called)
    BUFFER_CREATION_FLAG_NONE = 0x01,
    /// Buffer will allocate its own memory (COMMITTED resource)
    BUFFER_CREATION_FLAG_OWN_MEMORY_BIT = 0x02,
    /// Buffer will be persistently mapped
    BUFFER_CREATION_FLAG_PERSISTENT_MAP_BIT = 0x04,//只有 metal 使用
    /// Use ESRAM to store this buffer
    BUFFER_CREATION_FLAG_ESRAM = 0x08,
    /// Flag to specify not to allocate descriptors for the resource /// TODO not to allocate descriptors for the resource怎么理解
    BUFFER_CREATION_FLAG_NO_DESCRIPTOR_VIEW_CREATION = 0x10,

#ifdef VULKAN
    /* Memory Host Flags */
	BUFFER_CREATION_FLAG_HOST_VISIBLE = 0x100,
	BUFFER_CREATION_FLAG_HOST_COHERENT = 0x200,
#endif

#ifdef METAL
    /* ICB Flags */
	/// Inherit pipeline in ICB
	BUFFER_CREATION_FLAG_ICB_INHERIT_PIPELINE = 0x100,
	/// Inherit pipeline in ICB
	BUFFER_CREATION_FLAG_ICB_INHERIT_BUFFERS = 0x200,

#endif
} BufferCreationFlags;
MAKE_ENUM_FLAG(uint32_t, BufferCreationFlags)

typedef enum TextureCreationFlags
{
    /// Default flag (Texture will use default allocation strategy decided by the api specific allocator)
    TEXTURE_CREATION_FLAG_NONE = 0,
    /// Texture will allocate its own memory (COMMITTED resource)
    TEXTURE_CREATION_FLAG_OWN_MEMORY_BIT = 0x01,
    /// Texture will be allocated in memory which can be shared among multiple processes
    TEXTURE_CREATION_FLAG_EXPORT_BIT = 0x02,
    /// Texture will be allocated in memory which can be shared among multiple gpus
    TEXTURE_CREATION_FLAG_EXPORT_ADAPTER_BIT = 0x04,
    /// Texture will be imported from a handle created in another process
    TEXTURE_CREATION_FLAG_IMPORT_BIT = 0x08,
    /// Use ESRAM to store this texture
    TEXTURE_CREATION_FLAG_ESRAM = 0x10,
    /// Use on-tile memory to store this texture
    TEXTURE_CREATION_FLAG_ON_TILE = 0x20,
    /// Prevent compression meta data from generating (XBox)
    TEXTURE_CREATION_FLAG_NO_COMPRESSION = 0x40,
    /// Force 2D instead of automatically determining dimension based on width, height, depth
    TEXTURE_CREATION_FLAG_FORCE_2D = 0x80,
    /// Force 3D instead of automatically determining dimension based on width, height, depth
    TEXTURE_CREATION_FLAG_FORCE_3D = 0x100,
    /// Display target
    TEXTURE_CREATION_FLAG_ALLOW_DISPLAY_TARGET = 0x200,
    /// Create an sRGB texture.
    TEXTURE_CREATION_FLAG_SRGB = 0x400,
    /// Create a normal map texture
    TEXTURE_CREATION_FLAG_NORMAL_MAP = 0x800,
    /// Fast clear
    TEXTURE_CREATION_FLAG_FAST_CLEAR = 0x1000,
    /// Fragment mask
    TEXTURE_CREATION_FLAG_FRAG_MASK = 0x2000,
    /// Doubles the amount of array layers of the texture when rendering VR. Also forces the texture to be a 2D Array texture.
    TEXTURE_CREATION_FLAG_VR_MULTIVIEW = 0x4000,
    /// Binds the FFR fragment density if this texture is used as a render target.
    TEXTURE_CREATION_FLAG_VR_FOVEATED_RENDERING = 0x8000,
} TextureCreationFlags;
MAKE_ENUM_FLAG(uint32_t, TextureCreationFlags)

typedef enum GPUPresetLevel
{
    GPU_PRESET_NONE = 0,
    GPU_PRESET_OFFICE,    //This means unsupported
    GPU_PRESET_LOW,
    GPU_PRESET_MEDIUM,
    GPU_PRESET_HIGH,
    GPU_PRESET_ULTRA,
    GPU_PRESET_COUNT
} GPUPresetLevel;

typedef struct BufferBarrier
{
    Buffer*       pBuffer;
    ResourceState mCurrentState;
    ResourceState mNewState;
    uint8_t       mBeginOnly : 1;
    uint8_t       mEndOnly : 1;
    uint8_t       mAcquire : 1;
    uint8_t       mRelease : 1;
    uint8_t       mQueueType : 5;
} BufferBarrier;

typedef struct TextureBarrier
{
    Texture*      pTexture;
    ResourceState mCurrentState;
    ResourceState mNewState;
    uint8_t       mBeginOnly : 1;
    uint8_t       mEndOnly : 1;
    uint8_t       mAcquire : 1;
    uint8_t       mRelease : 1;
    uint8_t       mQueueType : 5;
    /// Specifiy whether following barrier targets particular subresource
    uint8_t mSubresourceBarrier : 1;
    /// Following values are ignored if mSubresourceBarrier is false
    uint8_t  mMipLevel : 7;
    uint16_t mArrayLayer;
} TextureBarrier;

typedef struct RenderTargetBarrier // TODO: RenderTargetBarrier cmdBindRenderTargets 合并设计？
{
    RenderTarget* pRenderTarget;
    ResourceState mCurrentState;
    ResourceState mNewState;
    uint8_t       mBeginOnly : 1;
    uint8_t       mEndOnly : 1;
    uint8_t       mAcquire : 1;
    uint8_t       mRelease : 1;
    uint8_t       mQueueType : 5;
    /// Specifiy whether following barrier targets particular subresource
    uint8_t mSubresourceBarrier : 1;
    /// Following values are ignored if mSubresourceBarrier is false
    uint8_t  mMipLevel : 7;
    uint16_t mArrayLayer;
} RenderTargetBarrier;

typedef struct ReadRange
{
    uint64_t mOffset;
    uint64_t mSize;
} ReadRange;

typedef enum QueryType
{
    QUERY_TYPE_TIMESTAMP = 0,
    QUERY_TYPE_PIPELINE_STATISTICS,
    QUERY_TYPE_OCCLUSION,
    QUERY_TYPE_COUNT,
} QueryType;

typedef struct QueryPoolDesc //TODO: 和 webgpu QuerySet 是什么关系？
{
    QueryType mType;
    uint32_t  mQueryCount;
    uint32_t  mNodeIndex;
} QueryPoolDesc;

typedef struct QueryDesc
{
    uint32_t mIndex;
} QueryDesc;

typedef struct QueryPool // 从 metal 实现看，是查询 gpu 耗时
{
    union
    {
#if defined(DIRECT3D12)
        struct
		{
			ID3D12QueryHeap* pDxQueryHeap;
			D3D12_QUERY_TYPE mType;
		} mD3D12;
#endif
#if defined(VULKAN)
        struct
		{
			VkQueryPool pVkQueryPool;
			VkQueryType mType;
		} mVulkan;
#endif
#if defined(METAL)
        struct
		{
			double mGpuTimestampStart;
			double mGpuTimestampEnd;
		};
#endif
#if defined(DIRECT3D11)
        struct
		{
			ID3D11Query** ppDxQueries;
			D3D11_QUERY   mType;
		} mD3D11;
#endif
#if defined(GLES)
        struct
        {
            uint32_t* pQueries;
            uint32_t  mType;
            int32_t   mDisjointOccurred;
        } mGLES;
#endif
#if defined(ORBIS)
        struct
		{
			OrbisQueryPool mStruct;
			uint32_t       mType;
		};
#endif
#if defined(PROSPERO)
        struct
		{
			ProsperoQueryPool mStruct;
			uint32_t          mType;
		};
#endif
    };
    uint32_t mCount;
} QueryPool;

#if defined(VULKAN)
typedef enum SamplerRange
{
	SAMPLER_RANGE_FULL = 0,
	SAMPLER_RANGE_NARROW = 1,
} SamplerRange;

typedef enum SamplerModelConversion
{
	SAMPLER_MODEL_CONVERSION_RGB_IDENTITY = 0,
	SAMPLER_MODEL_CONVERSION_YCBCR_IDENTITY = 1,
	SAMPLER_MODEL_CONVERSION_YCBCR_709 = 2,
	SAMPLER_MODEL_CONVERSION_YCBCR_601 = 3,
	SAMPLER_MODEL_CONVERSION_YCBCR_2020 = 4,
} SamplerModelConversion;

typedef enum SampleLocation
{
	SAMPLE_LOCATION_COSITED = 0,
	SAMPLE_LOCATION_MIDPOINT = 1,
} SampleLocation;
#endif // defined(VULKAN)

/// Data structure holding necessary info to create a Buffer
///
///
/// Add a staging buffer.
/// uint16_t formatByteWidth = TinyImageFormat_BitSizeOfBlock(pRenderTarget->mFormat) / 8;
/// Buffer* buffer = 0;
/// BufferDesc bufferDesc = {};
/// bufferDesc.mDescriptors = DESCRIPTOR_TYPE_BUFFER;
/// bufferDesc.mMemoryUsage = RESOURCE_MEMORY_USAGE_GPU_TO_CPU;
/// bufferDesc.mSize = padded_size;
/// bufferDesc.mFlags = BUFFER_CREATION_FLAG_NO_DESCRIPTOR_VIEW_CREATION | BUFFER_CREATION_FLAG_PERSISTENT_MAP_BIT;
/// bufferDesc.mStartState = RESOURCE_STATE_COPY_DEST;
/// bufferDesc.mFormat = pRenderTarget->mFormat;
/// addBuffer(pRenderer, &bufferDesc, &buffer);
///
///
/// Index buffer
/// BufferDesc indexBufferDesc = {};
/// indexBufferDesc.mDescriptors = DESCRIPTOR_TYPE_INDEX_BUFFER;
/// indexBufferDesc.mSize = indexStride * indexCount;
/// indexBufferDesc.mElementCount = indexBufferDesc.mSize / (structuredBuffers ? indexStride : sizeof(uint32_t));
/// indexBufferDesc.mStructStride = indexStride;
/// indexBufferDesc.mMemoryUsage = RESOURCE_MEMORY_USAGE_GPU_ONLY;
/// #if UMA
///     indexBufferDesc.mStartState = RESOURCE_STATE_INDEX_BUFFER;
/// #endif
/// addBuffer(pRenderer, &indexBufferDesc, &geom->pIndexBuffer);
///
///
/// todo mDescriptors mMemoryUsage mFlags mStartState  mFormat 几个属性对用户是否过于复杂
//同步、异步更新数据
//        CPU、GPU可见内存是否在创建描述信息中显式表达。webgpu-c8e0b39 BufferDescriptor::mappedAtCreation bool
//        GPU独享内存如何更新数据。webgpu-c8e0b39 memcpy更新CPU可见buffer，Queue::WriteBuffer更新GPU独享buffer。The-Forge 约束在addResource or beginUpdateResource/endUpdateResource pair，完成资源加载API的统一。从DEMO看，很少直接调用IRenderer API，而是通过IResourceLoader API内部调用，更方便。The-Forge的实现看着更啰嗦。
//beginUpdateResource、endUpdateResource 为什么设计成两个API，和addResource的区别是什么？
//pResourceLoader->pCopyEngines[0] StagingBuffer 默认配置多大？
//WebGPU如何定义实现IndirectBuffer
typedef struct BufferDesc
{
    /// Size of the buffer (in bytes)
    uint64_t mSize;
    /// Set this to specify a counter buffer for this buffer (applicable to BUFFER_USAGE_STORAGE_SRV, BUFFER_USAGE_STORAGE_UAV)
    struct Buffer* pCounterBuffer;
    /// Index of the first element accessible by the SRV/UAV (applicable to BUFFER_USAGE_STORAGE_SRV, BUFFER_USAGE_STORAGE_UAV)
    uint64_t mFirstElement;
    /// Number of elements in the buffer (applicable to BUFFER_USAGE_STORAGE_SRV, BUFFER_USAGE_STORAGE_UAV)
    uint64_t mElementCount;
    /// Size of each element (in bytes) in the buffer (applicable to BUFFER_USAGE_STORAGE_SRV, BUFFER_USAGE_STORAGE_UAV)
    uint64_t mStructStride;
    /// Debug name used in gpu profile
    const char* pName;
    uint32_t*   pSharedNodeIndices;
    /// Alignment
    /// METAL用来检查 device 最小 uniform buffer alignment
    uint32_t mAlignment;
    /// Decides which memory heap buffer will use (default, upload, readback)
    ResourceMemoryUsage mMemoryUsage;
    /// Creation flags of the buffer
    BufferCreationFlags mFlags;
    /// What type of queue the buffer is owned by
    QueueType mQueueType;
    /// What state will the buffer get created in
    ResourceState mStartState;
    /// ICB draw type
    IndirectArgumentType mICBDrawType;
    /// ICB max vertex buffers slots count
    uint32_t mICBMaxVertexBufferBind;
    /// ICB max vertex buffers slots count
    uint32_t mICBMaxFragmentBufferBind;
    /// Format of the buffer (applicable to typed storage buffers (Buffer<T>)
    TinyImageFormat mFormat;
    /// Flags specifying the suitable usage of this buffer (Uniform buffer, Vertex Buffer, Index Buffer,...)
    /// Buffer 类型，比如 Uniform buffer, Vertex Buffer, Index Buffer,...
    DescriptorType mDescriptors;
    /// The index of the GPU in SLI/Cross-Fire that owns this buffer, or the Renderer index in unlinked mode.
    uint32_t       mNodeIndex;
    uint32_t       mSharedNodeIndexCount;
} BufferDesc;

typedef struct DEFINE_ALIGNED(Buffer, 64)
{
    /// CPU address of the mapped buffer (applicable to buffers created in CPU accessible heaps (CPU, CPU_TO_GPU, GPU_TO_CPU)
    void* pCpuMappedAddress;
    union
    {
#if defined(DIRECT3D12)
        struct
		{
			/// GPU Address - Cache to avoid calls to ID3D12Resource::GetGpuVirtualAddress
			D3D12_GPU_VIRTUAL_ADDRESS mDxGpuAddress;
			/// Descriptor handle of the CBV in a CPU visible descriptor heap (applicable to BUFFER_USAGE_UNIFORM)
			D3D12_CPU_DESCRIPTOR_HANDLE mDxDescriptorHandles;
			/// Offset from mDxDescriptors for srv descriptor handle
			uint64_t mDxSrvOffset : 8;
			/// Offset from mDxDescriptors for uav descriptor handle
			uint64_t mDxUavOffset : 8;
			/// Native handle of the underlying resource
			ID3D12Resource* pDxResource;
			/// Contains resource allocation info such as parent heap, offset in heap
			D3D12MA::Allocation* pDxAllocation;
		} mD3D12;
#endif
#if defined(VULKAN)
        struct
		{
			/// Native handle of the underlying resource
			VkBuffer pVkBuffer;
			/// Buffer view
			VkBufferView pVkStorageTexelView;
			VkBufferView pVkUniformTexelView;
			/// Contains resource allocation info such as parent heap, offset in heap
			struct VmaAllocation_T* pVkAllocation;
			uint64_t                mOffset;
		} mVulkan;
#endif
#if defined(METAL)
        struct
		{
			struct VmaAllocation_T*      pAllocation;
			id<MTLBuffer>                mtlBuffer;
			id<MTLIndirectCommandBuffer> mtlIndirectCommandBuffer API_AVAILABLE(macos(10.14), ios(12.0));
			uint64_t                                              mOffset;
			uint64_t                                              mPadB;
		};
#endif
#if defined(DIRECT3D11)
        struct
		{
			ID3D11Buffer*              pDxResource;
			ID3D11ShaderResourceView*  pDxSrvHandle;
			ID3D11UnorderedAccessView* pDxUavHandle;
			uint64_t                   mFlags;
			uint64_t                   mPadA;
		} mD3D11;
#endif
#if defined(GLES)
        struct
        {
            GLuint mBuffer;
            GLenum mTarget;
            void*  pGLCpuMappedAddress;
        } mGLES;
#endif
    };
    uint64_t mSize : 32;
    uint64_t mDescriptors : 20;
    uint64_t mMemoryUsage : 3;
    uint64_t mNodeIndex : 4;
} Buffer;
// One cache line
COMPILE_ASSERT(sizeof(Buffer) == 8 * sizeof(uint64_t));

/// Data structure holding necessary info to create a Texture
typedef struct TextureDesc
{
    /// Optimized clear value (recommended to use this same value when clearing the rendertarget)
    ClearValue mClearValue;
    /// Pointer to native texture handle if the texture does not own underlying resource
    const void* pNativeHandle;//外部纹理，创建出来的 Texture::mOwnsImage = false
    /// Debug name used in gpu profile
    const char* pName;
    /// GPU indices to share this texture
    uint32_t* pSharedNodeIndices;
#if defined(VULKAN)
    VkSamplerYcbcrConversionInfo* pVkSamplerYcbcrConversionInfo;//VkImageViewCreateInfo pNext 使用 google CTS 只用在 VkSamplerYcbcrConversionInfo
#endif
    /// Texture creation flags (decides memory allocation strategy, sharing access,...)
    TextureCreationFlags mFlags;
    /// Width
    uint32_t mWidth;
    /// Height
    uint32_t mHeight;
    /// Depth (Should be 1 if not a mType is not TEXTURE_TYPE_3D)
    uint32_t mDepth;
    /// Texture array size (Should be 1 if texture is not a texture array or cubemap)
    uint32_t mArraySize;
    /// Number of mip levels
    uint32_t mMipLevels;//NOTE: Metal直接使用此值，Metal规定The default value is 1. For a buffer-backed or multisample textures, the value must be 1.//TODO GLES 后端不支持
    /// Number of multisamples per pixel (currently Textures created with mUsage TEXTURE_USAGE_SAMPLED_IMAGE only support SAMPLE_COUNT_1)
    SampleCount mSampleCount;
    /// The image quality level. The higher the quality, the lower the performance. The valid range is between zero and the value appropriate for mSampleCount
    uint32_t mSampleQuality;
    ///  image format
    TinyImageFormat mFormat;
    /// What state will the texture get created in
    ResourceState mStartState;//todo 是否要暴露给用户
    /// Descriptor creation
    DescriptorType mDescriptors;
    /// Number of GPUs to share this texture
    uint32_t mSharedNodeIndexCount;
    /// GPU which will own this texture
    uint32_t mNodeIndex;
} TextureDesc;

// Virtual texture page as a part of the partially resident texture
// Contains memory bindings, offsets and status information
struct VirtualTexturePage
{
    /// Miplevel for this page
    uint32_t mipLevel;
    /// Array layer for this page
    uint32_t layer;
    /// Index for this page
    uint32_t index;
#if defined(USE_MULTIPLE_RENDER_APIS)
    union
	{
#endif
#if defined(DIRECT3D12)
    struct
		{
			/// Allocation and resource for this tile
			D3D12MA::Allocation* pAllocation;
			/// Offset for this page
			D3D12_TILED_RESOURCE_COORDINATE offset;
			/// Size for this page
			D3D12_TILED_RESOURCE_COORDINATE extent;
			/// Byte size for this page
			uint32_t size;
		} mD3D12;
#endif
#if defined(VULKAN)
    struct
		{
			/// Allocation and resource for this tile
			void* pAllocation;
			/// Sparse image memory bind for this page
			VkSparseImageMemoryBind imageMemoryBind;
			/// Byte size for this page
			VkDeviceSize size;
		} mVulkan;
#endif
#if defined(USE_MULTIPLE_RENDER_APIS)
    };
#endif
};

typedef struct VirtualTexture // d3d12, vk 可用
{
#if defined(USE_MULTIPLE_RENDER_APIS)
    union
	{
#endif
#if defined(DIRECT3D12)
    struct
		{
			/// Cached allocated array that is required to interact with d3d12
			uint32_t* pCachedTileCounts;
			/// Pending allocation deletions
			D3D12MA::Allocation** pPendingDeletedAllocations;
		} mD3D12;
#endif
#if defined(VULKAN)
    struct
		{
			/// GPU memory pool for tiles
			void* pPool;
			/// Sparse image memory bindings of all memory-backed virtual tables
			VkSparseImageMemoryBind* pSparseImageMemoryBinds;
			/// Sparse opaque memory bindings for the mip tail (if present)
			VkSparseMemoryBind* pOpaqueMemoryBinds;
			/// GPU allocations for opaque memory binds (mip tail)
			void** pOpaqueMemoryBindAllocations;
			/// Pending allocation deletions
			void** pPendingDeletedAllocations;
			/// Memory type bits for Sparse texture's memory
			uint32_t mSparseMemoryTypeBits;
			/// Number of opaque memory binds
			uint32_t mOpaqueMemoryBindsCount;
		} mVulkan;
#endif
#if defined(USE_MULTIPLE_RENDER_APIS)
    };
#endif
    /// Virtual Texture members
    VirtualTexturePage* pPages;
    /// Pending intermediate buffer deletions
    Buffer** pPendingDeletedBuffers;
    /// Pending intermediate buffer deletions count
    uint32_t* pPendingDeletedBuffersCount;
    /// Pending allocation deletions count
    uint32_t* pPendingDeletedAllocationsCount;
    /// Readback buffer, must be filled by app. Size = mReadbackBufferSize * imagecount
    Buffer*  pReadbackBuffer;
    /// Original Pixel image data
    void*    pVirtualImageData;
    ///  Total pages count
    uint32_t mVirtualPageTotalCount;
    ///  Alive pages count
    uint32_t mVirtualPageAliveCount;
    /// Size of the readback buffer per image
    uint32_t mReadbackBufferSize;
    /// Size of the readback buffer per image
    uint32_t mPageVisibilityBufferSize;
    /// Sparse Virtual Texture Width
    uint16_t mSparseVirtualTexturePageWidth;
    /// Sparse Virtual Texture Height
    uint16_t mSparseVirtualTexturePageHeight;
    /// Number of mip levels that are tiled
    uint8_t mTiledMipLevelCount;
    /// Size of the pending deletion arrays in image count (highest currentImage + 1)
    uint8_t mPendingDeletionCount;
} VirtualTexture;

typedef struct DEFINE_ALIGNED(Texture, 64)
{
    union
    {
#if defined(DIRECT3D12)
        struct
		{
			/// Descriptor handle of the SRV in a CPU visible descriptor heap (applicable to TEXTURE_USAGE_SAMPLED_IMAGE)
			D3D12_CPU_DESCRIPTOR_HANDLE mDxDescriptorHandles;
			/// Native handle of the underlying resource
			ID3D12Resource* pDxResource;
			/// Contains resource allocation info such as parent heap, offset in heap
			D3D12MA::Allocation* pDxAllocation;
			uint64_t             mHandleCount : 24;
			uint64_t             mUavStartIndex : 1;
			uint32_t             mDescriptorSize;
		} mD3D12;
#endif
#if defined(VULKAN)
        struct
		{
			/// Opaque handle used by shaders for doing read/write operations on the texture
			VkImageView pVkSRVDescriptor;
			/// Opaque handle used by shaders for doing read/write operations on the texture
			VkImageView* pVkUAVDescriptors;
			/// Opaque handle used by shaders for doing read/write operations on the texture
			VkImageView pVkSRVStencilDescriptor;
			/// Native handle of the underlying resource
			VkImage pVkImage;
			union
			{
				/// Contains resource allocation info such as parent heap, offset in heap
				struct VmaAllocation_T* pVkAllocation;
				VkDeviceMemory          pVkDeviceMemory;
			};
		} mVulkan;
#endif
#if defined(METAL)
        struct
		{
			CVPixelBufferRef pBackingMemory;
			struct VmaAllocation_T* pAllocation;
			/// Native handle of the underlying resource
			id<MTLTexture> mtlTexture;//TODO 基于CoreVideo创建的需要持有CoreVideo，避免出现backing memory被提前释放，个人理解实际数据存储在PB中
			id<MTLTexture> __strong* pMtlUAVDescriptors;// shader read, read write 等类型有不同处理，cube, cube array 则创建 texture view
			id                       mpsTextureAllocator;
			uint32_t                 mtlPixelFormat;
			uint32_t                 mFlags : 31;
			uint32_t                 mIsColorAttachment : 1;//TODO (isRT && !isDepthBuffer) 为什么不能是 depth
		};
#endif
#if defined(DIRECT3D11)
        struct
		{
			ID3D11Resource*             pDxResource;
			ID3D11ShaderResourceView*   pDxSRVDescriptor;
			ID3D11UnorderedAccessView** pDxUAVDescriptors;
			uint64_t                    mPadA;
			uint64_t                    mPadB;
		} mD3D11;
#endif
#if defined(GLES)
        struct
        {
            GLuint mTexture;
            GLenum mTarget;
            GLenum mGlFormat;
            GLenum mInternalFormat;
            GLenum mType;
            bool   mStateModified;//glTexImage2D 上传数据为 true
        } mGLES;
#endif
#if defined(ORBIS)
        OrbisTexture mStruct;
		/// Contains resource allocation info such as parent heap, offset in heap
#endif
#if defined(PROSPERO)
        ProsperoTexture mStruct;
#endif
    };
    VirtualTexture* pSvt;
    /// Current state of the buffer
    uint32_t mWidth : 16;
    uint32_t mHeight : 16;
    uint32_t mDepth : 16;
    uint32_t mMipLevels : 5;
    uint32_t mArraySizeMinusOne : 11;// todo 仅 D3D12 使用？？为什么命名是 mArraySizeMinusOne
    uint32_t mFormat : 8;
    /// Flags specifying which aspects (COLOR,DEPTH,STENCIL) are included in the pVkImageView
    uint32_t mAspectMask : 4;
    uint32_t mNodeIndex : 4;
    uint32_t mUav : 1;//todo DESCRIPTOR_TYPE_RW_TEXTURE 给 compute 使用？
    /// This value will be false if the underlying resource is not owned by the texture (swapchain textures,...)
    uint32_t mOwnsImage : 1;
} Texture;
// One cache line
COMPILE_ASSERT(sizeof(Texture) == 16 * sizeof(uint64_t));

typedef struct RenderTargetDesc
{
    /// Texture creation flags (decides memory allocation strategy, sharing access,...)
    TextureCreationFlags mFlags;
    /// Width
    uint32_t mWidth;
    /// Height
    uint32_t mHeight;
    /// Depth (Should be 1 if not a mType is not TEXTURE_TYPE_3D)
    uint32_t mDepth;//todo 如何写参数校验
    /// Texture array size (Should be 1 if texture is not a texture array or cubemap)
    uint32_t mArraySize;//todo 如何写参数校验
    /// Number of mip levels
    uint32_t mMipLevels;
    /// MSAA
    SampleCount mSampleCount;
    /// Internal image format
    TinyImageFormat mFormat;
    /// What state will the texture get created in
    ResourceState mStartState;
    /// Optimized clear value (recommended to use this same value when clearing the rendertarget)
    ClearValue mClearValue;
    /// The image quality level. The higher the quality, the lower the performance. The valid range is between zero and the value appropriate for mSampleCount
    uint32_t mSampleQuality;
    /// Descriptor creation
    DescriptorType mDescriptors;
    const void*    pNativeHandle;
    /// Debug name used in gpu profile
    const char* pName;
    /// GPU indices to share this texture
    uint32_t* pSharedNodeIndices;
    /// Number of GPUs to share this texture
    uint32_t mSharedNodeIndexCount;
    /// GPU which will own this texture
    uint32_t mNodeIndex;
} RenderTargetDesc;

typedef struct DEFINE_ALIGNED(RenderTarget, 64)
{
    Texture* pTexture;
    union
    {
#if defined(DIRECT3D12)
        struct
		{
			D3D12_CPU_DESCRIPTOR_HANDLE mDxDescriptors;
			uint32_t                    mDxDescriptorSize;
			uint32_t                    mPadA;
			uint64_t                    mPadB;
			uint64_t                    mPadC;
		} mD3D12;
#endif
#if defined(VULKAN)
        struct
		{
			VkImageView  pVkDescriptor;
			VkImageView* pVkSliceDescriptors;
			uint32_t     mId;
		} mVulkan;
#endif
#if defined(METAL)
        struct
		{
			uint64_t mPadA[3];
		};
#endif
#if defined(DIRECT3D11)
        struct
		{
			union
			{
				/// Resources
				ID3D11RenderTargetView* pDxRtvDescriptor;
				ID3D11DepthStencilView* pDxDsvDescriptor;
			};
			union
			{
				/// Resources
				ID3D11RenderTargetView** pDxRtvSliceDescriptors;
				ID3D11DepthStencilView** pDxDsvSliceDescriptors;
			};
			uint64_t mPadA;
		} mD3D11;
#endif
#if defined(GLES)
        struct
        {
            GLuint mType;
            GLuint mFramebuffer;
            GLuint mDepthTarget;// Renderbuffer id
            GLuint mStencilTarget;// Renderbuffer id
        } mGLES;
#endif
#if defined(ORBIS)
        struct
		{
			OrbisRenderTarget mStruct;
			Texture*          pFragMask;
		};
#endif
#if defined(PROSPERO)
        struct
		{
			ProsperoRenderTarget mStruct;
			Texture*             pFragMask;
		};
#endif
    };
    ClearValue      mClearValue;
    uint32_t        mArraySize : 16;
    uint32_t        mDepth : 16;
    uint32_t        mWidth : 16;
    uint32_t        mHeight : 16;
    uint32_t        mDescriptors : 20;
    uint32_t        mMipLevels : 10;
    uint32_t        mSampleQuality : 5;
    TinyImageFormat mFormat;
    SampleCount     mSampleCount;
    bool            mVRMultiview;
    bool            mVRFoveatedRendering;
} RenderTarget;
COMPILE_ASSERT(sizeof(RenderTarget) <= 32 * sizeof(uint64_t));

typedef struct LoadActionsDesc//todo 如何支持非tile 的 dont care
{
    ClearValue     mClearColorValues[MAX_RENDER_TARGET_ATTACHMENTS];
    LoadActionType mLoadActionsColor[MAX_RENDER_TARGET_ATTACHMENTS];
    ClearValue     mClearDepth;
    LoadActionType mLoadActionDepth;
    LoadActionType mLoadActionStencil;
} LoadActionsDesc;

typedef struct SamplerDesc
{
    FilterType  mMinFilter;
    FilterType  mMagFilter;
    MipMapMode  mMipMapMode;
    AddressMode mAddressU;
    AddressMode mAddressV;
    AddressMode mAddressW;
    float       mMipLodBias;//todo 待定，与webgpu lodMinClamp lodMaxClamp 冲突?
    float       mMaxAnisotropy;
    CompareMode mCompareFunc;

#if defined(VULKAN)
    struct
	{
		TinyImageFormat        mFormat;
		SamplerModelConversion mModel;
		SamplerRange           mRange;
		SampleLocation         mChromaOffsetX;
		SampleLocation         mChromaOffsetY;
		FilterType             mChromaFilter;
		bool                   mForceExplicitReconstruction;
	} mSamplerConversionDesc;//TODO 没直接引用 vulkan 内容，考虑删除条件编译，通过 pRenderer->pCapBits->canShaderReadFrom[TinyImageFormat_G8_B8_R8_3PLANE_420_UNORM]; 查询
#endif
} SamplerDesc;

typedef struct DEFINE_ALIGNED(Sampler, 16)
{
    union
    {
#if defined(DIRECT3D12)
        struct
		{
			/// Description for creating the Sampler descriptor for this sampler
			D3D12_SAMPLER_DESC mDxDesc;
			/// Descriptor handle of the Sampler in a CPU visible descriptor heap
			D3D12_CPU_DESCRIPTOR_HANDLE mDxHandle;
		} mD3D12;
#endif
#if defined(VULKAN)
        struct
		{
			/// Native handle of the underlying resource
			VkSampler                    pVkSampler;
			VkSamplerYcbcrConversion     pVkSamplerYcbcrConversion;
			VkSamplerYcbcrConversionInfo mVkSamplerYcbcrConversionInfo;
		} mVulkan;
#endif
#if defined(METAL)
        struct
		{
			/// Native handle of the underlying resource
			id<MTLSamplerState> mtlSamplerState;
		};
#endif
#if defined(DIRECT3D11)
        struct
		{
			/// Native handle of the underlying resource
			ID3D11SamplerState* pSamplerState;
		} mD3D11;
#endif
#if defined(GLES)
        struct
        {
            GLenum mMinFilter;
            GLenum mMagFilter;
            GLenum mMipMapMode;
            GLenum mAddressS;
            GLenum mAddressT;
            GLenum mCompareFunc;
        } mGLES;
#endif
    };
} Sampler;
#if defined(DIRECT3D12)
COMPILE_ASSERT(sizeof(Sampler) == 8 * sizeof(uint64_t));
#elif defined(VULKAN)
COMPILE_ASSERT(sizeof(Sampler) <= 8 * sizeof(uint64_t));
#elif defined(GLES)
COMPILE_ASSERT(sizeof(Sampler) == 4 * sizeof(uint64_t));
#else
COMPILE_ASSERT(sizeof(Sampler) == 2 * sizeof(uint64_t));
#endif

/// One of the most important ways for the user to optimize performance for graphics is grouping the descriptors based on
/// the frequency at which they are updated. In Forge, there are 4 update frequencies
/// TODO optimize performance for graphics 对于 post processing 有多大提升？压力不是在带宽或fragment计算量上吗？
typedef enum DescriptorUpdateFrequency
{
    /// Descriptor gets hardly updated in the lifetime of the application
    DESCRIPTOR_UPDATE_FREQ_NONE = 0,
    /// Descriptor gets updated roughly once per frame
    DESCRIPTOR_UPDATE_FREQ_PER_FRAME,
    /// Descriptor gets updated per arbitrary batch (batch is application dependent. commonly this is per material)
    DESCRIPTOR_UPDATE_FREQ_PER_BATCH,
    /// Descriptor gets updated per draw call. (information which changes per draw call, ...
    /// usually with modern APIs, it is better to avoid this update frequency by using the bindless model and using push constants instead)
    DESCRIPTOR_UPDATE_FREQ_PER_DRAW,
    DESCRIPTOR_UPDATE_FREQ_COUNT,
} DescriptorUpdateFrequency;

/*
 //A GPUBindGroup defines a set of resources to be bound together in a group and how the resources are used in shader stages.
struct BindGroupDescriptor {
	ChainedStruct const * nextInChain = nullptr;
	char const * label = nullptr;
	BindGroupLayout layout;
	uint32_t entryCount;
	BindGroupEntry const * entries;
};
 //A GPUBindGroupEntry describes a single resource to be bound in a GPUBindGroup.
struct BindGroupEntry {
    uint32_t binding;
    Buffer buffer;
    uint64_t offset = 0;
    uint64_t size;
    Sampler sampler;
    TextureView textureView;
};
class BindGroupLayout;//A GPUBindGroupLayout defines the interface between a set of resources bound in a GPUBindGroup and their accessibility in shader stages.//A GPUBindGroupLayout is created via GPUDevice.createBindGroupLayout().
struct BindGroupLayoutDescriptor {
	ChainedStruct const * nextInChain = nullptr;
	char const * label = nullptr;
	uint32_t entryCount;
	BindGroupLayoutEntry const * entries;
};

// A GPUBindGroupLayoutEntry describes a single shader resource binding to be included in a GPUBindGroupLayout.
 typedef struct WGPUBindGroupLayoutEntry {
	 WGPUChainedStruct const * nextInChain;
	 uint32_t binding;//A unique identifier for a resource binding within a GPUBindGroupLayoutEntry, a corresponding GPUBindGroupEntry, and the GPUShaderModules.
	 WGPUShaderStageFlags visibility;//A bitset of the members of GPUShaderStage. Each set bit indicates that a GPUBindGroupLayoutEntry's resource will be accessible from the associated shader stage.
	 WGPUBufferBindingLayout buffer;//When not undefined, indicates the binding resource type for this GPUBindGroupLayoutEntry is GPUBufferBinding.
	 WGPUSamplerBindingLayout sampler;//When not undefined, indicates the binding resource type for this GPUBindGroupLayoutEntry is GPUSampler.
	 WGPUTextureBindingLayout texture;/When not undefined, indicates the binding resource type for this GPUBindGroupLayoutEntry is GPUTextureView.
	 WGPUStorageTextureBindingLayout storageTexture;/When not undefined, indicates the binding resource type for this GPUBindGroupLayoutEntry is GPUTextureView.
 } WGPUBindGroupLayoutEntry;

 //A GPUPipelineLayout defines the mapping between resources of all GPUBindGroup objects set up during command encoding in setBindGroup, and the shaders of the pipeline set by GPURenderEncoderBase.setPipeline or GPUComputePassEncoder.setPipeline.
 typedef struct WGPUPipelineLayoutDescriptor {
	 WGPUChainedStruct const * nextInChain;
	 char const * label;
	 uint32_t bindGroupLayoutCount;
	 WGPUBindGroupLayout const * bindGroupLayouts;
 } WGPUPipelineLayoutDescriptor;
*/
/// Data structure holding the layout for a descriptor // TODO: 相当于 BindGroupLayoutEntry?
typedef struct DEFINE_ALIGNED(DescriptorInfo, 16)
{
    const char* pName;
#if defined(ORBIS)
    OrbisDescriptorInfo mStruct;
#elif defined(PROSPERO)
    ProsperoDescriptorInfo mStruct;
#else
    /// gles 强转为 DescriptorType
    uint32_t    mType : 21;
    uint32_t    mDim : 4;
    uint32_t    mRootDescriptor : 1;
    uint32_t    mStaticSampler : 1;
    uint32_t    mUpdateFrequency : 3;
    /// ShaderResource::size，通过glGetActiveUniform(&size)获取
    uint32_t    mSize;
    uint32_t    mHandleIndex;
    union
    {
#if defined(DIRECT3D12)
        struct
		{
			uint64_t mPadA;
		} mD3D12;
#endif
#if defined(VULKAN)
        struct
		{
			uint32_t mVkType;
			uint32_t mReg : 20;
			uint32_t mVkStages : 8;
		} mVulkan;
#endif
#if defined(METAL)
        struct
		{
			id<MTLSamplerState> mtlStaticSampler;// TODO: 为什么叫 StaticSampler // TODO:怎么理解，有什么优势?
            /// 用来区分变量在哪个阶段使用，使用正确的 encoder 上传数据
            uint32_t            mUsedStages : 6;
            /// setVertexBytes:length:atIndex: 此类函数的 atIndex: 参数。// TODO: 是 D3D11 shader 变量，和 glsl location 一样意思？
            uint32_t            mReg : 10;
            /// 由 BufferInfo::isArgBuffer;//arg.bufferPointerType.elementIsArgumentBuffer 决定
			uint32_t            mIsArgumentBufferField : 1;
			MTLResourceUsage    mUsage;
			uint64_t            mPadB[2];
		};
#endif
#if defined(DIRECT3D11)
        struct
		{
			uint32_t mUsedStages : 6;
			uint32_t mReg : 20;
			uint32_t mPadA;
		} mD3D11;
#endif
#if defined(GLES)
        struct
        {
            union
            {
                uint32_t mGlType;
                /// 活动变量字节大小的累计 pRootSignature->mGLES.pVariables[var].mSize
                uint32_t mUBOSize;
                uint32_t mVariableStart;
            };
        } mGLES;
#endif
    };
#endif
} DescriptorInfo;
#if defined(METAL)
COMPILE_ASSERT(sizeof(DescriptorInfo) == 8 * sizeof(uint64_t));
#elif defined(ORBIS) || defined(PROSPERO)
COMPILE_ASSERT(sizeof(DescriptorInfo) == 2 * sizeof(uint64_t));
#else
COMPILE_ASSERT(sizeof(DescriptorInfo) == 4 * sizeof(uint64_t));
#endif

typedef enum RootSignatureFlags
{
    /// Default flag
    ROOT_SIGNATURE_FLAG_NONE = 0,
    /// Local root signature used mainly in raytracing shaders
    ROOT_SIGNATURE_FLAG_LOCAL_BIT = 0x1,
} RootSignatureFlags;
MAKE_ENUM_FLAG(uint32_t, RootSignatureFlags)

typedef struct RootSignatureDesc
{
    Shader**           ppShaders;//TODO: 为什么要支持多个 shader
    uint32_t           mShaderCount;//TODO: 支持的shader阶段数量，或说当前program的shader数量，gles 2/30都是2，用法：rootDesc.mShaderCount = shadersCount;
    /// D3D12 唯一
    uint32_t           mMaxBindlessTextures;
    const char**       ppStaticSamplerNames;
    /// D3D11 的概念
    Sampler**          ppStaticSamplers;
    uint32_t           mStaticSamplerCount;
    /// D3D12 唯一
    RootSignatureFlags mFlags;
} RootSignatureDesc;

///The root signature defines the resources the shader
/// programs expect.  If we think of the shader programs as a function, and
/// the input resources as function parameters, then the root signature can be
/// thought of as defining the function signature.
///https://www.zhihu.com/column/p/388534044
typedef struct DEFINE_ALIGNED(RootSignature, 64)
{
    /// Number of descriptors declared in the root signature layout
    uint32_t     mDescriptorCount;// =ShaderResource 的数量
    /// Graphics or Compute
    PipelineType mPipelineType;
    /// Array of all descriptors declared in the root signature layout
    DescriptorInfo* pDescriptors;
    /// Translates hash of descriptor name to descriptor index in pDescriptors array
    DescriptorIndexMap* pDescriptorNameToIndexMap;
    union
    {
#if defined(DIRECT3D12)
        struct
		{
			ID3D12RootSignature* pDxRootSignature;
			uint8_t              mDxViewDescriptorTableRootIndices[DESCRIPTOR_UPDATE_FREQ_COUNT];
			uint8_t              mDxSamplerDescriptorTableRootIndices[DESCRIPTOR_UPDATE_FREQ_COUNT];
			uint32_t             mDxCumulativeViewDescriptorCounts[DESCRIPTOR_UPDATE_FREQ_COUNT];
			uint32_t             mDxCumulativeSamplerDescriptorCounts[DESCRIPTOR_UPDATE_FREQ_COUNT];
			uint16_t             mDxViewDescriptorCounts[DESCRIPTOR_UPDATE_FREQ_COUNT];
			uint16_t             mDxSamplerDescriptorCounts[DESCRIPTOR_UPDATE_FREQ_COUNT];
			uint64_t             mPadA;
			uint64_t             mPadB;
		} mD3D12;
#endif
#if defined(VULKAN)
        struct
		{
			VkPipelineLayout            pPipelineLayout;
			VkDescriptorSetLayout       mVkDescriptorSetLayouts[DESCRIPTOR_UPDATE_FREQ_COUNT];
			uint32_t                    mVkCumulativeDescriptorCounts[DESCRIPTOR_UPDATE_FREQ_COUNT];
			uint32_t                    mCumulativeDescriptorSizes[DESCRIPTOR_UPDATE_FREQ_COUNT];
			uint8_t                     mVkDynamicDescriptorCounts[DESCRIPTOR_UPDATE_FREQ_COUNT];
			VkDescriptorPoolSize        mPoolSizes[DESCRIPTOR_UPDATE_FREQ_COUNT][MAX_DESCRIPTOR_POOL_SIZE_ARRAY_COUNT];
			uint8_t                     mPoolSizeCount[DESCRIPTOR_UPDATE_FREQ_COUNT];
			VkDescriptorPool            pEmptyDescriptorPool[DESCRIPTOR_UPDATE_FREQ_COUNT];
			VkDescriptorSet             pEmptyDescriptorSet[DESCRIPTOR_UPDATE_FREQ_COUNT];
		} mVulkan;
#endif
#if defined(METAL)
        struct
		{
			NSMutableArray<MTLArgumentDescriptor*>*
					 mArgumentDescriptors[DESCRIPTOR_UPDATE_FREQ_COUNT] API_AVAILABLE(macos(10.13), ios(11.0));
			uint32_t mRootTextureCount : 10;//TODO 为何以Root 开头？//TODO: 为什么是 NSMutableArray？addRootSignature 应该固定了
			uint32_t mRootBufferCount : 10;
			uint32_t mRootSamplerCount : 10;
		};
#endif
#if defined(DIRECT3D11)
        struct
		{
			ID3D11SamplerState** ppStaticSamplers;
			uint32_t*            pStaticSamplerSlots;
			ShaderStage*         pStaticSamplerStages;
			uint32_t             mStaticSamplerCount;
			uint32_t             mSrvCount : 10;
			uint32_t             mUavCount : 10;
			uint32_t             mCbvCount : 10;
			uint32_t             mSamplerCount : 10;
			uint32_t             mDynamicCbvCount : 10;
			uint32_t             mPadA;
		} mD3D11;
#endif
#if defined(GLES)
        struct
        {
            /// gl program id 数量
            uint32_t           mProgramCount : 6;
            uint32_t           mVariableCount : 10;
            /// 长度由mProgramCount表示，存放gl program id
            uint32_t*          pProgramTargets;
            int32_t*           pDescriptorGlLocations;
            /// mVariableCount表示数量
            struct GlVariable* pVariables;
            Sampler*           pSampler;
        } mGLES;
#endif
    };
} RootSignature;
#if defined(VULKAN)
COMPILE_ASSERT(sizeof(RootSignature) <= 72 * sizeof(uint64_t));
#elif defined(ORBIS) || defined(PROSPERO) || defined(DIRECT3D12)
// 2 cache lines
COMPILE_ASSERT(sizeof(RootSignature) <= 16 * sizeof(uint64_t));
#else
// 1 cache line
COMPILE_ASSERT(sizeof(RootSignature) == 8 * sizeof(uint64_t));
#endif

typedef struct DescriptorDataRange
{
    uint32_t mOffset;
    uint32_t mSize;
} DescriptorDataRange;

/// 准备 uniform 数据，通过 updateDescriptorSet 更新
typedef struct DescriptorData
{
    /// User can either set name of descriptor or index (index in pRootSignature->pDescriptors array)
    /// Name of descriptor
    const char* pName;
    /// Number of array entries to update (array size of ppTextures/ppBuffers/...)
    uint32_t    mCount;
    /// Dst offset into the array descriptor (useful for updating few entries in a large array)
    // Example: to update 6th entry in a bindless texture descriptor, mArrayOffset will be 6 and mCount will be 1)
    uint32_t    mArrayOffset : 20;
    // Index in pRootSignature->pDescriptors array - Cache index using getDescriptorIndexFromName to avoid using string checks at runtime
    uint32_t    mIndex : 10;
    uint32_t    mBindByIndex : 1;
    uint32_t    mExtractBuffer : 1;

    union
    {
        // Range to bind (buffer offset, size)
        DescriptorDataRange*    pRanges;
        // Descriptor set buffer extraction options
        uint32_t                mDescriptorSetBufferIndex;
        struct
        {
            // When binding UAV, control the mip slice to to bind for UAV (example - generating mipmaps in a compute shader)
            uint16_t            mUAVMipSlice;
            // Binds entire mip chain as array of UAV
            bool                mBindMipChain;
        };
        // Binds stencil only descriptor instead of color/depth
        bool                    mBindStencilResource;
    };
    /// Array of resources containing descriptor handles or constant to be used in ring buffer memory - DescriptorRange can hold only one resource type array
    union
    {
        /// Array of texture descriptors (srv and uav textures)
        Texture**               ppTextures;
        /// Array of sampler descriptors
        Sampler**               ppSamplers;
        /// Array of buffer descriptors (srv, uav and cbv buffers)
        Buffer**                ppBuffers;
        /// Array of pipeline descriptors
        Pipeline**              ppPipelines;
        /// DescriptorSet buffer extraction
        DescriptorSet**         ppDescriptorSet;
        /// Custom binding (raytracing acceleration structure ...)
        /// Array of acceleration structure descriptors (raytracing)
        AccelerationStructure** ppAccelerationStructures;
    };
} DescriptorData;

/// Descriptor Binding Interface https://github.com/ConfettiFX/The-Forge/wiki/Descriptor-Binding-Interface
/// Descriptor set represents a bunch of VkDescriptorSet (Vulkan), D3D12_GPU_DESCRIPTOR_HANDLE (D3D12) or MTLArgumentBuffer (Metal)
/// There are three ways to bind descriptors:
///     * Descriptor sets
///     * Push constants
///         * In order to specify a shader resource as a push constant, the word "rootconstant" (case insensitive) should be somewhere in the shader resource name
///         * Example:
///             * ConstantBuffer<> uniformBlock - Won't be interpreted as root constant
///             * ConstantBuffer<> rootConstantBlock - Will be interpreted as root constant
///         * Push constants are useful for specifying per draw data such as a draw id and are very fast to access from the shader
///                 * To bind push constants, use the cmdBindPushConstants function
///     * Root descriptors / Dynamic uniform buffers
///         * In order to specify a shader resource as a root descriptor / dynamic uniform buffer, the word "rootcbv" (case insensitive) should be somewhere in the shader resource name
///         * Root descriptors enable us to bind different offsets of the same constant buffer / uniform buffer to the shader without having to call vkUpdateDescriptorSet / CopyDescriptorsSimple
///        * They are also faster than regular uniform buffers since they get user data placement
///        * To update root descriptor offsets, call updateDescriptorSet with the new offset and size. This will not call vkUpdateDescriptorSet but instead just store the offset and use it in the next call to cmdBindDescriptorSet
/// 无公共属性，mMaxSets 勉强算一个公共属性//TODO: 存在的意义？
typedef struct DEFINE_ALIGNED(DescriptorSet, 64)
{
    union
    {
#if defined(DIRECT3D12)
        struct
		{
			/// Start handle to cbv srv uav descriptor table
			uint64_t                   mCbvSrvUavHandle;
			/// Start handle to sampler descriptor table
			uint64_t                   mSamplerHandle;
			/// Stride of the cbv srv uav descriptor table (number of descriptors * descriptor size)
			uint32_t                   mCbvSrvUavStride;
			/// Stride of the sampler descriptor table (number of descriptors * descriptor size)
			uint32_t                   mSamplerStride;
			const RootSignature*       pRootSignature;
			uint64_t                   mMaxSets : 16;
			uint64_t                   mUpdateFrequency : 3;
			uint64_t                   mNodeIndex : 4;
			uint64_t                   mCbvSrvUavRootIndex : 4;
			uint64_t                   mSamplerRootIndex : 4;
			uint64_t                   mPipelineType : 3;
		} mD3D12;
#endif
#if defined(VULKAN)
        struct
		{
			VkDescriptorSet*             pHandles;
			const RootSignature*         pRootSignature;
			uint8_t*                     pDescriptorData;
			struct DynamicUniformData*   pDynamicUniformData;
			VkDescriptorPool             pDescriptorPool;
			uint32_t                     mMaxSets;
			uint8_t                      mDynamicOffsetCount;
			uint8_t                      mUpdateFrequency;
			uint8_t                      mNodeIndex;
			uint8_t                      mPadA;
		} mVulkan;
#endif
#if defined(METAL)
        struct
		{
            /// MTLArgumentEncoder encodes buffer, texture, sampler, and constant data into a buffer.
			id<MTLArgumentEncoder> mArgumentEncoder API_AVAILABLE(macos(10.13), ios(11.0));
			Buffer* mArgumentBuffer API_AVAILABLE(macos(10.13), ios(11.0));
			const RootSignature*    pRootSignature;
			/// Descriptors that are bound without argument buffers
			/// This is necessary since there are argument buffers bugs in some iOS Metal drivers which causes shader compiler crashes or incorrect shader generation. This makes it necessary to keep fallback descriptor binding path alive
			struct RootDescriptorData* pRootDescriptorData;
			uint32_t                   mChunkSize;
			uint32_t                   mMaxSets;
			uint8_t                    mUpdateFrequency;
			uint8_t                    mNodeIndex;
			uint8_t                    mStages;
		};
#endif
#if defined(DIRECT3D11)
        struct
		{
			struct DescriptorDataArray* pHandles;
			const RootSignature*        pRootSignature;
			uint16_t                    mMaxSets;
		} mD3D11;
#endif
#if defined(GLES)
        struct
        {
            /// gles backend 内部数据结构
            struct DescriptorDataArray* pHandles;
            uint8_t                     mUpdateFrequency;
            const RootSignature*        pRootSignature;
            uint16_t                    mMaxSets;
        } mGLES;
#endif
    };
} DescriptorSet;

typedef struct CmdPoolDesc
{
    Queue* pQueue;
    /// VK_COMMAND_POOL_CREATE_TRANSIENT_BIT
    bool   mTransient;
} CmdPoolDesc;

/// TODO 是否需要暴露出来？暴露出来外部示例用法有何特殊之处？ dawn 怎么隐藏它的？vk/d3d12 在 CommandRecordingContext.cpp 中使用
typedef struct CmdPool
{
#if defined(USE_MULTIPLE_RENDER_APIS)
    union
	{
#endif
#if defined(DIRECT3D12)
    ID3D12CommandAllocator* pDxCmdAlloc;
#endif
#if defined(VULKAN)
    VkCommandPool pVkCmdPool;
#endif
#if defined(GLES)
    /// 借用自Queue
    struct CmdCache* pCmdCache;
#endif
#if defined(USE_MULTIPLE_RENDER_APIS)
    };
#endif

    ///gles 借用 Queue
    Queue* pQueue;
} CmdPool;

typedef struct CmdDesc
{
    CmdPool* pPool;
    /// 仅 vulkan 使用, dawn 没实现 secondary command buffer
    bool mSecondary;
} CmdDesc;

typedef enum MarkerType
{
    MARKER_TYPE_DEFAULT = 0x0,
    MARKER_TYPE_IN = 0x1,
    MARKER_TYPE_OUT = 0x2,
    MARKER_TYPE_IN_OUT = 0x3,
} MarkerType;

typedef struct DEFINE_ALIGNED(Cmd, 64)
{
    union
    {
#if defined(DIRECT3D12)
        struct
		{
#if defined(XBOX)
			DmaCmd mDma;
#endif
			ID3D12GraphicsCommandList* pDxCmdList;

			// Cached in beginCmd to avoid fetching them during rendering
			struct DescriptorHeap*      pBoundHeaps[2];
			D3D12_GPU_DESCRIPTOR_HANDLE mBoundHeapStartHandles[2];

			// Command buffer state
			const ID3D12RootSignature* pBoundRootSignature;
			DescriptorSet*             pBoundDescriptorSets[DESCRIPTOR_UPDATE_FREQ_COUNT];
			uint16_t                   mBoundDescriptorSetIndices[DESCRIPTOR_UPDATE_FREQ_COUNT];
			uint32_t                   mNodeIndex : 4;
			uint32_t                   mType : 3;
			CmdPool*                   pCmdPool;
			uint32_t                   mPadA;
#if !defined(XBOX)
			uint64_t mPadB;
#endif
		} mD3D12;
#endif
#if defined(VULKAN)
        struct
		{
			VkCommandBuffer  pVkCmdBuf;
			VkRenderPass     pVkActiveRenderPass;
			VkPipelineLayout pBoundPipelineLayout;
			uint32_t         mNodeIndex : 4;
			uint32_t         mType : 3;
			uint32_t         mPadA;
			CmdPool*         pCmdPool;
			uint64_t         mPadB[9];
		} mVulkan;
#endif
#if defined(METAL)
        struct
		{
			id<MTLCommandBuffer>         mtlCommandBuffer;
			id<MTLRenderCommandEncoder>  mtlRenderEncoder;
            /// 供 Compute, Ray Tracing 使用
			id<MTLComputeCommandEncoder> mtlComputeEncoder;
			id<MTLBlitCommandEncoder>    mtlBlitEncoder;
			MTLRenderPassDescriptor*     pRenderPassDesc;
            /// 用于读取 compute shader dispatch 参数
            Shader*                      pShader;
			NOREFS id<MTLBuffer> mSelectedIndexBuffer;
			uint64_t             mSelectedIndexBufferOffset;
			// We have to track color attachments which will be read by shader
			// Metal documentation says to call useResource on these as late as possible
			// This will avoid possible decompression of all color attachments inside the heap
			NOREFS id<MTLResource>* pColorAttachments;
			QueryPool*                   pLastFrameQuery;//TODO:查询GPU耗时？和 WebGPU QuerySet 差异？
			uint32_t                mIndexType : 1;
			uint32_t                mIndexStride : 3;
			uint32_t                mSelectedPrimitiveType : 4;
			uint32_t                     mPipelineType : 3;//TODO: 为何在此定义 mPipelineType
			uint32_t                mColorAttachmentCount : 10;
			uint32_t                mColorAttachmentCapacity : 10; //tf_calloc_memalign 分配 Cmd，后面没再初始化就读取，默认值应该为0
#ifdef ENABLE_DRAW_INDEX_BASE_VERTEX_FALLBACK
			uint64_t				mOffsets[MAX_VERTEX_BINDINGS];
			uint32_t				mStrides[MAX_VERTEX_BINDINGS];
			uint32_t        		mFirstVertex;
#else
			uint64_t                mPadA[4];
#endif
		};
#endif
#if defined(DIRECT3D11)
        struct
		{
			ID3D11Buffer* pRootConstantBuffer;
			uint64_t      mPadB[10];
		} mD3D11;
#endif
#if defined(GLES)
        struct
        {
            CmdPool* pCmdPool;
        } mGLES;
#endif
    };
    Renderer* pRenderer;
    /// 初始化 cmd 时 d3d11 没配置queue
    Queue*    pQueue;
} Cmd;
COMPILE_ASSERT(sizeof(Cmd) <= 64 * sizeof(uint64_t));

typedef enum FenceStatus
{
    FENCE_STATUS_COMPLETE = 0,
    FENCE_STATUS_INCOMPLETE,
    FENCE_STATUS_NOT_SUBMITTED,
} FenceStatus;

/// d3d12, vulkan 才有相应 API，metal 用dispatch_semaphore_t 模仿，gles 没有. d3d12 没有 mSubmitted
typedef struct Fence
{
    union
    {
#if defined(DIRECT3D12)
        struct
		{
			ID3D12Fence* pDxFence;
			HANDLE       pDxWaitIdleFenceEvent;
			uint64_t     mFenceValue;
			uint64_t     mPadA;
		} mD3D12;
#endif
#if defined(VULKAN)
        struct
		{
			VkFence  pVkFence;
			uint32_t mSubmitted : 1;
			uint32_t mPadA;
			uint64_t mPadB;
			uint64_t mPadC;
		} mVulkan;
#endif
#if defined(METAL)
        struct
		{
			dispatch_semaphore_t pMtlSemaphore;
			uint32_t             mSubmitted : 1;
			uint32_t             mPadA;
			uint64_t             mPadB;
			uint64_t             mPadC;
		};
#endif
#if defined(DIRECT3D11)
        struct
		{
			ID3D11Query* pDX11Query;
			uint32_t     mSubmitted : 1;
			uint32_t     mPadA;
			uint64_t     mPadB;
			uint64_t     mPadC;
		} mD3D11;
#endif
#if defined(GLES)
        struct
        {
            uint32_t mSubmitted : 1;
        } mGLES;
#endif
#if defined(ORBIS)
        OrbisFence mStruct;
#endif
#if defined(PROSPERO)
        ProsperoFence mStruct;
#endif
    };
} Fence;

typedef struct Semaphore
{
    union
    {
#if defined(DIRECT3D12)
        // DirectX12 does not have a concept of semaphores
		// All synchronization is done using fences
		// Simlate semaphore signal and wait using DirectX12 fences

		// Semaphores used in DirectX12 only in queueSubmit
		// queueSubmit -> How the semaphores work in DirectX12

		// pp_wait_semaphores -> queue->Wait is manually called on each fence in this
		// array before calling ExecuteCommandLists to make the fence work like a wait semaphore

		// pp_signal_semaphores -> Manually call queue->Signal on each fence in this array after
		// calling ExecuteCommandLists and increment the underlying fence value

		// queuePresent does not use the wait semaphore since the swapchain Present function
		// already does the synchronization in this case
		struct
		{
			ID3D12Fence* pDxFence;
			HANDLE       pDxWaitIdleFenceEvent;
			uint64_t     mFenceValue;
			uint64_t     mPadA;
		} mD3D12;
#endif
#if defined(VULKAN)
        struct
		{
			VkSemaphore pVkSemaphore;
			uint32_t    mCurrentNodeIndex : 5;
			uint32_t    mSignaled : 1;
			uint32_t    mPadA;
			uint64_t    mPadB;
			uint64_t    mPadC;
		} mVulkan;
#endif
#if defined(METAL)
        struct
		{
			id<MTLEvent> pMtlSemaphore API_AVAILABLE(macos(10.14), ios(12.0));
			uint32_t                   mSignaled;
			uint32_t                   mPadA;
			uint64_t                   mPadB;
		};
#endif
#if defined(GLES)
        struct
        {
            uint32_t mSignaled : 1; //acquireNextImage 只用 Semaphore 同步的，则被写为 true ，
        } mGLES;
#endif
#if defined(ORBIS)
        OrbisFence mStruct;
#endif
#if defined(PROSPERO)
        ProsperoSemaphore mStruct;
#endif
    };
} Semaphore;

typedef struct QueueDesc
{
    QueueType     mType;
    QueueFlag     mFlag;
    QueuePriority mPriority;
    uint32_t      mNodeIndex; //TODO: GPU SLI 显卡节点？
} QueueDesc;

//vulkan queue 我自己做multiple queue，GPU实际还是单context单独执行了，两个queue没有重叠，显卡2070和3090
typedef struct Queue
{
    union
    {
#if defined(DIRECT3D12)
        struct
		{
			ID3D12CommandQueue* pDxQueue;
			Fence*              pFence;
		} mD3D12;
#endif
#if defined(VULKAN)
        struct
		{
			VkQueue  pVkQueue;
			Mutex*   pSubmitMutex;
			uint32_t mFlags;
			float    mTimestampPeriod;
			uint32_t mVkQueueFamilyIndex : 5;
			uint32_t mVkQueueIndex : 5;
			uint32_t mGpuMode : 3;
		} mVulkan;
#endif
#if defined(GLES)
        struct
        {
            struct CmdCache* pCmdCache; //todo 为什么，gles 如何在此基础上支持多线程 // todo 2021.7.21 使用指针是为了隐藏内部数据结构？
        } mGLES;
#endif
#if defined(METAL)
        struct
		{
			id<MTLCommandQueue> mtlCommandQueue;
			id<MTLFence> mtlQueueFence API_AVAILABLE(macos(10.13), ios(10.0));
			uint32_t                   mBarrierFlags; //TODO: queue 级别的 mBarrierFlags 用来分割 CommandBuffer还是Encoder?Encoder 之间由驱动还是用户实现 barrier 处理？cmdResourceBarrier()写入，util_barrier_required()读取然后重置为0
			uint32_t                   mPadB;
		};
#endif
#if defined(DIRECT3D11)
        struct
		{
			ID3D11Device*        pDxDevice;
			ID3D11DeviceContext* pDxContext;
			Fence*               pFence;
		} mD3D11;
#endif
#if defined(ORBIS)
        OrbisQueue mStruct;
#endif
#if defined(PROSPERO)
        ProsperoQueue mStruct;
#endif
    };
    uint32_t mType : 3;
    uint32_t mNodeIndex : 4;
} Queue;

typedef struct ShaderMacro
{
    const char* definition;
    const char* value;
} ShaderMacro;

/// ShaderConstant only supported by Vulkan and Metal APIs
typedef struct ShaderConstant
{
    const void*    pValue;
    uint32_t       mIndex;
    uint32_t       mSize;
} ShaderConstant;

#if defined(TARGET_IOS)
typedef struct ShaderStageDesc
{
	const char*  pName;//shader 文件名
	const char*  pCode;//shader 源码字符串
	const char*  pEntryPoint;//shader 函数名
	ShaderMacro* pMacros;
	uint32_t     mMacroCount;
} ShaderStageDesc;

typedef struct ShaderDesc
{
	ShaderStage           mStages;
	ShaderStageDesc       mVert;
	ShaderStageDesc       mFrag;
	ShaderStageDesc       mGeom;
	ShaderStageDesc       mHull;
	ShaderStageDesc       mDomain;
	ShaderStageDesc       mComp;
	const ShaderConstant* pConstants;
	uint32_t              mConstantCount;
} ShaderDesc;
#endif // defined(TARGET_IOS)

typedef struct BinaryShaderStageDesc
{
#if defined(PROSPERO)
    ProsperoBinaryShaderStageDesc mStruct;
#else
    /// Byte code array
    void*       pByteCode; // todo 为什么和不metal那边复用？gles此处存shader源码//mtl macos存metallib内容
    uint32_t    mByteCodeSize; // 存gles shader源码字节长度
    /// Metal 入口 stageMain
    /// Vulkan GLES 入口 main
    const char* pEntryPoint;
#if defined(METAL)
    // Shader source is needed for reflection //TODO: iOS 反射不需要源码
	char*    pSource;
	uint32_t mSourceSize;
#endif
#if defined(GLES)
    GLuint   mShader; // shader id，glShaderSource返回值
#endif
#endif
} BinaryShaderStageDesc;

typedef struct BinaryShaderDesc
{
    ShaderStage           mStages;// TODO 表示了有多少个shader阶段，隐藏太深了
    /// Specify whether shader will own byte code memory
    uint32_t              mOwnByteCode : 1;
    BinaryShaderStageDesc mVert;
    BinaryShaderStageDesc mFrag;
    BinaryShaderStageDesc mGeom;
    BinaryShaderStageDesc mHull;
    BinaryShaderStageDesc mDomain;
    BinaryShaderStageDesc mComp;
    const ShaderConstant* pConstants;
    uint32_t              mConstantCount;
} BinaryShaderDesc;

/// = OpenGL ES Program
///TODO: 其他 API 都放 shader，此处却放 Program id，不合理，应该改成 vertex fragment shader id / compute shader id
typedef struct Shader
{
    ShaderStage mStages : 31;
    bool        mIsMultiviewVR : 1;
    uint32_t    mNumThreadsPerGroup[3];//TODO metallib 路径怎么写入此值
    union
    {
#if defined(DIRECT3D12)
        struct
		{
			IDxcBlobEncoding** pShaderBlobs;
			LPCWSTR*           pEntryNames;
		} mD3D12;
#endif
#if defined(VULKAN)
        struct
		{
			VkShaderModule*       pShaderModules;
			char**                pEntryNames;
			VkSpecializationInfo* pSpecializationInfo;
		} mVulkan;
#endif
#if defined(METAL)
        struct
		{
			id<MTLFunction> mtlVertexShader;
			id<MTLFunction> mtlFragmentShader;
			id<MTLFunction> mtlComputeShader;
			id<MTLLibrary>  mtlLibrary;// 最终只存vertex fragment, compute 期中一个源码对应的 lib//TODO: 为什么不合并这些 source 编译一个大 MTLLibrary?
			char**          pEntryNames;
			uint32_t        mTessellation : 1;
		};
#endif
#if defined(DIRECT3D11)
        struct
		{
			union
			{
				struct
				{
					ID3D11VertexShader*   pDxVertexShader;
					ID3D11PixelShader*    pDxPixelShader;
					ID3D11GeometryShader* pDxGeometryShader;
					ID3D11DomainShader*   pDxDomainShader;
					ID3D11HullShader*     pDxHullShader;
				};
				ID3D11ComputeShader* pDxComputeShader;
			};
			ID3DBlob* pDxInputSignature;
		} mD3D11;
#endif
#if defined(GLES)
        struct
        {
            GLuint mProgram;// gl program id  gl_addShaderBinary CHECK_GL_RETURN_RESULT(pShaderProgram->mGLES.mProgram, glCreateProgram());
        } mGLES;
#endif
    };
    PipelineReflection* pReflection;
} Shader;

typedef struct BlendStateDesc
{
    /// Source blend factor per render target.
    BlendConstant mSrcFactors[MAX_RENDER_TARGET_ATTACHMENTS];
    /// Destination blend factor per render target.
    BlendConstant mDstFactors[MAX_RENDER_TARGET_ATTACHMENTS];
    /// Source alpha blend factor per render target.
    BlendConstant mSrcAlphaFactors[MAX_RENDER_TARGET_ATTACHMENTS];
    /// Destination alpha blend factor per render target.
    BlendConstant mDstAlphaFactors[MAX_RENDER_TARGET_ATTACHMENTS];
    /// Blend mode per render target.
    BlendMode mBlendModes[MAX_RENDER_TARGET_ATTACHMENTS];
    /// Alpha blend mode per render target.
    BlendMode mBlendAlphaModes[MAX_RENDER_TARGET_ATTACHMENTS];
    /// Write mask per render target.
    int32_t mMasks[MAX_RENDER_TARGET_ATTACHMENTS];
    /// Mask that identifies the render targets affected by the blend state.
    BlendStateTargets mRenderTargetMask;
    /// Set whether alpha to coverage should be enabled.
    bool mAlphaToCoverage;
    /// Set whether each render target has an unique blend function. When false the blend function in slot 0 will be used for all render targets.
    bool mIndependentBlend;// todo 什么图形库支持这么牛逼的行为？
} BlendStateDesc;

typedef struct DepthStateDesc
{
    bool        mDepthTest;
    bool        mDepthWrite;
    CompareMode mDepthFunc;
    bool        mStencilTest;
    uint8_t     mStencilReadMask;
    uint8_t     mStencilWriteMask;
    CompareMode mStencilFrontFunc;
    StencilOp   mStencilFrontFail;
    StencilOp   mDepthFrontFail;
    StencilOp   mStencilFrontPass;
    CompareMode mStencilBackFunc;
    StencilOp   mStencilBackFail;
    StencilOp   mDepthBackFail;
    StencilOp   mStencilBackPass;
} DepthStateDesc;

typedef struct RasterizerStateDesc
{
    CullMode  mCullMode;
    int32_t   mDepthBias;
    float     mSlopeScaledDepthBias;
    FillMode  mFillMode;
    FrontFace mFrontFace;
    bool      mMultiSample;
    bool      mScissor;
    bool      mDepthClampEnable;
} RasterizerStateDesc;

typedef enum VertexAttribRate // TODO d3d11 d3d12 metal vk 才支持
{
    VERTEX_ATTRIB_RATE_VERTEX = 0,
    VERTEX_ATTRIB_RATE_INSTANCE = 1,
    VERTEX_ATTRIB_RATE_COUNT,
} VertexAttribRate;

typedef struct VertexAttrib
{
    ShaderSemantic   mSemantic;
    uint32_t         mSemanticNameLength;// IF length >0 THEN USE mSemanticName
    char             mSemanticName[MAX_SEMANTIC_NAME_LENGTH];// NOTE: mSemanticNameLength > 0则使用mSemanticName，否则使用mSemantic属性
    TinyImageFormat  mFormat;
    uint32_t         mBinding;
    uint32_t         mLocation;
    uint32_t         mOffset;
    VertexAttribRate mRate;
} VertexAttrib;

typedef struct VertexLayout
{
    uint32_t     mAttribCount;
    VertexAttrib mAttribs[MAX_VERTEX_ATTRIBS];
} VertexLayout;

/************************************************************************/
// #pGlobalRootSignature - Root Signature used by all shaders in the ppShaders array
// #ppShaders - Array of all shaders which can be called during the raytracing operation
//	  This includes the ray generation shader, all miss, any hit, closest hit shaders
// #pHitGroups - Name of the hit groups which will tell the pipeline about which combination of hit shaders to use
// #mPayloadSize - Size of the payload struct for passing data to and from the shaders.
//	  Example - float4 payload sent by raygen shader which will be filled by miss shader as a skybox color
//				  or by hit shader as shaded color
// #mAttributeSize - Size of the intersection attribute. As long as user uses the default intersection shader
//	  this size is sizeof(float2) which represents the ZW of the barycentric co-ordinates of the intersection
/************************************************************************/
typedef struct RaytracingPipelineDesc
{
    Raytracing*         pRaytracing;
    RootSignature*      pGlobalRootSignature;
    Shader*             pRayGenShader;
    RootSignature*      pRayGenRootSignature;
    Shader**            ppMissShaders;
    RootSignature**     ppMissRootSignatures;
    RaytracingHitGroup* pHitGroups;
    RootSignature*      pEmptyRootSignature;
    unsigned            mMissShaderCount;
    unsigned            mHitGroupCount;
    // #TODO : Remove this after adding shader reflection for raytracing shaders
    unsigned mPayloadSize;
    // #TODO : Remove this after adding shader reflection for raytracing shaders
    unsigned mAttributeSize;
    unsigned mMaxTraceRecursionDepth;
    unsigned mMaxRaysCount;
} RaytracingPipelineDesc;

/// TODO uniform 内存布局信息需手动填写？
/// FSL python工具输出什么内容是metal shader string，不是metallib
typedef struct GraphicsPipelineDesc
{
    Shader*              pShaderProgram;
    RootSignature*       pRootSignature;/// TODO UNIFORM信息
    VertexLayout*        pVertexLayout;/// Vertex 内存布局信息需手动填写
    BlendStateDesc*      pBlendState;
    DepthStateDesc*      pDepthState;
    RasterizerStateDesc* pRasterizerState;
    TinyImageFormat*     pColorFormats;
    uint32_t             mRenderTargetCount;
    SampleCount          mSampleCount;
    uint32_t             mSampleQuality;
    TinyImageFormat      mDepthStencilFormat;
    PrimitiveTopology    mPrimitiveTopo;
    bool                 mSupportIndirectCommandBuffer;
    bool                 mVRFoveatedRendering;
} GraphicsPipelineDesc;

typedef struct ComputePipelineDesc
{
    Shader*        pShaderProgram;
    RootSignature* pRootSignature;
} ComputePipelineDesc;

typedef struct PipelineDesc
{
    union
    {
        ComputePipelineDesc    mComputeDesc;
        GraphicsPipelineDesc   mGraphicsDesc;
        RaytracingPipelineDesc mRaytracingDesc;// metal, d3d12, vk 在用
    };
    /// 仅 Vulkan, D3D12 可用
    PipelineCache* pCache;
    void*          pPipelineExtensions;//d3d12 在用
    const char*    pName;
    PipelineType   mType;
    uint32_t       mExtensionCount;
} PipelineDesc;

#ifdef METAL
typedef struct RaytracingPipeline RaytracingPipeline;
#endif

typedef struct DEFINE_ALIGNED(Pipeline, 64)
{
    union
    {
#if defined(DIRECT3D12)
        struct
		{
			ID3D12PipelineState* pDxPipelineState;
#ifdef ENABLE_RAYTRACING
			ID3D12StateObject* pDxrPipeline;
#endif
			ID3D12RootSignature*   pRootSignature;
			PipelineType           mType;
			D3D_PRIMITIVE_TOPOLOGY mDxPrimitiveTopology;
			uint64_t               mPadB[3];
		} mD3D12;
#endif
#if defined(VULKAN)
        struct
		{
			VkPipeline   pVkPipeline;
			PipelineType mType;
			uint32_t     mShaderStageCount;
			//In DX12 this information is stored in ID3D12StateObject.
			//But for Vulkan we need to store it manually
			const char** ppShaderStageNames;
			uint64_t     mPadB[4];
		} mVulkan;
#endif
#if defined(METAL)
        struct
		{
			Shader*                     pShader;//用来读取 Compute Shader Dispatch 参数
			id<MTLRenderPipelineState>  mtlRenderPipelineState;
			id<MTLComputePipelineState> mtlComputePipelineState;
			id<MTLDepthStencilState>    mtlDepthStencilState;
			RaytracingPipeline*         pRaytracingPipeline;
			uint32_t                    mCullMode : 3;
			uint32_t                    mFillMode : 3;
			uint32_t                    mWinding : 3;
			uint32_t                    mDepthClipMode : 1;
			uint32_t                    mMtlPrimitiveType : 4;
			float                       mDepthBias;
			float                       mSlopeScale;
			PipelineType                mType;
			uint64_t                    mPadA;
		};
#endif
#if defined(DIRECT3D11)
        struct
		{//TODO:D3D11没有 program 数据结构？
			ID3D11VertexShader*      pDxVertexShader;
			ID3D11PixelShader*       pDxPixelShader;
			ID3D11GeometryShader*    pDxGeometryShader;
			ID3D11DomainShader*      pDxDomainShader;
			ID3D11HullShader*        pDxHullShader;
			ID3D11ComputeShader*     pDxComputeShader;
			ID3D11InputLayout*       pDxInputLayout;
			ID3D11BlendState*        pBlendState;
			ID3D11DepthStencilState* pDepthState;
			ID3D11RasterizerState*   pRasterizerState;
			PipelineType             mType;
			D3D_PRIMITIVE_TOPOLOGY   mDxPrimitiveTopology;
			uint32_t                 mPadA;
			uint64_t                 mPadB[4];
		} mD3D11;
#endif
#if defined(GLES)
        struct
        {//TODO:为什么不将 Program id 放在这里？
            uint16_t				    mVertexLayoutSize;// 改成 mVertexLayoutCount 更容易理解，赋值 min(pVertexLayout->mAttribCount, pRenderer->pActiveGpuSettings->mMaxVertexInputBindings)
            uint16_t					mRootSignatureIndex;//引入 RootSignature 的优势是什么，对于 gles 带来额外难度
            uint16_t                    mVAOStateCount;
            uint16_t					mVAOStateLoop;//todo 意义？
            struct GLVAOState*          pVAOState;
            struct GlVertexAttrib*      pVertexLayout;
            struct GLRasterizerState*   pRasterizerState;
            struct GLDepthStencilState* pDepthStencilState;
            struct GLBlendState*        pBlendState;
            RootSignature*              pRootSignature;
            uint32_t    				mType;// 赋值 PIPELINE_TYPE_GRAPHICS
            GLenum                      mGlPrimitiveTopology;
        } mGLES;
#endif
#if defined(ORBIS)
        OrbisPipeline mStruct;
#endif
#if defined(PROSPERO)
        ProsperoPipeline mStruct;
#endif
    };
} Pipeline;
#if defined(DIRECT3D11) || defined(ORBIS)
// Requires more cache lines due to no concept of an encapsulated pipeline state object
COMPILE_ASSERT(sizeof(Pipeline) <= 64 * sizeof(uint64_t));
#elif defined(PROSPERO)
COMPILE_ASSERT(sizeof(Pipeline) == 16 * sizeof(uint64_t));
#else
// One cache line
COMPILE_ASSERT(sizeof(Pipeline) == 8 * sizeof(uint64_t));
#endif

typedef enum PipelineCacheFlags
{
    PIPELINE_CACHE_FLAG_NONE = 0x0,
    PIPELINE_CACHE_FLAG_EXTERNALLY_SYNCHRONIZED = 0x1,//TODO 仅 vulkan 使用
} PipelineCacheFlags;
MAKE_ENUM_FLAG(uint32_t, PipelineCacheFlags);

typedef struct PipelineCacheDesc
{
    /// Initial pipeline cache data (can be NULL which means empty pipeline cache)
    void* pData;
    /// Initial pipeline cache size
    size_t             mSize;
    PipelineCacheFlags mFlags;
} PipelineCacheDesc;

//TODO d3d12, vulkan 才能用，是否有必要作为API开放出来？
typedef struct PipelineCache
{
#if defined(USE_MULTIPLE_RENDER_APIS)
    union
	{
#endif
#if defined(DIRECT3D12)
    struct
		{
			ID3D12PipelineLibrary* pLibrary;
			void*                  pData;
		} mD3D12;
#endif
#if defined(VULKAN)
    struct
		{
			VkPipelineCache pCache;
		} mVulkan;
#endif
#if defined(USE_MULTIPLE_RENDER_APIS)
    };
#endif
} PipelineCache;

typedef enum SwapChainCreationFlags
{
    SWAP_CHAIN_CREATION_FLAG_NONE = 0x0,
    SWAP_CHAIN_CREATION_FLAG_ENABLE_FOVEATED_RENDERING_VR = 0x1,
} SwapChainCreationFlags;
MAKE_ENUM_FLAG(uint32_t, SwapChainCreationFlags);

typedef struct SwapChainDesc
{
    /// Window handle
    WindowHandle mWindowHandle;//TODO: 是否需要此字段，使用 nextInChain 更有拓展能力
    /// Queues which should be allowed to present
    Queue** ppPresentQueues;
    /// Number of present queues
    uint32_t mPresentQueueCount;//TODO: 为什么让用户配置多QUEUE，有什么奇妙行为
    /// Number of backbuffers in this swapchain
    uint32_t mImageCount;
    /// Width of the swapchain
    uint32_t mWidth;
    /// Height of the swapchain
    uint32_t mHeight;
    /// Color format of the swapchain
    TinyImageFormat mColorFormat;
    /// Clear value
    ClearValue mColorClearValue;
    /// Swapchain creation flags
    SwapChainCreationFlags mFlags;
    /// Set whether swap chain will be presented using vsync
    bool mEnableVsync;
    /// We can toggle to using FLIP model if app desires.
    bool mUseFlipSwapEffect;
} SwapChainDesc;

typedef struct SwapChain
{
    /// Render targets created from the swapchain back buffers
    RenderTarget** ppRenderTargets;
    union
    {
#if defined(DIRECT3D12)
        struct
		{
#if defined(XBOX)
			uint64_t mFramePipelineToken;
			/// Sync interval to specify how interval for vsync
			uint32_t mDxSyncInterval : 3;
			uint32_t mFlags : 10;
			uint32_t mIndex;
			void*    pWindow;
			Queue*   pPresentQueue;
			uint64_t mPadB[5];
#else
			/// Use IDXGISwapChain3 for now since IDXGISwapChain4
			/// isn't supported by older devices.
			IDXGISwapChain3* pDxSwapChain;
			/// Sync interval to specify how interval for vsync
			uint32_t                                 mDxSyncInterval : 3;
			uint32_t                                 mFlags : 10;
			uint32_t                                 mPadA;
			uint64_t                                 mPadB[5];
#endif
		} mD3D12;
#endif
#if defined(VULKAN)
        struct
		{
			/// Present queue if one exists (queuePresent will use this queue if the hardware has a dedicated present queue)
			VkQueue        pPresentQueue;
			VkSwapchainKHR pSwapChain;
			VkSurfaceKHR   pVkSurface;
			SwapChainDesc* pDesc;
			uint32_t       mPresentQueueFamilyIndex : 5;
			uint32_t       mPadA;
		} mVulkan;
#endif
#if defined(METAL)
        struct
		{
#if defined(TARGET_IOS)
			UIView* pForgeView;
#else
			NSView*                                  pForgeView;
#endif
			id<CAMetalDrawable>  mMTKDrawable;
			id<MTLCommandBuffer> presentCommandBuffer;
			uint32_t             mIndex;
			uint64_t             mPadB[4];
		};
#endif
#if defined(DIRECT3D11)
        struct
		{
			/// Use IDXGISwapChain3 for now since IDXGISwapChain4
			/// isn't supported by older devices.
			IDXGISwapChain* pDxSwapChain;
			/// Sync interval to specify how interval for vsync
			uint32_t         mDxSyncInterval : 3;
			uint32_t         mFlags : 10;
			uint32_t         mImageIndex : 3;
			DXGI_SWAP_EFFECT mSwapEffect;
			uint32_t         mPadA;
			uint64_t         mPadB[5];
		} mD3D11;
#endif
#if defined(GLES)
        struct
        {
            GLSurface pSurface;// 由 addGLSurface 创建
        } mGLES;
#endif
#if defined(ORBIS)
        OrbisSwapChain mStruct;
#endif
#if defined(PROSPERO)
        ProsperoSwapChain mStruct;
#endif
    };
#if defined(QUEST_VR)
    struct
    {
        struct ovrTextureSwapChain* pSwapChain;
        VkExtent2D* pFragmentDensityTextureSizes;
        RenderTarget** ppFragmentDensityMasks;
    } mVR;
#endif
    uint32_t mImageCount : 3;//gles 只有1个？
    uint32_t mEnableVsync : 1;
} SwapChain;

/// D3D only
typedef enum ShaderTarget
{
// We only need SM 5.0 for supporting D3D11 fallback
#if defined(DIRECT3D11)
    shader_target_5_0,
#endif
    // 5.1 is supported on all DX12 hardware
    shader_target_5_1,
    shader_target_6_0,
    shader_target_6_1,
    shader_target_6_2,
    shader_target_6_3,    //required for Raytracing
    shader_target_6_4,    //required for VRS
} ShaderTarget;

typedef enum GpuMode
{
    GPU_MODE_SINGLE = 0,
    GPU_MODE_LINKED,
    GPU_MODE_UNLINKED,
} GpuMode;

typedef struct RendererDesc
{
#if defined(USE_MULTIPLE_RENDER_APIS)
    union
	{
#endif
#if defined(DIRECT3D12)
    D3D_FEATURE_LEVEL mDxFeatureLevel;
#endif
#if defined(VULKAN)
    struct
		{
			const char** ppInstanceLayers;
			const char** ppInstanceExtensions;
			const char** ppDeviceExtensions;
			uint32_t     mInstanceLayerCount;
			uint32_t     mInstanceExtensionCount;
			uint32_t     mDeviceExtensionCount;
			/// Flag to specify whether to request all queues from the gpu or just one of each type
			/// This will affect memory usage - Around 200 MB more used if all queues are requested
			bool mRequestAllAvailableQueues;//TODO 请求所有vulkan queue 会多占200M内存？
		} mVulkan;
#endif
#if defined(DIRECT3D11)
    struct
		{
			/// Set whether to force feature level 10 for compatibility
			bool mUseDx10;
			/// Set whether to pick the first valid GPU or use our GpuConfig
			bool mUseDefaultGpu;
		} mD3D11;
#endif
#if defined(GLES)
    struct
    {
        const char** ppDeviceExtensions;// todo 用户主动请求？
        uint32_t     mDeviceExtensionCount;
    } mGLES;
#endif
#if defined(USE_MULTIPLE_RENDER_APIS)
    };
#endif

    LogFn        pLogFn;
    ShaderTarget mShaderTarget;
    GpuMode      mGpuMode;

    /// Required when creating unlinked multiple renderers. Ignored otherwise.
    RendererContext* pContext;
    uint32_t         mGpuIndex;

    /// This results in new validation not possible during API calls on the CPU, by creating patched shaders that have validation added directly to the shader.
    /// However, it can slow things down a lot, especially for applications with numerous PSOs. Time to see the first render frame may take several minutes
    bool mEnableGPUBasedValidation;// 启用 VkValidationFeatureEnableEXT，ID3D12Debug1 SetEnableGPUBasedValidation
    bool mCaptureFrame;

    /// todo 主动表示当前功能不支持的平台，不合适，比如 yuv demo 不支持 d3d11
    bool mD3D11Unsupported;
    bool mGLESUnsupported;

    bool mEnableCoreVideoMetalTextureCache;
} RendererDesc;

typedef struct GPUVendorPreset
{
    char           mVendorId[MAX_GPU_VENDOR_STRING_LENGTH];
    char           mModelId[MAX_GPU_VENDOR_STRING_LENGTH];
    char           mRevisionId[MAX_GPU_VENDOR_STRING_LENGTH];    // Optional as not all gpu's have that. Default is : 0x00
    GPUPresetLevel mPresetLevel;
    char           mGpuName[MAX_GPU_VENDOR_STRING_LENGTH];    //If GPU Name is missing then value will be empty string
    char           mGpuDriverVersion[MAX_GPU_VENDOR_STRING_LENGTH];
    char           mGpuDriverDate[MAX_GPU_VENDOR_STRING_LENGTH];
} GPUVendorPreset;

typedef struct GPUCapBits
{
    bool canShaderReadFrom[TinyImageFormat_Count];//TODO bYCbCrSupported = pRenderer->pCapBits->canShaderReadFrom[TinyImageFormat_G8_B8_R8_3PLANE_420_UNORM]; metal vulkan 差异处理
    bool canShaderWriteTo[TinyImageFormat_Count];
    bool canRenderTargetWriteTo[TinyImageFormat_Count];
} GPUCapBits;

typedef enum DefaultResourceAlignment
{
    RESOURCE_BUFFER_ALIGNMENT = 4U,
} DefaultResourceAlignment;

typedef enum WaveOpsSupportFlags
{
    WAVE_OPS_SUPPORT_FLAG_NONE = 0x0,
    WAVE_OPS_SUPPORT_FLAG_BASIC_BIT = 0x00000001,
    WAVE_OPS_SUPPORT_FLAG_VOTE_BIT = 0x00000002,
    WAVE_OPS_SUPPORT_FLAG_ARITHMETIC_BIT = 0x00000004,
    WAVE_OPS_SUPPORT_FLAG_BALLOT_BIT = 0x00000008,
    WAVE_OPS_SUPPORT_FLAG_SHUFFLE_BIT = 0x00000010,
    WAVE_OPS_SUPPORT_FLAG_SHUFFLE_RELATIVE_BIT = 0x00000020,
    WAVE_OPS_SUPPORT_FLAG_CLUSTERED_BIT = 0x00000040,
    WAVE_OPS_SUPPORT_FLAG_QUAD_BIT = 0x00000080,
    WAVE_OPS_SUPPORT_FLAG_PARTITIONED_BIT_NV = 0x00000100,
    WAVE_OPS_SUPPORT_FLAG_ALL = 0x7FFFFFFF
} WaveOpsSupportFlags;
MAKE_ENUM_FLAG(uint32_t, WaveOpsSupportFlags);

typedef struct GPUSettings
{
    uint32_t            mUniformBufferAlignment;
    uint32_t            mUploadBufferTextureAlignment;
    uint32_t            mUploadBufferTextureRowAlignment;
    uint32_t            mMaxVertexInputBindings;
    uint32_t            mMaxRootSignatureDWORDS;
    uint32_t            mWaveLaneCount;//Metal: The number of threads that are executed simultaneously by the GPU.
    WaveOpsSupportFlags mWaveOpsSupportFlags;
    GPUVendorPreset     mGpuVendorPreset;
    // Variable Rate Shading
    ShadingRate     mShadingRates;
    ShadingRateCaps mShadingRateCaps;
    uint32_t        mShadingRateTexelWidth;
    uint32_t        mShadingRateTexelHeight;
#ifdef METAL
    uint32_t mArgumentBufferMaxTextures;
#endif
    uint32_t mMultiDrawIndirect : 1;//VkPhysicalDeviceFeatures MultiDrawIndirect
    uint32_t mROVsSupported : 1;// rasterOrderGroupsSupported
    uint32_t mTessellationSupported : 1;//TODO: 无 GPUFamily 要求？
    uint32_t mGeometryShaderSupported : 1;
    uint32_t mGpuBreadcrumbs : 1;
    uint32_t mHDRSupported : 1;//TODO:iOS 支持 HDR？
#ifdef METAL
    uint32_t mHeaps : 1;
	uint32_t mPlacementHeaps : 1;
#ifdef TARGET_IOS
	/// Whether or not this iOS device can handle vertex-offset drawIndexed calls.
	uint32_t mDrawIndexVertexOffsetSupported;
#endif
#endif
#if defined(GLES)
    uint32_t mMaxTextureImageUnits;// 对应GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS
#endif
} GPUSettings;

/// TODO: 内部实现多缓冲?//TODO:内部如何支持多线程编码?
typedef struct DEFINE_ALIGNED(Renderer, 64)
{
#if defined(USE_MULTIPLE_RENDER_APIS)
    union
	{
#endif
#if defined(DIRECT3D12)
    struct
		{
			// API specific descriptor heap and memory allocator
			struct DescriptorHeap**   pCPUDescriptorHeaps;
			struct DescriptorHeap**   pCbvSrvUavHeaps;
			struct DescriptorHeap**   pSamplerHeaps;
			class D3D12MA::Allocator* pResourceAllocator;
#if defined(XBOX)
			IDXGIFactory2* pDXGIFactory;
			IDXGIAdapter*  pDxActiveGPU;
			ID3D12Device*  pDxDevice;
			EsramManager*  pESRAMManager;
#elif defined(DIRECT3D12)
			IDXGIFactory6*                           pDXGIFactory;
			IDXGIAdapter4*                           pDxActiveGPU;
			ID3D12Device*                            pDxDevice;
#if defined(_WINDOWS) && defined(DRED)
			ID3D12DeviceRemovedExtendedDataSettings* pDredSettings;
#else
			uint64_t mPadA;
#endif
#endif
			ID3D12Debug* pDXDebug;
#if defined(_WINDOWS)
			ID3D12InfoQueue* pDxDebugValidation;
#endif
		} mD3D12;
#endif
#if defined(VULKAN)
    struct
		{
			VkInstance                   pVkInstance;
			VkPhysicalDevice             pVkActiveGPU;
			VkPhysicalDeviceProperties2* pVkActiveGPUProperties;
			VkDevice                     pVkDevice;
#ifdef ENABLE_DEBUG_UTILS_EXTENSION
			VkDebugUtilsMessengerEXT pVkDebugUtilsMessenger;
#else
			VkDebugReportCallbackEXT                 pVkDebugReport;
#endif
			uint32_t**             pAvailableQueueCount;
			uint32_t**             pUsedQueueCount;
			VkDescriptorPool       pEmptyDescriptorPool;
			VkDescriptorSetLayout  pEmptyDescriptorSetLayout;
			VkDescriptorSet        pEmptyDescriptorSet;
			struct VmaAllocator_T* pVmaAllocator;
			uint32_t               mRaytracingSupported : 1;
			uint32_t               mYCbCrExtension : 1;
			uint32_t               mKHRSpirv14Extension : 1;
			uint32_t               mKHRAccelerationStructureExtension : 1;
			uint32_t               mKHRRayTracingPipelineExtension : 1;
			uint32_t               mKHRRayQueryExtension : 1;
			uint32_t               mAMDGCNShaderExtension : 1;
			uint32_t               mAMDDrawIndirectCountExtension : 1;
			uint32_t               mDescriptorIndexingExtension : 1;
			uint32_t               mShaderFloatControlsExtension : 1;
			uint32_t               mBufferDeviceAddressExtension : 1;
			uint32_t               mDeferredHostOperationsExtension : 1;
			uint32_t               mDrawIndirectCountExtension : 1;
			uint32_t               mDedicatedAllocationExtension : 1;
			uint32_t               mExternalMemoryExtension : 1;
			uint32_t               mDebugMarkerSupport : 1;
			union
			{
				struct
				{
					uint8_t mGraphicsQueueFamilyIndex;
					uint8_t mTransferQueueFamilyIndex;
					uint8_t mComputeQueueFamilyIndex;
				};
				uint8_t mQueueFamilyIndices[3];
			};
		} mVulkan;
#endif
#if defined(METAL)
    struct
		{
			id<MTLDevice>          pDevice;
			CVMetalTextureCacheRef pMetalTextureCache;
			struct VmaAllocator_T* pVmaAllocator;
			NOREFS id<MTLHeap>* pHeaps API_AVAILABLE(macos(10.13), ios(10.0));
			uint32_t                   mHeapCount;
			uint32_t                   mHeapCapacity;
			// #TODO: Store this in GpuSettings struct
			uint64_t mVRAM;
			// To synchronize resource allocation done through automatic heaps
			Mutex*   pHeapMutex;
			uint64_t mPadA[3];
		};
#endif
#if defined(DIRECT3D11)
    struct
		{
			IDXGIFactory1*           pDXGIFactory;
			IDXGIAdapter1*           pDxActiveGPU;
			ID3D11Device*            pDxDevice;
			ID3D11DeviceContext*     pDxContext;
			ID3D11DeviceContext1*    pDxContext1;
			ID3D11BlendState*        pDefaultBlendState;
			ID3D11DepthStencilState* pDefaultDepthState;
			ID3D11RasterizerState*   pDefaultRasterizerState;
			uint32_t                 mPartialUpdateConstantBufferSupported : 1;
			D3D_FEATURE_LEVEL        mFeatureLevel;
#if defined(ENABLE_PERFORMANCE_MARKER)
			ID3DUserDefinedAnnotation* pUserDefinedAnnotation;
#else
			uint64_t                                 mPadB;
#endif
			uint32_t mPadA;
		} mD3D11;
#endif
#if defined(GLES)
    struct
    {
        GLContext pContext;
        GLConfig  pConfig;
    } mGLES;
#endif
#if defined(USE_MULTIPLE_RENDER_APIS)
    };
#endif

#if defined(ENABLE_NSIGHT_AFTERMATH)
    // GPU crash dump tracker using Nsight Aftermath instrumentation
	AftermathTracker mAftermathTracker;
	bool             mAftermathSupport;
	bool             mDiagnosticsConfigSupport;
	bool             mDiagnosticCheckPointsSupport;
#endif
    struct NullDescriptors* pNullDescriptors;
    char*                   pName;
    GPUSettings*            pActiveGpuSettings;
    ShaderMacro*            pBuiltinShaderDefines;
    GPUCapBits*             pCapBits;
    uint32_t                mLinkedNodeCount : 4;// todo 表示cross fire的显卡数量？
    uint32_t                mUnlinkedRendererIndex : 4;
    uint32_t                mGpuMode : 3;// GPU_MODE_LINKED
    uint32_t                mShaderTarget : 4;
    uint32_t                mEnableGpuBasedValidation : 1;
    char*                   pApiName;
    /// 只有 d3d12, metal, vk初始化了
    uint32_t                mBuiltinShaderDefinesCount;
} Renderer;
// 3 cache lines
COMPILE_ASSERT(sizeof(Renderer) <= 24 * sizeof(uint64_t));

typedef struct RendererContextDesc
{
#if defined(USE_MULTIPLE_RENDER_APIS)
    union
	{
#endif
#if defined(DIRECT3D12)
    D3D_FEATURE_LEVEL mDxFeatureLevel;
#endif
#if defined(VULKAN)
    struct
		{
			const char** ppInstanceLayers;
			const char** ppInstanceExtensions;
			uint32_t     mInstanceLayerCount;
			uint32_t     mInstanceExtensionCount;
		} mVulkan;
#endif
#if defined(USE_MULTIPLE_RENDER_APIS)
    };
#endif
    bool mEnableGPUBasedValidation;
} RendererContextDesc;

typedef struct GpuInfo
{
#if defined(USE_MULTIPLE_RENDER_APIS)
    union
	{
#endif
#if defined (DIRECT3D12) && defined(_WINDOWS)
    struct
		{
			IDXGIAdapter4*               pDxGPU;
			D3D_FEATURE_LEVEL            mMaxSupportedFeatureLevel;
		} mD3D12;
#endif
#if defined(VULKAN)
    struct
		{
			VkPhysicalDevice             pGPU;
			VkPhysicalDeviceProperties2  mGPUProperties;
		} mVulkan;
#endif
#if defined(USE_MULTIPLE_RENDER_APIS)
    };
#endif
    GPUSettings mSettings;
} GpuInfo;
//TODO 为何独立出此结构
typedef struct DEFINE_ALIGNED(RendererContext, 64)
{
#if defined(USE_MULTIPLE_RENDER_APIS)
    union
	{
#endif
#if defined(DIRECT3D12) && defined(_WINDOWS)

    struct
		{
			IDXGIFactory6* pDXGIFactory;
			ID3D12Debug*   pDXDebug;
		} mD3D12;
#endif
#if defined(VULKAN)
    struct
		{
			VkInstance               pVkInstance;
#ifdef ENABLE_DEBUG_UTILS_EXTENSION
			VkDebugUtilsMessengerEXT pVkDebugUtilsMessenger;
#else
			VkDebugReportCallbackEXT pVkDebugReport;
#endif
		} mVulkan;
#endif
#if defined(USE_MULTIPLE_RENDER_APIS)
    };
#endif
    GpuInfo* pGpus;
    uint32_t mGpuCount;
} RendererContext;
COMPILE_ASSERT(sizeof(RendererContext) <= 8 * sizeof(uint64_t));

// Indirect command structure define
typedef struct IndirectArgument
{
    IndirectArgumentType mType;
    uint32_t             mOffset;
} IndirectArgument;

typedef struct IndirectArgumentDescriptor
{
    IndirectArgumentType mType;
    uint32_t             mIndex;
    uint32_t             mByteSize;
} IndirectArgumentDescriptor;

typedef struct CommandSignatureDesc
{
    RootSignature*              pRootSignature;
    IndirectArgumentDescriptor* pArgDescs;
    uint32_t                    mIndirectArgCount;
    /// Set to true if indirect argument struct should not be aligned to 16 bytes
    bool mPacked;
} CommandSignatureDesc;

typedef struct CommandSignature
{
#if defined(USE_MULTIPLE_RENDER_APIS)
    union
	{
#endif
#if defined(DIRECT3D12)
    ID3D12CommandSignature* pDxHandle;
#endif
#if defined(VULKAN)
    struct
		{
			struct IndirectArgument* pIndirectArguments;
			uint32_t                 mIndirectArgumentCount;
			uint32_t                 mStride;
		};
#endif
#if defined(METAL)
    struct
		{
			struct IndirectArgument* pIndirectArguments;
			uint32_t                 mIndirectArgumentCount;
			uint32_t                 mStride;
		};
#endif
#if defined(ORBIS)
    struct
		{
			IndirectArgumentType mDrawType;
			uint32_t             mStride;
		};
#endif
#if defined(PROSPERO)
    struct
		{
			IndirectArgumentType mDrawType;
			uint32_t             mStride;
		};
#endif
#if defined(USE_MULTIPLE_RENDER_APIS)
    };
#endif
} CommandSignature;

typedef struct DescriptorSetDesc
{
    /// Root signature to use to create the descriptor set
    RootSignature*            pRootSignature;
    /// Update frequency of the descriptor set (set index in Vulkan GLSL, space in HLSL, argument buffer index in MSL)
    DescriptorUpdateFrequency mUpdateFrequency;
    /// Number of descriptor sets to allocate
    uint32_t                  mMaxSets;
    /// The GPU node index to use to allocate the descriptor sets (only applicable in multi GPU scenarios. leave it as 0 for default GPU)
    uint32_t                  mNodeIndex;
} DescriptorSetDesc;

typedef struct QueueSubmitDesc
{
    Cmd**       ppCmds;
    Fence*      pSignalFence;
    Semaphore** ppWaitSemaphores;
    Semaphore** ppSignalSemaphores;
    uint32_t    mCmdCount;
    uint32_t    mWaitSemaphoreCount;
    uint32_t    mSignalSemaphoreCount;
    bool        mSubmitDone;
} QueueSubmitDesc;

/// TODO 为何没有 signal semaphores 是因为 acquireNextImage 达到了目标？
typedef struct QueuePresentDesc
{
    SwapChain*  pSwapChain;
    Semaphore** ppWaitSemaphores;
    uint32_t    mWaitSemaphoreCount;
    uint8_t     mIndex;
    bool        mSubmitDone;
} QueuePresentDesc;



/// vulkan queue 我自己做multiple queue，GPU实际还是单context单独执行了，两个queue没有重叠，显卡2070和3090
typedef struct Queue
{
    union
    {
#if defined(DIRECT3D12)
        struct
		{
			ID3D12CommandQueue* pDxQueue;
			Fence*              pFence;
		} mD3D12;
#endif
#if defined(VULKAN)
        struct
		{
			VkQueue  pVkQueue;
			Mutex*   pSubmitMutex;
			uint32_t mFlags;
			float    mTimestampPeriod;
			uint32_t mVkQueueFamilyIndex : 5;
			uint32_t mVkQueueIndex : 5;
			uint32_t mGpuMode : 3;
		} mVulkan;
#endif
#if defined(GLES)
        struct
		{
			struct CmdCache* pCmdCache; //todo 为什么，gles 如何在此基础上支持多线程 // todo 2021.7.21 使用指针是为了隐藏内部数据结构？
		} mGLES;
#endif
#if defined(METAL)
        struct
		{
			id<MTLCommandQueue> mtlCommandQueue;
			id<MTLFence> mtlQueueFence API_AVAILABLE(macos(10.13), ios(10.0));
			uint32_t                   mBarrierFlags; //TODO: queue 级别的 mBarrierFlags 用来分割 CommandBuffer还是Encoder?Encoder 之间由驱动还是用户实现 barrier 处理？cmdResourceBarrier()写入，util_barrier_required()读取然后重置为0
			uint32_t                   mPadB;
		};
#endif
#if defined(DIRECT3D11)
        struct
		{
			ID3D11Device*        pDxDevice;
			ID3D11DeviceContext* pDxContext;
			Fence*               pFence;
		} mD3D11;
#endif
    };
    uint32_t mType : 3;
    uint32_t mNodeIndex : 4;
} Queue;

typedef struct TFRendererContextDesc {
#if defined(USE_MULTIPLE_RENDER_APIS)
    union
    {
#endif
#if defined(DIRECT3D12)
    D3D_FEATURE_LEVEL mDxFeatureLevel;
#endif
#if defined(VULKAN)
    struct
        {
            const char** ppInstanceLayers;
            const char** ppInstanceExtensions;
            uint32_t     mInstanceLayerCount;
            uint32_t     mInstanceExtensionCount;
        } mVulkan;
#endif
#if defined(USE_MULTIPLE_RENDER_APIS)
    };
#endif
    bool mEnableGPUBasedValidation;
} TFRendererContextDesc;

typedef struct RendererDesc {
#if defined(USE_MULTIPLE_RENDER_APIS)
    union
    {
#endif
#if defined(DIRECT3D12)
    D3D_FEATURE_LEVEL mDxFeatureLevel;
#endif
#if defined(VULKAN)
    struct
        {
            const char** ppInstanceLayers;
            const char** ppInstanceExtensions;
            const char** ppDeviceExtensions;
            uint32_t     mInstanceLayerCount;
            uint32_t     mInstanceExtensionCount;
            uint32_t     mDeviceExtensionCount;
            /// Flag to specify whether to request all queues from the gpu or just one of each type
            /// This will affect memory usage - Around 200 MB more used if all queues are requested
            bool mRequestAllAvailableQueues;//TODO 200M？
        } mVulkan;
#endif
#if defined(DIRECT3D11)
    struct
        {
            /// Set whether to force feature level 10 for compatibility
            bool mUseDx10;
            /// Set whether to pick the first valid GPU or use our GpuConfig
            bool mUseDefaultGpu;
        } mD3D11;
#endif
#if defined(GLES)
    struct
        {
            const char** ppDeviceExtensions;// todo 用户主动请求？
            uint32_t     mDeviceExtensionCount;
        } mGLES;
#endif
#if defined(USE_MULTIPLE_RENDER_APIS)
    };
#endif

    LogFn pLogFn;
    ShaderTarget mShaderTarget;
    GpuMode mGpuMode;

    /// Required when creating unlinked multiple renderers. Ignored otherwise.
    RendererContext *pContext;
    uint32_t mGpuIndex;

    /// This results in new validation not possible during API calls on the CPU, by creating patched shaders that have validation added directly to the shader.
    /// However, it can slow things down a lot, especially for applications with numerous PSOs. Time to see the first render frame may take several minutes
    bool mEnableGPUBasedValidation;// 启用 VkValidationFeatureEnableEXT，ID3D12Debug1 SetEnableGPUBasedValidation
    bool mCaptureFrame;

    /// todo 主动表示当前功能不支持的平台，不合适，比如 yuv demo 不支持 d3d11
    bool mD3D11Unsupported;
    bool mGLESUnsupported;

    bool mEnableCoreVideoMetalTextureCache;
} RendererDesc;

typedef struct GPUVendorPreset
{
    char           mVendorId[MAX_GPU_VENDOR_STRING_LENGTH];
    char           mModelId[MAX_GPU_VENDOR_STRING_LENGTH];
    char           mRevisionId[MAX_GPU_VENDOR_STRING_LENGTH];    // Optional as not all gpu's have that. Default is : 0x00
    GPUPresetLevel mPresetLevel;
    char           mGpuName[MAX_GPU_VENDOR_STRING_LENGTH];    //If GPU Name is missing then value will be empty string
    char           mGpuDriverVersion[MAX_GPU_VENDOR_STRING_LENGTH];
    char           mGpuDriverDate[MAX_GPU_VENDOR_STRING_LENGTH];
} GPUVendorPreset;

typedef struct GPUCapBits
{
    bool canShaderReadFrom[TinyImageFormat_Count];//TODO bYCbCrSupported = pRenderer->pCapBits->canShaderReadFrom[TinyImageFormat_G8_B8_R8_3PLANE_420_UNORM]; metal vulkan 差异处理
    bool canShaderWriteTo[TinyImageFormat_Count];
    bool canRenderTargetWriteTo[TinyImageFormat_Count];
} GPUCapBits;


typedef struct CmdPoolDesc
{
    Queue* pQueue;
    /// VK_COMMAND_POOL_CREATE_TRANSIENT_BIT
    bool   mTransient;
} CmdPoolDesc;

/// TODO 是否需要暴露出来？暴露出来外部示例用法有何特殊之处？ dawn 怎么隐藏它的？vk/d3d12 在 CommandRecordingContext.cpp 中使用
typedef struct CmdPool
{
#if defined(USE_MULTIPLE_RENDER_APIS)
    union
	{
#endif
#if defined(DIRECT3D12)
    ID3D12CommandAllocator* pDxCmdAlloc;
#endif
#if defined(VULKAN)
    VkCommandPool pVkCmdPool;
#endif
#if defined(GLES)
    /// 借用自Queue
		struct CmdCache* pCmdCache;
#endif
#if defined(USE_MULTIPLE_RENDER_APIS)
    };
#endif

    ///gles 借用 Queue
    Queue* pQueue;
} CmdPool;

typedef struct CmdDesc
{
    CmdPool* pPool;
    /// Vulkan only
    bool mSecondary;
} CmdDesc;

typedef struct GPUSettings
{
    uint32_t            mUniformBufferAlignment;
    uint32_t            mUploadBufferTextureAlignment;
    uint32_t            mUploadBufferTextureRowAlignment;
    uint32_t            mMaxVertexInputBindings;
    uint32_t            mMaxRootSignatureDWORDS;
    uint32_t            mWaveLaneCount;//Metal: The number of threads that are executed simultaneously by the GPU.
//    WaveOpsSupportFlags mWaveOpsSupportFlags;
//    GPUVendorPreset     mGpuVendorPreset;
    // Variable Rate Shading
    ShadingRate     mShadingRates;
//    ShadingRateCaps mShadingRateCaps;
    uint32_t        mShadingRateTexelWidth;
    uint32_t        mShadingRateTexelHeight;
#ifdef METAL
    uint32_t mArgumentBufferMaxTextures;
#endif
    uint32_t mMultiDrawIndirect : 1;//VkPhysicalDeviceFeatures MultiDrawIndirect
    uint32_t mROVsSupported : 1;// rasterOrderGroupsSupported
    uint32_t mTessellationSupported : 1;//TODO: 无 GPUFamily 要求？
    uint32_t mGeometryShaderSupported : 1;
    uint32_t mGpuBreadcrumbs : 1;
    uint32_t mHDRSupported : 1;//TODO:iOS 支持 HDR？
#ifdef METAL
    uint32_t mHeaps : 1;
	uint32_t mPlacementHeaps : 1;
#ifdef TARGET_IOS
	/// Whether or not this iOS device can handle vertex-offset drawIndexed calls.
	uint32_t mDrawIndexVertexOffsetSupported;
#endif
#endif
#if defined(GLES)
    uint32_t mMaxTextureImageUnits;// 对应GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS
#endif
} GPUSettings;

/// TODO: 内部实现多缓冲?//TODO:内部如何支持多线程编码?
typedef struct DEFINE_ALIGNED(Renderer, 64)
{
#if defined(USE_MULTIPLE_RENDER_APIS)
union
	{
#endif
#if defined(DIRECT3D12)
struct
		{
			// API specific descriptor heap and memory allocator
			struct DescriptorHeap**   pCPUDescriptorHeaps;
			struct DescriptorHeap**   pCbvSrvUavHeaps;
			struct DescriptorHeap**   pSamplerHeaps;
			class D3D12MA::Allocator* pResourceAllocator;
#if defined(XBOX)
			IDXGIFactory2* pDXGIFactory;
			IDXGIAdapter*  pDxActiveGPU;
			ID3D12Device*  pDxDevice;
			EsramManager*  pESRAMManager;
#elif defined(DIRECT3D12)
			IDXGIFactory6*                           pDXGIFactory;
			IDXGIAdapter4*                           pDxActiveGPU;
			ID3D12Device*                            pDxDevice;
#if defined(_WINDOWS) && defined(DRED)
			ID3D12DeviceRemovedExtendedDataSettings* pDredSettings;
#else
			uint64_t mPadA;
#endif
#endif
			ID3D12Debug* pDXDebug;
#if defined(_WINDOWS)
			ID3D12InfoQueue* pDxDebugValidation;
#endif
		} mD3D12;
#endif
#if defined(VULKAN)
struct
		{
			VkInstance                   pVkInstance;
			VkPhysicalDevice             pVkActiveGPU;
			VkPhysicalDeviceProperties2* pVkActiveGPUProperties;
			VkDevice                     pVkDevice;
#ifdef ENABLE_DEBUG_UTILS_EXTENSION
			VkDebugUtilsMessengerEXT pVkDebugUtilsMessenger;
#else
			VkDebugReportCallbackEXT                 pVkDebugReport;
#endif
			uint32_t**             pAvailableQueueCount;
			uint32_t**             pUsedQueueCount;
			VkDescriptorPool       pEmptyDescriptorPool;
			VkDescriptorSetLayout  pEmptyDescriptorSetLayout;
			VkDescriptorSet        pEmptyDescriptorSet;
			struct VmaAllocator_T* pVmaAllocator;
			uint32_t               mRaytracingSupported : 1;
			uint32_t               mYCbCrExtension : 1;
			uint32_t               mKHRSpirv14Extension : 1;
			uint32_t               mKHRAccelerationStructureExtension : 1;
			uint32_t               mKHRRayTracingPipelineExtension : 1;
			uint32_t               mKHRRayQueryExtension : 1;
			uint32_t               mAMDGCNShaderExtension : 1;
			uint32_t               mAMDDrawIndirectCountExtension : 1;
			uint32_t               mDescriptorIndexingExtension : 1;
			uint32_t               mShaderFloatControlsExtension : 1;
			uint32_t               mBufferDeviceAddressExtension : 1;
			uint32_t               mDeferredHostOperationsExtension : 1;
			uint32_t               mDrawIndirectCountExtension : 1;
			uint32_t               mDedicatedAllocationExtension : 1;
			uint32_t               mExternalMemoryExtension : 1;
			uint32_t               mDebugMarkerSupport : 1;
			union
			{
				struct
				{
					uint8_t mGraphicsQueueFamilyIndex;
					uint8_t mTransferQueueFamilyIndex;
					uint8_t mComputeQueueFamilyIndex;
				};
				uint8_t mQueueFamilyIndices[3];
			};
		} mVulkan;
#endif
#if defined(METAL)
struct
		{
			id<MTLDevice>          pDevice;
			CVMetalTextureCacheRef pMetalTextureCache;
			struct VmaAllocator_T* pVmaAllocator;
			NOREFS id<MTLHeap>* pHeaps API_AVAILABLE(macos(10.13), ios(10.0));
			uint32_t                   mHeapCount;
			uint32_t                   mHeapCapacity;
			// #TODO: Store this in GpuSettings struct
			uint64_t mVRAM;
			// To synchronize resource allocation done through automatic heaps
			Mutex*   pHeapMutex;
			uint64_t mPadA[3];
		};
#endif
#if defined(DIRECT3D11)
struct
		{
			IDXGIFactory1*           pDXGIFactory;
			IDXGIAdapter1*           pDxActiveGPU;
			ID3D11Device*            pDxDevice;
			ID3D11DeviceContext*     pDxContext;
			ID3D11DeviceContext1*    pDxContext1;
			ID3D11BlendState*        pDefaultBlendState;
			ID3D11DepthStencilState* pDefaultDepthState;
			ID3D11RasterizerState*   pDefaultRasterizerState;
			uint32_t                 mPartialUpdateConstantBufferSupported : 1;
			D3D_FEATURE_LEVEL        mFeatureLevel;
#if defined(ENABLE_PERFORMANCE_MARKER)
			ID3DUserDefinedAnnotation* pUserDefinedAnnotation;
#else
			uint64_t                                 mPadB;
#endif
			uint32_t mPadA;
		} mD3D11;
#endif
#if defined(GLES)
struct
{
    GLContext pContext;
    GLConfig  pConfig;
} mGLES;
#endif
#if defined(USE_MULTIPLE_RENDER_APIS)
};
#endif

#if defined(ENABLE_NSIGHT_AFTERMATH)
// GPU crash dump tracker using Nsight Aftermath instrumentation
	AftermathTracker mAftermathTracker;
	bool             mAftermathSupport;
	bool             mDiagnosticsConfigSupport;
	bool             mDiagnosticCheckPointsSupport;
#endif
struct NullDescriptors* pNullDescriptors;
char*                   pName;
GPUSettings*            pActiveGpuSettings;
ShaderMacro*            pBuiltinShaderDefines;
GPUCapBits*             pCapBits;
uint32_t                mLinkedNodeCount : 4;// todo 表示cross fire的显卡数量？
uint32_t                mUnlinkedRendererIndex : 4;
uint32_t                mGpuMode : 3;// GPU_MODE_LINKED
uint32_t                mShaderTarget : 4;
uint32_t                mEnableGpuBasedValidation : 1;
char*                   pApiName;
/// 只有 d3d12, metal, vk初始化了
uint32_t                mBuiltinShaderDefinesCount;
} Renderer;
// 3 cache lines
COMPILE_ASSERT(sizeof(Renderer) <= 24 * sizeof(uint64_t));

typedef struct BlendStateDesc
{
    /// Source blend factor per render target.
    BlendConstant mSrcFactors[MAX_RENDER_TARGET_ATTACHMENTS];
    /// Destination blend factor per render target.
    BlendConstant mDstFactors[MAX_RENDER_TARGET_ATTACHMENTS];
    /// Source alpha blend factor per render target.
    BlendConstant mSrcAlphaFactors[MAX_RENDER_TARGET_ATTACHMENTS];
    /// Destination alpha blend factor per render target.
    BlendConstant mDstAlphaFactors[MAX_RENDER_TARGET_ATTACHMENTS];
    /// Blend mode per render target.
    BlendMode mBlendModes[MAX_RENDER_TARGET_ATTACHMENTS];
    /// Alpha blend mode per render target.
    BlendMode mBlendAlphaModes[MAX_RENDER_TARGET_ATTACHMENTS];
    /// Write mask per render target.
    int32_t mMasks[MAX_RENDER_TARGET_ATTACHMENTS];
    /// Mask that identifies the render targets affected by the blend state.
    BlendStateTargets mRenderTargetMask;
    /// Set whether alpha to coverage should be enabled.
    bool mAlphaToCoverage;
    /// Set whether each render target has an unique blend function. When false the blend function in slot 0 will be used for all render targets.
    bool mIndependentBlend;// todo 什么图形库支持？
} BlendStateDesc;

typedef struct DepthStateDesc
{
    bool        mDepthTest;
    bool        mDepthWrite;
    CompareMode mDepthFunc;
    bool        mStencilTest;
    uint8_t     mStencilReadMask;
    uint8_t     mStencilWriteMask;
    CompareMode mStencilFrontFunc;
    StencilOp   mStencilFrontFail;
    StencilOp   mDepthFrontFail;
    StencilOp   mStencilFrontPass;
    CompareMode mStencilBackFunc;
    StencilOp   mStencilBackFail;
    StencilOp   mDepthBackFail;
    StencilOp   mStencilBackPass;
} DepthStateDesc;

typedef struct RasterizerStateDesc
{
    CullMode  mCullMode;
    int32_t   mDepthBias;
    float     mSlopeScaledDepthBias;
    FillMode  mFillMode;
    FrontFace mFrontFace;
    bool      mMultiSample;
    bool      mScissor;
    bool      mDepthClampEnable;
} RasterizerStateDesc;

typedef enum VertexAttribRate // TODO d3d11 d3d12 metal vk 才支持
{
    VERTEX_ATTRIB_RATE_VERTEX = 0,
    VERTEX_ATTRIB_RATE_INSTANCE = 1,
    VERTEX_ATTRIB_RATE_COUNT,
} VertexAttribRate;

typedef struct VertexAttrib
{
    ShaderSemantic   mSemantic;
    uint32_t         mSemanticNameLength;// IF length >0 THEN USE mSemanticName
    char             mSemanticName[MAX_SEMANTIC_NAME_LENGTH];// NOTE: mSemanticNameLength > 0则使用mSemanticName，否则使用mSemantic属性
    TinyImageFormat  mFormat;
    uint32_t         mBinding;
    uint32_t         mLocation;
    uint32_t         mOffset;
    VertexAttribRate mRate;
} VertexAttrib;

typedef struct VertexLayout
{
    uint32_t     mAttribCount;
    VertexAttrib mAttribs[MAX_VERTEX_ATTRIBS];
} VertexLayout;

/************************************************************************/
// #pGlobalRootSignature - Root Signature used by all shaders in the ppShaders array
// #ppShaders - Array of all shaders which can be called during the raytracing operation
//	  This includes the ray generation shader, all miss, any hit, closest hit shaders
// #pHitGroups - Name of the hit groups which will tell the pipeline about which combination of hit shaders to use
// #mPayloadSize - Size of the payload struct for passing data to and from the shaders.
//	  Example - float4 payload sent by raygen shader which will be filled by miss shader as a skybox color
//				  or by hit shader as shaded color
// #mAttributeSize - Size of the intersection attribute. As long as user uses the default intersection shader
//	  this size is sizeof(float2) which represents the ZW of the barycentric co-ordinates of the intersection
/************************************************************************/
typedef struct RaytracingPipelineDesc
{
    Raytracing*         pRaytracing;
    RootSignature*      pGlobalRootSignature;
    Shader*             pRayGenShader;
    RootSignature*      pRayGenRootSignature;
    Shader**            ppMissShaders;
    RootSignature**     ppMissRootSignatures;
    RaytracingHitGroup* pHitGroups;
    RootSignature*      pEmptyRootSignature;
    unsigned            mMissShaderCount;
    unsigned            mHitGroupCount;
    // #TODO : Remove this after adding shader reflection for raytracing shaders
    unsigned mPayloadSize;
    // #TODO : Remove this after adding shader reflection for raytracing shaders
    unsigned mAttributeSize;
    unsigned mMaxTraceRecursionDepth;
    unsigned mMaxRaysCount;
} RaytracingPipelineDesc;

/// TODO uniform 内存布局信息需手动填写？
/// FSL python工具输出什么内容是metal shader string，不是metallib
typedef struct GraphicsPipelineDesc
{
    Shader*              pShaderProgram;
    RootSignature*       pRootSignature;/// TODO UNIFORM信息
    VertexLayout*        pVertexLayout;/// Vertex 内存布局信息需手动填写
    BlendStateDesc*      pBlendState;
    DepthStateDesc*      pDepthState;
    RasterizerStateDesc* pRasterizerState;
    TinyImageFormat*     pColorFormats;
    uint32_t             mRenderTargetCount;
    SampleCount          mSampleCount;
    uint32_t             mSampleQuality;
    TinyImageFormat      mDepthStencilFormat;
    PrimitiveTopology    mPrimitiveTopo;
    bool                 mSupportIndirectCommandBuffer;
    bool                 mVRFoveatedRendering;
} GraphicsPipelineDesc;

typedef struct ComputePipelineDesc
{
    Shader*        pShaderProgram;
    RootSignature* pRootSignature;
} ComputePipelineDesc;

typedef struct PipelineDesc
{
    union
    {
        ComputePipelineDesc    mComputeDesc;
        GraphicsPipelineDesc   mGraphicsDesc;
        RaytracingPipelineDesc mRaytracingDesc;// metal, d3d12, vk 在用
    };
    /// 仅 Vulkan, D3D12 可用
    PipelineCache* pCache;
    void*          pPipelineExtensions;//d3d12 在用
    const char*    pName;
    PipelineType   mType;
    uint32_t       mExtensionCount;
} PipelineDesc;

#ifdef METAL
typedef struct RaytracingPipeline RaytracingPipeline;
#endif

typedef struct DEFINE_ALIGNED(Pipeline, 64)
{
    union
    {
#if defined(DIRECT3D12)
        struct
		{
			ID3D12PipelineState* pDxPipelineState;
#ifdef ENABLE_RAYTRACING
			ID3D12StateObject* pDxrPipeline;
#endif
			ID3D12RootSignature*   pRootSignature;
			PipelineType           mType;
			D3D_PRIMITIVE_TOPOLOGY mDxPrimitiveTopology;
			uint64_t               mPadB[3];
		} mD3D12;
#endif
#if defined(VULKAN)
        struct
		{
			VkPipeline   pVkPipeline;
			PipelineType mType;
			uint32_t     mShaderStageCount;
			//In DX12 this information is stored in ID3D12StateObject.
			//But for Vulkan we need to store it manually
			const char** ppShaderStageNames;
			uint64_t     mPadB[4];
		} mVulkan;
#endif
#if defined(METAL)
        struct
		{
			Shader*                     pShader;//用来读取 Compute Shader Dispatch 参数
			id<MTLRenderPipelineState>  mtlRenderPipelineState;
			id<MTLComputePipelineState> mtlComputePipelineState;
			id<MTLDepthStencilState>    mtlDepthStencilState;
			RaytracingPipeline*         pRaytracingPipeline;
			uint32_t                    mCullMode : 3;
			uint32_t                    mFillMode : 3;
			uint32_t                    mWinding : 3;
			uint32_t                    mDepthClipMode : 1;
			uint32_t                    mMtlPrimitiveType : 4;
			float                       mDepthBias;
			float                       mSlopeScale;
			PipelineType                mType;
			uint64_t                    mPadA;
		};
#endif
#if defined(DIRECT3D11)
        struct
		{//TODO:D3D11没有 program 数据结构？
			ID3D11VertexShader*      pDxVertexShader;
			ID3D11PixelShader*       pDxPixelShader;
			ID3D11GeometryShader*    pDxGeometryShader;
			ID3D11DomainShader*      pDxDomainShader;
			ID3D11HullShader*        pDxHullShader;
			ID3D11ComputeShader*     pDxComputeShader;
			ID3D11InputLayout*       pDxInputLayout;
			ID3D11BlendState*        pBlendState;
			ID3D11DepthStencilState* pDepthState;
			ID3D11RasterizerState*   pRasterizerState;
			PipelineType             mType;
			D3D_PRIMITIVE_TOPOLOGY   mDxPrimitiveTopology;
			uint32_t                 mPadA;
			uint64_t                 mPadB[4];
		} mD3D11;
#endif
#if defined(GLES)
        struct
        {//TODO:为什么不将 Program id 放在这里？
            uint16_t				    mVertexLayoutSize;// 改成 mVertexLayoutCount 更容易理解，赋值 min(pVertexLayout->mAttribCount, pRenderer->pActiveGpuSettings->mMaxVertexInputBindings)
            uint16_t					mRootSignatureIndex;//引入 RootSignature 的优势是什么，对于 gles 带来额外难度
            uint16_t                    mVAOStateCount;
            uint16_t					mVAOStateLoop;//todo 意义？
            struct GLVAOState*          pVAOState;
            struct GlVertexAttrib*      pVertexLayout;
            struct GLRasterizerState*   pRasterizerState;
            struct GLDepthStencilState* pDepthStencilState;
            struct GLBlendState*        pBlendState;
            RootSignature*              pRootSignature;
            uint32_t    				mType;// 赋值 PIPELINE_TYPE_GRAPHICS
            GLenum                      mGlPrimitiveTopology;
        } mGLES;
#endif
#if defined(ORBIS)
        OrbisPipeline mStruct;
#endif
#if defined(PROSPERO)
        ProsperoPipeline mStruct;
#endif
    };
} Pipeline;
#if defined(DIRECT3D11) || defined(ORBIS)
// Requires more cache lines due to no concept of an encapsulated pipeline state object
COMPILE_ASSERT(sizeof(Pipeline) <= 64 * sizeof(uint64_t));
#elif defined(PROSPERO)
COMPILE_ASSERT(sizeof(Pipeline) == 16 * sizeof(uint64_t));
#else
// One cache line
COMPILE_ASSERT(sizeof(Pipeline) == 8 * sizeof(uint64_t));
#endif

typedef enum PipelineCacheFlags
{
    PIPELINE_CACHE_FLAG_NONE = 0x0,
    PIPELINE_CACHE_FLAG_EXTERNALLY_SYNCHRONIZED = 0x1,//TODO 仅 vulkan 使用
} PipelineCacheFlags;
MAKE_ENUM_FLAG(uint32_t, PipelineCacheFlags);

typedef struct PipelineCacheDesc
{
    /// Initial pipeline cache data (can be NULL which means empty pipeline cache)
    void* pData;
    /// Initial pipeline cache size
    size_t             mSize;
    PipelineCacheFlags mFlags;
} PipelineCacheDesc;

//TODO d3d12, vulkan 才能用，是否有必要作为API开放出来？
typedef struct PipelineCache
{
#if defined(USE_MULTIPLE_RENDER_APIS)
    union
	{
#endif
#if defined(DIRECT3D12)
    struct
		{
			ID3D12PipelineLibrary* pLibrary;
			void*                  pData;
		} mD3D12;
#endif
#if defined(VULKAN)
    struct
		{
			VkPipelineCache pCache;
		} mVulkan;
#endif
#if defined(USE_MULTIPLE_RENDER_APIS)
    };
#endif
} PipelineCache;

typedef struct DEFINE_ALIGNED(Cmd, 64)
{
    union
    {
#if defined(DIRECT3D12)
        struct
		{
#if defined(XBOX)
			DmaCmd mDma;
#endif
			ID3D12GraphicsCommandList* pDxCmdList;

			// Cached in beginCmd to avoid fetching them during rendering
			struct DescriptorHeap*      pBoundHeaps[2];
			D3D12_GPU_DESCRIPTOR_HANDLE mBoundHeapStartHandles[2];

			// Command buffer state
			const ID3D12RootSignature* pBoundRootSignature;
			DescriptorSet*             pBoundDescriptorSets[DESCRIPTOR_UPDATE_FREQ_COUNT];
			uint16_t                   mBoundDescriptorSetIndices[DESCRIPTOR_UPDATE_FREQ_COUNT];
			uint32_t                   mNodeIndex : 4;
			uint32_t                   mType : 3;
			CmdPool*                   pCmdPool;
			uint32_t                   mPadA;
#if !defined(XBOX)
			uint64_t mPadB;
#endif
		} mD3D12;
#endif
#if defined(VULKAN)
        struct
		{
			VkCommandBuffer  pVkCmdBuf;
			VkRenderPass     pVkActiveRenderPass;
			VkPipelineLayout pBoundPipelineLayout;
			uint32_t         mNodeIndex : 4;
			uint32_t         mType : 3;
			uint32_t         mPadA;
			CmdPool*         pCmdPool;
			uint64_t         mPadB[9];
		} mVulkan;
#endif
#if defined(METAL)
        struct
		{
			id<MTLCommandBuffer>         mtlCommandBuffer;
			id<MTLRenderCommandEncoder>  mtlRenderEncoder;
            /// 供 Compute, Ray Tracing 使用
			id<MTLComputeCommandEncoder> mtlComputeEncoder;
			id<MTLBlitCommandEncoder>    mtlBlitEncoder;
			MTLRenderPassDescriptor*     pRenderPassDesc;
            /// 用于读取 compute shader dispatch 参数
            Shader*                      pShader;
			NOREFS id<MTLBuffer> mSelectedIndexBuffer;
			uint64_t             mSelectedIndexBufferOffset;
			// We have to track color attachments which will be read by shader
			// Metal documentation says to call useResource on these as late as possible
			// This will avoid possible decompression of all color attachments inside the heap
			NOREFS id<MTLResource>* pColorAttachments;
			QueryPool*                   pLastFrameQuery;//TODO:查询GPU耗时？和 WebGPU QuerySet 差异？
			uint32_t                mIndexType : 1;
			uint32_t                mIndexStride : 3;
			uint32_t                mSelectedPrimitiveType : 4;
			uint32_t                     mPipelineType : 3;//TODO: 为何在此定义 mPipelineType
			uint32_t                mColorAttachmentCount : 10;
			uint32_t                mColorAttachmentCapacity : 10; //tf_calloc_memalign 分配 Cmd，后面没再初始化就读取，默认值应该为0
#ifdef ENABLE_DRAW_INDEX_BASE_VERTEX_FALLBACK
			uint64_t				mOffsets[MAX_VERTEX_BINDINGS];
			uint32_t				mStrides[MAX_VERTEX_BINDINGS];
			uint32_t        		mFirstVertex;
#else
			uint64_t                mPadA[4];
#endif
		};
#endif
#if defined(DIRECT3D11)
        struct
		{
			ID3D11Buffer* pRootConstantBuffer;
			uint64_t      mPadB[10];
		} mD3D11;
#endif
#if defined(GLES)
        struct
        {
            CmdPool* pCmdPool;
        } mGLES;
#endif
    };
    Renderer* pRenderer;
    /// 初始化 cmd 时 d3d11 没配置queue
    Queue*    pQueue;
} Cmd;
COMPILE_ASSERT(sizeof(Cmd) <= 64 * sizeof(uint64_t));

/// d3d12, vulkan 才有相应 API，metal 用dispatch_semaphore_t 模仿，gles 没有. d3d12 没有 mSubmitted
typedef struct Fence
{
    union
    {
#if defined(DIRECT3D12)
        struct
		{
			ID3D12Fence* pDxFence;
			HANDLE       pDxWaitIdleFenceEvent;
			uint64_t     mFenceValue;
			uint64_t     mPadA;
		} mD3D12;
#endif
#if defined(VULKAN)
        struct
		{
			VkFence  pVkFence;
			uint32_t mSubmitted : 1;
			uint32_t mPadA;
			uint64_t mPadB;
			uint64_t mPadC;
		} mVulkan;
#endif
#if defined(METAL)
        struct
		{
			dispatch_semaphore_t pMtlSemaphore;
			uint32_t             mSubmitted : 1;
			uint32_t             mPadA;
			uint64_t             mPadB;
			uint64_t             mPadC;
		};
#endif
#if defined(DIRECT3D11)
        struct
		{
			ID3D11Query* pDX11Query;
			uint32_t     mSubmitted : 1;
			uint32_t     mPadA;
			uint64_t     mPadB;
			uint64_t     mPadC;
		} mD3D11;
#endif
#if defined(GLES)
        struct
        {
            uint32_t mSubmitted : 1;
        } mGLES;
#endif
#if defined(ORBIS)
        OrbisFence mStruct;
#endif
#if defined(PROSPERO)
        ProsperoFence mStruct;
#endif
    };
} Fence;

typedef struct Semaphore
{
    union
    {
#if defined(DIRECT3D12)
        // DirectX12 does not have a concept of semaphores
		// All synchronization is done using fences
		// Simlate semaphore signal and wait using DirectX12 fences

		// Semaphores used in DirectX12 only in queueSubmit
		// queueSubmit -> How the semaphores work in DirectX12

		// pp_wait_semaphores -> queue->Wait is manually called on each fence in this
		// array before calling ExecuteCommandLists to make the fence work like a wait semaphore

		// pp_signal_semaphores -> Manually call queue->Signal on each fence in this array after
		// calling ExecuteCommandLists and increment the underlying fence value

		// queuePresent does not use the wait semaphore since the swapchain Present function
		// already does the synchronization in this case
		struct
		{
			ID3D12Fence* pDxFence;
			HANDLE       pDxWaitIdleFenceEvent;
			uint64_t     mFenceValue;
			uint64_t     mPadA;
		} mD3D12;
#endif
#if defined(VULKAN)
        struct
		{
			VkSemaphore pVkSemaphore;
			uint32_t    mCurrentNodeIndex : 5;
			uint32_t    mSignaled : 1;
			uint32_t    mPadA;
			uint64_t    mPadB;
			uint64_t    mPadC;
		} mVulkan;
#endif
#if defined(METAL)
        struct
		{
			id<MTLEvent> pMtlSemaphore API_AVAILABLE(macos(10.14), ios(12.0));
			uint32_t                   mSignaled;
			uint32_t                   mPadA;
			uint64_t                   mPadB;
		};
#endif
#if defined(GLES)
        struct
        {
            uint32_t mSignaled : 1; //acquireNextImage 只用 Semaphore 同步的，则被写为 true ，
        } mGLES;
#endif
#if defined(ORBIS)
        OrbisFence mStruct;
#endif
#if defined(PROSPERO)
        ProsperoSemaphore mStruct;
#endif
    };
} Semaphore;


/// Multiple renderer API (optional)
//typedef void (*TFProcInitRendererContext)(const char *app_name, const TFRendererContextDesc *p_settings,
//                                          RendererContext **ppContext);
//typedef void (*TFProcExitRendererContext)(RendererContext *pContext);
//typedef void (*TFProcInitRenderer)(const char *app_name, const RendererDesc *p_settings, Renderer **pRenderer);
//typedef void (*TFProcExitRenderer)(Renderer *pRenderer);

/// Procs of CommandEncoder
typedef void (*TFProcAddFence)(Renderer *pRenderer, Fence **p_fence);
typedef void (*TFProcRemoveFence)(Renderer *pRenderer, Fence *p_fence);
typedef void (*TFProcAddSemaphore)(Renderer *pRenderer, Semaphore **p_semaphore);
typedef void (*TFProcRemoveSemaphore)(Renderer *pRenderer, Semaphore *p_semaphore);
typedef void (*TFProcAddQueue)(Renderer *pRenderer, QueueDesc *pQDesc, Queue **pQueue);
typedef void (*TFProcRemoveQueue)(Renderer *pRenderer, Queue *pQueue);

/// Procs of Command Pool
typedef void (*TFProcAddCmdPool)(Renderer *pRenderer, const CmdPoolDesc *p_desc, CmdPool **p_cmd_pool);
typedef void (*TFProcRemoveCmdPool)(Renderer *pRenderer, CmdPool *p_CmdPool);
typedef void (*TFProcAddCmd)(Renderer *pRenderer, const CmdDesc *p_desc, Cmd **p_cmd);
typedef void (*TFProcRemoveCmd)(Renderer *pRenderer, Cmd *pCmd);
typedef void (*TFProcAddCmd_n)(Renderer *pRenderer, const CmdDesc *p_desc, uint32_t cmd_count, Cmd ***p_cmds);
typedef void (*TFProcRemoveCmd_n)(Renderer *pRenderer, uint32_t cmd_count, Cmd **p_cmds);


typedef void (*TFProcAddSwapChain)(Renderer *pRenderer, const SwapChainDesc *p_desc, SwapChain **p_swap_chain);
typedef void (*TFProcRemoveSwapChain)(Renderer *pRenderer, SwapChain *p_swap_chain);


//
// All buffer, texture loading handled by resource system -> IResourceLoader.*
//

typedef void (*TFProcAddRenderTarget)(Renderer *pRenderer, const RenderTargetDesc *pDesc, RenderTarget **ppRenderTarget);
typedef void (*TFProcRemoveRenderTarget)(Renderer *pRenderer, RenderTarget *pRenderTarget);
typedef void (*TFProcAddSampler)(Renderer *pRenderer, const SamplerDesc *pDesc, Sampler **p_sampler);
typedef void (*TFProcRemoveSampler)(Renderer *pRenderer, Sampler *p_sampler);


typedef void (*TFTFProcAddBuffer)(Renderer* pRenderer, const BufferDesc* pDesc, Buffer** pp_buffer);
typedef void (*TFTFProcRemoveBuffer)(Renderer* pRenderer, Buffer* pBuffer);
typedef void (*TFTFProcMapBuffer)(Renderer* pRenderer, Buffer* pBuffer, ReadRange* pRange);
typedef void (*TFTFProcUnmapBuffer)(Renderer* pRenderer, Buffer* pBuffer);
typedef void (*TFTFProcCmdUpdateBuffer)(Cmd* pCmd, Buffer* pBuffer, uint64_t dstOffset, Buffer* pSrcBuffer, uint64_t srcOffset, uint64_t size);
typedef void (*TFTFProcCmdUpdateSubresource)(Cmd* pCmd, Texture* pTexture, Buffer* pSrcBuffer, const struct SubresourceDataDesc* pSubresourceDesc);
typedef void (*TFTFProcCmdCopySubresource)(Cmd* pCmd, Buffer* pDstBuffer, Texture* pTexture, const struct SubresourceDataDesc* pSubresourceDesc);
typedef void (*TFTFProcAddTexture)(Renderer* pRenderer, const TextureDesc* pDesc, Texture** ppTexture);
typedef void (*TFTFProcRemoveTexture)(Renderer* pRenderer, Texture* pTexture);
typedef void (*TFTFProcAddVirtualTexture)(Cmd* pCmd, const TextureDesc* pDesc, Texture** ppTexture, void* pImageData);
typedef void (*TFTFProcRemoveVirtualTexture)(Renderer* pRenderer, VirtualTexture* pTexture);

/// TODO backend 做了什么操作，总体上要实现什么？
typedef void (*TFProcAddRootSignature)(Renderer *pRenderer, const RootSignatureDesc *pDesc, RootSignature **pRootSignature);
typedef void (*TFProcRemoveRootSignature)(Renderer *pRenderer, RootSignature *pRootSignature);




// pipeline functions
typedef void (*TFProcAddPipeline)(Renderer *pRenderer, const PipelineDesc *p_pipeline_settings, Pipeline **p_pipeline);
typedef void (*TFProcRemovePipeline)(Renderer *pRenderer, Pipeline *p_pipeline);
typedef void (*TFProcAddPipelineCache)(Renderer *pRenderer, const PipelineCacheDesc *pDesc, PipelineCache **ppPipelineCache);
typedef void (*TFProcGetPipelineCacheData)(Renderer *pRenderer, PipelineCache *pPipelineCache, size_t *pSize, void *pData);
typedef void (*TFProcRemovePipelineCache)(Renderer *pRenderer, PipelineCache *pPipelineCache);

// Descriptor Set functions
typedef void (*TFProcAddDescriptorSet)(Renderer *pRenderer, const DescriptorSetDesc *pDesc, DescriptorSet **pDescriptorSet);
typedef void (*TFProcRemoveDescriptorSet)(Renderer *pRenderer, DescriptorSet *pDescriptorSet);
typedef void (*TFProcUpdateDescriptorSet)(Renderer *pRenderer, uint32_t index, DescriptorSet *pDescriptorSet, uint32_t count,
                            const DescriptorData *pParams);


// shader functions
#if defined(TARGET_IOS)
typedef void (*TFProcAddIosShader)( Renderer* pRenderer, const ShaderDesc* p_desc, Shader** p_shader_program);
#endif
/// IResourceLoader::addShader() -->
///     macOS addShaderBinary 映射 mtl_addShaderBinary 实际使用 dispatch_data_create + newLibraryWithData: 方案
///     iOS addIosShader 映射 mtl_addShader  实际使用 newLibraryWithSource: 方案
typedef void (*TFProcAddShaderBinary)(Renderer *pRenderer, const BinaryShaderDesc *p_desc, Shader **p_shader_program);
typedef void (*TFProcRemoveShader)(Renderer *pRenderer, Shader *p_shader_program);




// command buffer functions
typedef void (*TFProcResetCmdPool)(Renderer *pRenderer, CmdPool *pCmdPool);
typedef void (*TFProcBeginCmd)(Cmd *p_cmd);
typedef void (*TFProcEndCmd)(Cmd *p_cmd);
typedef void (*TFProcCmdBindRenderTargets)(Cmd *p_cmd, uint32_t render_target_count, RenderTarget **p_render_targets,
                             RenderTarget *p_depth_stencil, const LoadActionsDesc *loadActions,
                             uint32_t *pColorArraySlices, uint32_t *pColorMipSlices, uint32_t depthArraySlice,
                             uint32_t depthMipSlice);

typedef void (*TFProcCmdSetShadingRate)(Cmd *p_cmd, ShadingRate shading_rate, Texture *p_texture,
                          ShadingRateCombiner post_rasterizer_rate,
                          ShadingRateCombiner final_rate);
/// TODO  明确 Framebuffer 坐标系(Y正方向问题);
typedef void (*TFProcCmdSetViewport)(Cmd *p_cmd, float x, float y, float width, float height, float min_depth, float max_depth);
typedef void (*TFProcCmdSetScissor)(Cmd *p_cmd, uint32_t x, uint32_t y, uint32_t width, uint32_t height);
typedef void (*TFProcCmdSetStencilReferenceValue)(Cmd *p_cmd, uint32_t val);
typedef void (*TFProcCmdBindPipeline)(Cmd *p_cmd, Pipeline *p_pipeline);
typedef void (*TFProcCmdBindDescriptorSet)(Cmd *pCmd, uint32_t index, DescriptorSet *pDescriptorSet);
typedef void (*TFProcCmdBindPushConstants)(Cmd *pCmd, RootSignature *pRootSignature, uint32_t paramIndex, const void *pConstants);
typedef void (*TFProcCmdBindDescriptorSetWithRootCbvs)(Cmd *pCmd, uint32_t index, DescriptorSet *pDescriptorSet, uint32_t count, const DescriptorData *pParams);
typedef void (*TFProcCmdBindIndexBuffer)(Cmd *p_cmd, Buffer *p_buffer, uint32_t indexType, uint64_t offset);
typedef void (*TFProcCmdBindVertexBuffer)(Cmd *p_cmd, uint32_t buffer_count, Buffer **pp_buffers, const uint32_t *pStrides, const uint64_t *pOffsets);
typedef void (*TFProcCmdDraw)(Cmd *p_cmd, uint32_t vertex_count, uint32_t first_vertex);
typedef void (*TFProcCmdDrawInstanced)(Cmd *pCmd, uint32_t vertexCount, uint32_t firstVertex, uint32_t instanceCount, uint32_t firstInstance);
typedef void (*TFProcCmdDrawIndexed)(Cmd *p_cmd, uint32_t index_count, uint32_t first_index, uint32_t first_vertex);
typedef void (*TFProcCmdDrawIndexedInstanced)(Cmd *pCmd, uint32_t indexCount, uint32_t firstIndex, uint32_t instanceCount,
                                uint32_t firstVertex, uint32_t firstInstance);
typedef void (*TFProcCmdDispatch)(Cmd *p_cmd, uint32_t group_count_x, uint32_t group_count_y, uint32_t group_count_z);
typedef void (*TFProcCmdResourceBarrier)(Cmd *p_cmd, uint32_t buffer_barrier_count, BufferBarrier *p_buffer_barriers,
                           uint32_t texture_barrier_count, TextureBarrier *p_texture_barriers,
                           uint32_t rt_barrier_count, RenderTargetBarrier *p_rt_barriers);
typedef void (*TFProcCmdUpdateVirtualTexture)(Cmd *pCmd, Texture *pTexture, uint32_t currentImage);

// queue/fence/swapchain functions
typedef void (*TFProcAcquireNextImage)(Renderer *pRenderer, SwapChain *p_swap_chain, Semaphore *p_signal_semaphore, Fence *p_fence,
                         uint32_t *p_image_index);
typedef void (*TFProcQueueSubmit)(Queue *p_queue, const QueueSubmitDesc *p_desc);
typedef void (*TFProcQueuePresent)(Queue *p_queue, const QueuePresentDesc *p_desc);
typedef void (*TFProcWaitQueueIdle)(Queue *p_queue);
typedef void (*TFProcGetFenceStatus)(Renderer *pRenderer, Fence *p_fence, FenceStatus *p_fence_status);
typedef void (*TFProcWaitForFences)(Renderer *pRenderer, uint32_t fenceCount, Fence **ppFences);
typedef void (*TFProcToggleVSync)(Renderer *pRenderer, SwapChain **ppSwapchain);

//Returns the recommended format for the swapchain.
//If true is passed for the hintHDR parameter, it will return an HDR format IF the platform supports it
//If false is passed or the platform does not support HDR a non HDR format is returned.
//If true is passed for the hintSrgb parameter, it will return format that is will do gamma correction automatically
//If false is passed for the hintSrgb parameter the gamma correction should be done as a postprocess step before submitting image to swapchain
typedef TinyImageFormat (*TFProcGetRecommendedSwapchainFormat)(bool hintHDR, bool hintSRGB);

//indirect Draw functions
typedef void (*TFProcAddIndirectCommandSignature)(Renderer *pRenderer, const CommandSignatureDesc *p_desc, CommandSignature **ppCommandSignature);
typedef void (*TFProcRemoveIndirectCommandSignature)(Renderer *pRenderer, CommandSignature *pCommandSignature);
typedef void (*TFProcCmdExecuteIndirect)(Cmd *pCmd, CommandSignature *pCommandSignature, unsigned int maxCommandCount,
                           Buffer *pIndirectBuffer, uint64_t bufferOffset, Buffer *pCounterBuffer,
                           uint64_t counterBufferOffset);

/************************************************************************/
// GPU Query Interface
/************************************************************************/
typedef void (*TFProcGetTimestampFrequency)(Queue *pQueue, double *pFrequency);
typedef void (*TFProcAddQueryPool)(Renderer *pRenderer, const QueryPoolDesc *pDesc, QueryPool **ppQueryPool);
typedef void (*TFProcRemoveQueryPool)(Renderer *pRenderer, QueryPool *pQueryPool);
typedef void (*TFProcCmdResetQueryPool)(Cmd *pCmd, QueryPool *pQueryPool, uint32_t startQuery, uint32_t queryCount);
typedef void (*TFProcCmdBeginQuery)(Cmd *pCmd, QueryPool *pQueryPool, QueryDesc *pQuery);
typedef void (*TFProcCmdEndQuery)(Cmd *pCmd, QueryPool *pQueryPool, QueryDesc *pQuery);
typedef void (*TFProcCmdResolveQuery)(Cmd *pCmd, QueryPool *pQueryPool, Buffer *pReadbackBuffer, uint32_t startQuery, uint32_t queryCount);
typedef void (*TFProcCalculateMemoryStats)(Renderer *pRenderer, char **stats);
typedef void (*TFProcCalculateMemoryUse)(Renderer *pRenderer, uint64_t *usedBytes, uint64_t *totalAllocatedBytes);
typedef void (*TFProcFreeMemoryStats)(Renderer *pRenderer, char *stats);
typedef void (*TFProcCmdBeginDebugMarker)(Cmd *pCmd, float r, float g, float b, const char *pName);
typedef void (*TFProcCmdEndDebugMarker)(Cmd *pCmd);
typedef void (*TFProcCmdAddDebugMarker)(Cmd *pCmd, float r, float g, float b, const char *pName);
typedef uint32_t (*TFProcCmdWriteMarker)(Cmd *pCmd, MarkerType markerType, uint32_t markerValue, Buffer* pBuffer, size_t offset, bool useAutoFlags);
/// Resource Debug Naming Interface
typedef void (*TFProcSetBufferName)(Renderer *pRenderer, Buffer *pBuffer, const char *pName);
typedef void (*TFProcSetTextureName)(Renderer *pRenderer, Texture *pTexture, const char *pName);
typedef void (*TFProcSetRenderTargetName)(Renderer *pRenderer, RenderTarget *pRenderTarget, const char *pName);
typedef void (*TFProcSetPipelineName)(Renderer *pRenderer, Pipeline *pPipeline, const char *pName);





/// Methods of CommandEncoder
//TF_EXPORT TFComputePassEncoder tfCommandEncoderBeginComputePass(TFCommandEncoder commandEncoder, TFComputePassDescriptor const * descriptor);

/// Multiple renderer API (optional)
TF_EXPORT void tfInitRendererContext(const char *app_name, const TFRendererContextDesc *p_settings, RendererContext **ppContext);
TF_EXPORT void tfExitRendererContext(RendererContext *pContext);
TF_EXPORT void tfInitRenderer(const char *app_name, const RendererDesc *p_settings, Renderer **pRenderer);
TF_EXPORT void tfExitRenderer(Renderer *pRenderer);

TF_EXPORT void tfAddFence(Renderer *pRenderer, Fence **p_fence);
TF_EXPORT void tfRemoveFence(Renderer *pRenderer, Fence *p_fence);
TF_EXPORT void tfAddSemaphore(Renderer *pRenderer, Semaphore **p_semaphore);
TF_EXPORT void tfRemoveSemaphore(Renderer *pRenderer, Semaphore *p_semaphore);
TF_EXPORT void tfAddQueue(Renderer *pRenderer, QueueDesc *pQDesc, Queue **pQueue);
TF_EXPORT void tfRemoveQueue(Renderer *pRenderer, Queue *pQueue);

/// Multiple of Command Pool
TF_EXPORT void tfAddCmdPool(Renderer *pRenderer, const CmdPoolDesc *p_desc, CmdPool **p_cmd_pool);
TF_EXPORT void tfRemoveCmdPool(Renderer *pRenderer, CmdPool *p_CmdPool);
TF_EXPORT void tfAddCmd(Renderer *pRenderer, const CmdDesc *p_desc, Cmd **p_cmd);
TF_EXPORT void tfRemoveCmd(Renderer *pRenderer, Cmd *pCmd);
TF_EXPORT void tfAddCmd_n(Renderer *pRenderer, const CmdDesc *p_desc, uint32_t cmd_count, Cmd ***p_cmds);
TF_EXPORT void tfRemoveCmd_n(Renderer *pRenderer, uint32_t cmd_count, Cmd **p_cmds);


TF_EXPORT void tfAddSwapChain(Renderer *pRenderer, const SwapChainDesc *p_desc, SwapChain **p_swap_chain);
TF_EXPORT void tfRemoveSwapChain(Renderer *pRenderer, SwapChain *p_swap_chain);


TF_EXPORT void addRenderTarget(Renderer *pRenderer, const RenderTargetDesc *pDesc, RenderTarget **ppRenderTarget);
TF_EXPORT void removeRenderTarget(Renderer *pRenderer, RenderTarget *pRenderTarget);
TF_EXPORT void addSampler(Renderer *pRenderer, const SamplerDesc *pDesc, Sampler **p_sampler);
TF_EXPORT void tfRemoveSampler(Renderer *pRenderer, Sampler *p_sampler);

TF_EXPORT void addBuffer(Renderer* pRenderer, const BufferDesc* pDesc, Buffer** pp_buffer);
TF_EXPORT void removeBuffer(Renderer* pRenderer, Buffer* pBuffer);
TF_EXPORT void mapBuffer(Renderer* pRenderer, Buffer* pBuffer, ReadRange* pRange);
TF_EXPORT void unmapBuffer(Renderer* pRenderer, Buffer* pBuffer);
TF_EXPORT void cmdUpdateBuffer(Cmd* pCmd, Buffer* pBuffer, uint64_t dstOffset, Buffer* pSrcBuffer, uint64_t srcOffset, uint64_t size);
TF_EXPORT void cmdUpdateSubresource(Cmd* pCmd, Texture* pTexture, Buffer* pSrcBuffer, const struct SubresourceDataDesc* pSubresourceDesc);
TF_EXPORT void cmdCopySubresource(Cmd* pCmd, Buffer* pDstBuffer, Texture* pTexture, const struct SubresourceDataDesc* pSubresourceDesc);
TF_EXPORT void addTexture(Renderer* pRenderer, const TextureDesc* pDesc, Texture** ppTexture);
TF_EXPORT void removeTexture(Renderer* pRenderer, Texture* pTexture);
TF_EXPORT void addVirtualTexture(Cmd* pCmd, const TextureDesc* pDesc, Texture** ppTexture, void* pImageData);
TF_EXPORT void removeVirtualTexture(Renderer* pRenderer, VirtualTexture* pTexture);

/// TODO backend 做了什么操作，总体上要实现什么？
TF_EXPORT void addRootSignature(Renderer *pRenderer, const RootSignatureDesc *pDesc, RootSignature **pRootSignature);
TF_EXPORT void removeRootSignature(Renderer *pRenderer, RootSignature *pRootSignature);



// pipeline functions
TF_EXPORT void addPipeline(Renderer *pRenderer, const PipelineDesc *p_pipeline_settings, Pipeline **p_pipeline);
TF_EXPORT void removePipeline(Renderer *pRenderer, Pipeline *p_pipeline);
TF_EXPORT void addPipelineCache(Renderer *pRenderer, const PipelineCacheDesc *pDesc, PipelineCache **ppPipelineCache);
TF_EXPORT void getPipelineCacheData(Renderer *pRenderer, PipelineCache *pPipelineCache, size_t *pSize, void *pData);
TF_EXPORT void removePipelineCache(Renderer *pRenderer, PipelineCache *pPipelineCache);

// Descriptor Set functions
/// Allocates a descriptor set with the given description
/// Sets all the descriptor handles to their default values (default texture, default buffer, ...)
TF_EXPORT void addDescriptorSet(Renderer *pRenderer, const DescriptorSetDesc *pDesc, DescriptorSet **pDescriptorSet);
/// Frees the descriptor set
TF_EXPORT void removeDescriptorSet(Renderer *pRenderer, DescriptorSet *pDescriptorSet);
/// Updates the descriptor set at index with the provided array of descriptor data
/// Safe to call from any thread as long as the the threads are accessing different index
/*
constexpr uint32_t PARAMS_COUNT = 1;
DescriptorData params[PARAMS_COUNT] = {};
params[0].pName = "uYCbCrSampler";//todo uYCbCrSampler 对应 pSimpleTexture ??
params[0].ppTextures = &pSimpleTexture;
params[0].mCount = 1;
updateDescriptorSet(pRenderer, 0, pSimpleDescriptorSets_NoneFreq, PARAMS_COUNT, params);

DescriptorData params[1] = {};
params[0].pName = "uniformBlock";
params[0].ppBuffers = &pProjViewUniformBuffer[i];
updateDescriptorSet(pRenderer, i, pDescriptorSetFrameUniforms, 1, params);
*/
TF_EXPORT void updateDescriptorSet(Renderer *pRenderer, uint32_t index, DescriptorSet *pDescriptorSet, uint32_t count,
                            const DescriptorData *pParams);


// shader functions
#if defined(TARGET_IOS)
TF_EXPORT void addIosShader(Renderer* pRenderer, const ShaderDesc* p_desc, Shader** p_shader_program);
#endif
/// IResourceLoader::addShader() -->
///     macOS addShaderBinary 映射 mtl_addShaderBinary 实际使用 dispatch_data_create + newLibraryWithData: 方案
///     iOS addIosShader 映射 mtl_addShader  实际使用 newLibraryWithSource: 方案
TF_EXPORT void addShaderBinary(Renderer *pRenderer, const BinaryShaderDesc *p_desc, Shader **p_shader_program);
TF_EXPORT void removeShader(Renderer *pRenderer, Shader *p_shader_program);

/// command buffer functions
TF_EXPORT void resetCmdPool(Renderer *pRenderer, CmdPool *pCmdPool);
//TODO 接受 Desc，里面先放debug label
TF_EXPORT void beginCmd(Cmd *p_cmd);
TF_EXPORT void endCmd(Cmd *p_cmd);
/// 第一眼看法，可能是错的：The-Forge API命名方式更像OpenGL和Vulkan API混合体，比如cmdBindRenderTargets和cmdDraw系列
/// 第一眼看法，可能是错的：窗口系列像Vulkan，比如acquireNextImage、waitForFences、addPipelineCache
TF_EXPORT void cmdBindRenderTargets(Cmd *p_cmd, uint32_t render_target_count, RenderTarget **p_render_targets,
                             RenderTarget *p_depth_stencil, const LoadActionsDesc *loadActions,
                             uint32_t *pColorArraySlices, uint32_t *pColorMipSlices, uint32_t depthArraySlice,
                             uint32_t depthMipSlice);

TF_EXPORT void cmdSetShadingRate(Cmd *p_cmd, ShadingRate shading_rate, Texture *p_texture,
                          ShadingRateCombiner post_rasterizer_rate,
                          ShadingRateCombiner final_rate);
/// TODO  明确 Framebuffer 坐标系(Y正方向问题);
TF_EXPORT void cmdSetViewport(Cmd *p_cmd, float x, float y, float width, float height, float min_depth, float max_depth);
TF_EXPORT void cmdSetScissor(Cmd *p_cmd, uint32_t x, uint32_t y, uint32_t width, uint32_t height);
TF_EXPORT void cmdSetStencilReferenceValue(Cmd *p_cmd, uint32_t val);
TF_EXPORT void cmdBindPipeline(Cmd *p_cmd, Pipeline *p_pipeline);
/// todo @param index 和 shader 对应关系是什么
/// Binds the descriptor set at index to the command buffer
/// Safe to call from any thread
TF_EXPORT void cmdBindDescriptorSet(Cmd *pCmd, uint32_t index, DescriptorSet *pDescriptorSet);
/// @param pConstants 直接拷贝到 GPU 驱动
/// Binds a push constant / root constant with the input name to the command buffer using the input root signature
/// Safe to call from any thread
TF_EXPORT void cmdBindPushConstants(Cmd *pCmd, RootSignature *pRootSignature, uint32_t paramIndex, const void *pConstants);
/// Optimized version of cmdBindPushConstants which avoids the string lookup by directly providing the index of the descriptor in the root signature
/// Safe to call from any thread
TF_EXPORT void cmdBindDescriptorSetWithRootCbvs(Cmd *pCmd, uint32_t index, DescriptorSet *pDescriptorSet, uint32_t count,
                                         const DescriptorData *pParams);
TF_EXPORT void cmdBindIndexBuffer(Cmd *p_cmd, Buffer *p_buffer, uint32_t indexType, uint64_t offset);
/// Vertex Resources
TF_EXPORT void cmdBindVertexBuffer(Cmd *p_cmd, uint32_t buffer_count, Buffer **pp_buffers, const uint32_t *pStrides, const uint64_t *pOffsets);
/// Drawing
/// todo 为什么不需要提供Primitives参数。OpenGL, Metal 都需要提供, Vulkan 无需提供
TF_EXPORT void cmdDraw(Cmd *p_cmd, uint32_t vertex_count, uint32_t first_vertex);
TF_EXPORT void cmdDrawInstanced(Cmd *pCmd, uint32_t vertexCount, uint32_t firstVertex, uint32_t instanceCount, uint32_t firstInstance);
TF_EXPORT void cmdDrawIndexed(Cmd *p_cmd, uint32_t index_count, uint32_t first_index, uint32_t first_vertex);
TF_EXPORT void cmdDrawIndexedInstanced(Cmd *pCmd, uint32_t indexCount, uint32_t firstIndex, uint32_t instanceCount,
                                uint32_t firstVertex, uint32_t firstInstance);
///
TF_EXPORT void cmdDispatch(Cmd *p_cmd, uint32_t group_count_x, uint32_t group_count_y, uint32_t group_count_z);

/// TODO 2021.05.31 后处理 Pass之间如何同步，开发者自己写Fence, Semaphore, event?
/// TODO RenderTargetBarrier 是否影响Encoder并行？
// Transition Commands
TF_EXPORT void cmdResourceBarrier(Cmd *p_cmd, uint32_t buffer_barrier_count, BufferBarrier *p_buffer_barriers,
                           uint32_t texture_barrier_count, TextureBarrier *p_texture_barriers,
                           uint32_t rt_barrier_count, RenderTargetBarrier *p_rt_barriers);

// Virtual Textures
TF_EXPORT void cmdUpdateVirtualTexture(Cmd *pCmd, Texture *pTexture, uint32_t currentImage);

// queue/fence/swapchain functions
TF_EXPORT void acquireNextImage(Renderer *pRenderer, SwapChain *p_swap_chain, Semaphore *p_signal_semaphore, Fence *p_fence,
                         uint32_t *p_image_index);
TF_EXPORT void queueSubmit(Queue *p_queue, const QueueSubmitDesc *p_desc);
TF_EXPORT void queuePresent(Queue *p_queue, const QueuePresentDesc *p_desc);
TF_EXPORT void waitQueueIdle(Queue *p_queue);
TF_EXPORT void getFenceStatus(Renderer *pRenderer, Fence *p_fence, FenceStatus *p_fence_status);
TF_EXPORT void waitForFences(Renderer *pRenderer, uint32_t fenceCount, Fence **ppFences);
TF_EXPORT void toggleVSync(Renderer *pRenderer, SwapChain **ppSwapchain);

//Returns the recommended format for the swapchain.
//If true is passed for the hintHDR parameter, it will return an HDR format IF the platform supports it
//If false is passed or the platform does not support HDR a non HDR format is returned.
//If true is passed for the hintSrgb parameter, it will return format that is will do gamma correction automatically
//If false is passed for the hintSrgb parameter the gamma correction should be done as a postprocess step before submitting image to swapchain
TF_EXPORT TinyImageFormat getRecommendedSwapchainFormat(bool hintHDR, bool hintSRGB);

//indirect Draw functions
TF_EXPORT void addIndirectCommandSignature(Renderer *pRenderer, const CommandSignatureDesc *p_desc,
                                    CommandSignature **ppCommandSignature);
TF_EXPORT void removeIndirectCommandSignature(Renderer *pRenderer, CommandSignature *pCommandSignature);
TF_EXPORT void cmdExecuteIndirect(Cmd *pCmd, CommandSignature *pCommandSignature, unsigned int maxCommandCount,
                           Buffer *pIndirectBuffer, uint64_t bufferOffset, Buffer *pCounterBuffer,
                           uint64_t counterBufferOffset);

/************************************************************************/
// GPU Query Interface
/************************************************************************/
TF_EXPORT void getTimestampFrequency(Queue *pQueue, double *pFrequency);
TF_EXPORT void addQueryPool(Renderer *pRenderer, const QueryPoolDesc *pDesc, QueryPool **ppQueryPool);
TF_EXPORT void removeQueryPool(Renderer *pRenderer, QueryPool *pQueryPool);
TF_EXPORT void cmdResetQueryPool(Cmd *pCmd, QueryPool *pQueryPool, uint32_t startQuery, uint32_t queryCount);
TF_EXPORT void cmdBeginQuery(Cmd *pCmd, QueryPool *pQueryPool, QueryDesc *pQuery);
TF_EXPORT void cmdEndQuery(Cmd *pCmd, QueryPool *pQueryPool, QueryDesc *pQuery);
//TODO The-Forge 现在实现的是哪个功能？Occlusion?
//typedef enum WGPUQueryType {
//    WGPUQueryType_Occlusion = 0x00000000,
//    WGPUQueryType_PipelineStatistics = 0x00000001,
//    WGPUQueryType_Timestamp = 0x00000002,
//    WGPUQueryType_Force32 = 0x7FFFFFFF
//} WGPUQueryType;
TF_EXPORT void cmdResolveQuery(Cmd *pCmd, QueryPool *pQueryPool, Buffer *pReadbackBuffer, uint32_t startQuery, uint32_t queryCount);
/************************************************************************/
// Stats Info Interface
/************************************************************************/
TF_EXPORT void calculateMemoryStats(Renderer *pRenderer, char **stats);
TF_EXPORT void calculateMemoryUse(Renderer *pRenderer, uint64_t *usedBytes, uint64_t *totalAllocatedBytes);
TF_EXPORT void freeMemoryStats(Renderer *pRenderer, char *stats);
/************************************************************************/
// Debug Marker Interface
/************************************************************************/
TF_EXPORT void cmdBeginDebugMarker(Cmd *pCmd, float r, float g, float b, const char *pName);
TF_EXPORT void cmdEndDebugMarker(Cmd *pCmd);
/// VkDebugUtilsLabelEXT、D3D12 支持自定义颜色
/// Dawn 不支持输入颜色
TF_EXPORT void cmdAddDebugMarker(Cmd *pCmd, float r, float g, float b, const char *pName);
TF_EXPORT uint32_t cmdWriteMarker(Cmd *pCmd, MarkerType markerType, uint32_t markerValue, Buffer* pBuffer, size_t offset, bool useAutoFlags);

/************************************************************************/
// Resource Debug Naming Interface
/************************************************************************/
TF_EXPORT void setBufferName(Renderer *pRenderer, Buffer *pBuffer, const char *pName);
TF_EXPORT void setTextureName(Renderer *pRenderer, Texture *pTexture, const char *pName);
TF_EXPORT void setRenderTargetName(Renderer *pRenderer, RenderTarget *pRenderTarget, const char *pName);
TF_EXPORT void setPipelineName(Renderer *pRenderer, Pipeline *pPipeline, const char *pName);

//void setForgeProcTable();

//#ifdef __cplusplus
//} // extern "C"
//#endif

typedef struct ForgeProcTable {
//    TFProcInitRendererContext initRendererContext;
//    TFProcExitRendererContext exitRendererContext;
//
//    TFProcInitRenderer initRenderer;
//    TFProcExitRenderer exitRenderer;

    TFProcAddFence addFence;
    TFProcRemoveFence removeFence;
    TFProcAddSemaphore addSemaphore;
    TFProcRemoveSemaphore removeSemaphore;
    TFProcAddQueue addQueue;
    TFProcRemoveQueue removeQueue;


    TFProcAddCmdPool addCmdPool;
    TFProcRemoveCmdPool removeCmdPool;
    TFProcAddCmd addCmd;
    TFProcRemoveCmd removeCmd;
    TFProcAddCmd_n addCmd_n;
    TFProcRemoveCmd_n removeCmd_n;


    TFProcAddSwapChain addSwapChain;
    TFProcRemoveSwapChain removeSwapChain;

    TFProcAddRenderTarget addRenderTarget;
    TFProcRemoveRenderTarget removeRenderTarget;
    TFProcAddSampler addSampler;
    TFProcRemoveSampler removeSampler;

    TFTFProcAddBuffer addBuffer;
    TFTFProcRemoveBuffer removeBuffer;
    TFTFProcMapBuffer mapBuffer;
    TFTFProcUnmapBuffer unmapBuffer;
    TFTFProcCmdUpdateBuffer cmdUpdateBuffer;
    TFTFProcCmdUpdateSubresource cmdUpdateSubresource;
    TFTFProcCmdCopySubresource cmdCopySubresource;
    TFTFProcAddTexture addTexture;
    TFTFProcRemoveTexture removeTexture;
    TFTFProcAddVirtualTexture addVirtualTexture;
    TFTFProcRemoveVirtualTexture removeVirtualTexture;

    TFProcAddRootSignature addRootSignature;
    TFProcRemoveRootSignature removeRootSignature;

    TFProcAddDescriptorSet addDescriptorSet;
    TFProcRemoveDescriptorSet removeDescriptorSet;
    TFProcUpdateDescriptorSet updateDescriptorSet;

    TFProcAddPipeline addPipeline;
    TFProcRemovePipeline removePipeline;
    TFProcAddPipelineCache addPipelineCache;
    TFProcGetPipelineCacheData getPipelineCacheData;
    TFProcRemovePipelineCache removePipelineCache;

    /// shader functions
#if defined(TARGET_IOS)
    TFProcAddIosShader addIosShader;
#endif
    TFProcAddShaderBinary addShaderBinary;
    TFProcRemoveShader removeShader;

    /// command buffer functions
    TFProcResetCmdPool resetCmdPool;
    TFProcBeginCmd beginCmd;
    TFProcEndCmd endCmd;
    TFProcCmdBindRenderTargets cmdBindRenderTargets;

    TFProcCmdSetShadingRate cmdSetShadingRate;
    TFProcCmdSetViewport cmdSetViewport;
    TFProcCmdSetScissor cmdSetScissor;
    TFProcCmdSetStencilReferenceValue cmdSetStencilReferenceValue;
    TFProcCmdBindPipeline cmdBindPipeline;
    TFProcCmdBindDescriptorSet cmdBindDescriptorSet;
    TFProcCmdBindPushConstants cmdBindPushConstants;
    TFProcCmdBindDescriptorSetWithRootCbvs cmdBindDescriptorSetWithRootCbvs;
    TFProcCmdBindIndexBuffer cmdBindIndexBuffer;
    TFProcCmdBindVertexBuffer cmdBindVertexBuffer;
    TFProcCmdDraw cmdDraw;
    TFProcCmdDrawInstanced cmdDrawInstanced;
    TFProcCmdDrawIndexed cmdDrawIndexed;
    TFProcCmdDrawIndexedInstanced cmdDrawIndexedInstanced;
    /// Compute
    TFProcCmdDispatch cmdDispatch;
    /// Transition Commands
    TFProcCmdResourceBarrier cmdResourceBarrier;
    /// Virtual Textures
    TFProcCmdUpdateVirtualTexture cmdUpdateVirtualTexture;

    /// queue/fence/swapchain functions
    TFProcAcquireNextImage acquireNextImage;
    TFProcQueueSubmit queueSubmit;
    TFProcQueuePresent queuePresent;
    TFProcWaitQueueIdle waitQueueIdle;
    TFProcGetFenceStatus getFenceStatus;
    TFProcWaitForFences waitForFences;
    TFProcToggleVSync toggleVSync;

    TFProcGetRecommendedSwapchainFormat getRecommendedSwapchainFormat;

    ///indirect Draw functions
    TFProcAddIndirectCommandSignature addIndirectCommandSignature;
    TFProcRemoveIndirectCommandSignature removeIndirectCommandSignature;
    TFProcCmdExecuteIndirect cmdExecuteIndirect;

    /// GPU Query Interface
    TFProcGetTimestampFrequency getTimestampFrequency;
    TFProcAddQueryPool addQueryPool;
    TFProcRemoveQueryPool removeQueryPool;
    TFProcCmdResetQueryPool cmdResetQueryPool;
    TFProcCmdBeginQuery cmdBeginQuery;
    TFProcCmdEndQuery cmdEndQuery;
    TFProcCmdResolveQuery cmdResolveQuery;
    
    /// Stats Info Interface
    TFProcCalculateMemoryStats calculateMemoryStats;
    TFProcCalculateMemoryUse calculateMemoryUse;
    TFProcFreeMemoryStats freeMemoryStats;

    /// Debug Marker Interface
    TFProcCmdBeginDebugMarker cmdBeginDebugMarker;
    TFProcCmdEndDebugMarker cmdEndDebugMarker;
    TFProcCmdAddDebugMarker cmdAddDebugMarker;
    TFProcCmdWriteMarker cmdWriteMarker;

    /// Resource Debug Naming Interface
    TFProcSetBufferName setBufferName;
    TFProcSetTextureName setTextureName;
    TFProcSetRenderTargetName setRenderTargetName;
    TFProcSetPipelineName setPipelineName;
} ForgeProcTable;

#endif  // FORGE_PROC_TABLE_H_
