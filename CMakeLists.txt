
PROJECT(certain_value_true)

MESSAGE(STATUS "Project: certain_value_true")
MESSAGE(STATUS "Project Directory: ${PROJECT_SOURCE_DIR}")
SET(CMAKE_BUILE_TYPE DEBUG)
SET(CMAKE_C_FLAGS_DEBUG "-g -Wall")

add_executable(certain_value_true src/main.c)