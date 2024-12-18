# The following lines of boilerplate have to be in your project's
# CMakeLists in this exact order for cmake to work correctly
cmake_minimum_required(VERSION 3.16)
SET(
    EXTRA_COMPONENT_DIRS 
    "./src" # Instead of main/ component
    "./lib" # Instead of components/ dir
)
include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(hello_world)
