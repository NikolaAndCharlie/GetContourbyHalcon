cmake_minimum_required(VERSION 3.5)
project(GetContourTool)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5Widgets REQUIRED)
find_package(Qt5Core REQUIRED)
find_package(Qt5GUI REQUIRED)


set(Qt_LIB Qt5::Widgets Qt5::Core Qt5::Gui)



#halcon
set(Halcon_DIR ${GetContourTool_SOURCE_DIR}/3rdparty/h12)
set(Halcon_Include_DIR ${Halcon_DIR}/include)
set(Halcon_LIB ${Halcon_DIR}/lib/x64-win64/halconcpp.lib)

include_directories(GetContourTool ${Halcon_Include_DIR})

file(GLOB_RECURSE SRC src/*.h)
file(GLOB_RECURSE HDR src/*.cpp)


add_executable(GetContourTool WIN32 ${HDR} ${SRC})
target_link_libraries(GetContourTool ${Qt_LIB} ${Halcon_LIB})
