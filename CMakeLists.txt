cmake_minimum_required(VERSION 3.20.0)
project(planning
    VERSION 0.0.1
    DESCRIPTION "a demo for planning"
    HOMEPAGE_URL "https://github.com/codingzyd/cmake_planning_demo"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(Process_Dir ${PROJECT_SOURCE_DIR}/src/process)
set(Pnc_Map_Dir ${PROJECT_SOURCE_DIR}/src/pnc_map)
set(Showresult_Dir ${PROJECT_SOURCE_DIR}/src/showresult)

set(EIGEN3_DIR "F:/3rdparty/eigen-3.4.0")
include_directories(${EIGEN3_DIR})
add_subdirectory(src)