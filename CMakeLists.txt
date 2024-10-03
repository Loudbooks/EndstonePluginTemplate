cmake_minimum_required(VERSION 3.30)
project(example_plugin)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES
        src/example_plugin.cpp
        src/example_plugin.h
)

set(OUTPUT_NAME ${PROJECT_NAME})

if(WIN32)
    set(OS_NAME "windows")
elseif(UNIX)
    set(OS_NAME "linux")
endif()

if(CMAKE_BUILD_TYPE STREQUAL "RelWithDebInfo")
    set(OUTPUT_NAME "${OUTPUT_NAME}_${OS_NAME}_debug")
elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
    set(OUTPUT_NAME "${OUTPUT_NAME}_${OS_NAME}")
endif()


include(FetchContent)
FetchContent_Declare(
        endstone
        GIT_REPOSITORY https://github.com/EndstoneMC/endstone.git
        GIT_TAG v0.5.4.1
)
FetchContent_MakeAvailable(endstone)

endstone_add_plugin(${PROJECT_NAME} ${SOURCES})
set_target_properties(${PROJECT_NAME} PROPERTIES PREFIX "")
set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME ${OUTPUT_NAME})