cmake_minimum_required(VERSION 3.16)
project(HolaMotor LANGUAGES CXX)

# Usar C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# Ruta absoluta a Assets
set(ASSETS_PATH "${CMAKE_SOURCE_DIR}/Assets")

# Pasar la ruta a C++ como macro
add_compile_definitions(ASSETS_PATH="${ASSETS_PATH}")

# add_subdirectory(Chapter01)
add_subdirectory(Chapter02)