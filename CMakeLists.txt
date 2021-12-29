cmake_minimum_required(VERSION 3.21)

# set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# # Generate XCode schema files
# set(CMAKE_XCODE_GENERATE_SCHEME TRUE)
# # Make malloc write 0xAA to newly allocated memory and 0x55 to deallocated memory
# set(CMAKE_XCODE_SCHEME_MALLOC_SCRIBBLE YES)
# # Place guard pages on each side of large (4096 bytes or more) buffers
# set(CMAKE_XCODE_SCHEME_MALLOC_GUARD_EDGES YES)

project(Ironforge)

set(CMAKE_CXX_STANDARD 14)

add_definitions(-DGLES)

add_executable(Ironforge 
        src/main.cpp
        
        src/forge_proc_table.cpp
        src/forge_proc_table.h
        src/Config.h
        src/GLES2/gl2.h
        src/GLES2/gl2ext.h
        src/GLES2/gl2platform.h
        src/Renderer/OpenGLES/GLES.cpp 
        src/Renderer/OpenGLES/GLES.h)
