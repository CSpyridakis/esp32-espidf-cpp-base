file(GLOB_RECURSE APP_SOURCES ${CMAKE_CURRENT_LIST_DIR}/*.cpp ${CMAKE_CURRENT_LIST_DIR}/*.c)

message(STATUS "[dummy_class] Collected source files: ${APP_SOURCES}")

idf_component_register(
    SRCS ${APP_SOURCES}
    INCLUDE_DIRS "./include"
)