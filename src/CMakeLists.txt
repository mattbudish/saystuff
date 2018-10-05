set (CMAKE_CXX_STANDARD 11)

add_library(sayfoo SHARED sayfoo.cpp)
add_library(saybar SHARED saybar.cpp)
add_executable(saystuff main.cpp)