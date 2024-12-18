# All C/C++ files from src/
file(
    GLOB_RECURSE APP_SOURCES 
    ${CMAKE_CURRENT_LIST_DIR}/*.cpp 
    ${CMAKE_CURRENT_LIST_DIR}/*.c
)

# All includes from compoments (lib/)
file(
    GLOB LIBS_INCLUDE
    ${CMAKE_CURRENT_LIST_DIR}/../lib/*/include/
    ${CMAKE_CURRENT_LIST_DIR}/../lib/*
)

message(STATUS "[src/] Collected source files: ${APP_SOURCES}")
message(STATUS "[src/] Collected include dirs: ${LIBS_INCLUDE}")

idf_component_register(
    SRCS ${APP_SOURCES}
    INCLUDE_DIRS "../include" ${LIBS_INCLUDE}
)