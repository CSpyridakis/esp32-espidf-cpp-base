file(GLOB_RECURSE APP_SOURCES ${CMAKE_CURRENT_LIST_DIR}/*.cpp ${CMAKE_CURRENT_LIST_DIR}/*.c)

message(STATUS "Collected source files: ${APP_SOURCES}")

idf_component_register(SRCS ${APP_SOURCES}
                    PRIV_REQUIRES spi_flash
                    INCLUDE_DIRS "../include")