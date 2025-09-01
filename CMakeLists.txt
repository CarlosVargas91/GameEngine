cmake_minimum_required(VERSION 3.16)
project(HolaMotor LANGUAGES CXX)

# Usar C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Crear el ejecutable
add_executable(HolaMotor 
    Chapter01/src/main.cpp
    Chapter01/src/Game/Game.cpp)

# Incluir headers
target_include_directories(HolaMotor PRIVATE
    C:/msys64/mingw64/include/SDL2   # headers de SDL2
    ${CMAKE_SOURCE_DIR}/Chapter01/src
    ${CMAKE_SOURCE_DIR}/Chapter01/src/Game/include
)

# Linkear librerías directamente
target_link_libraries(HolaMotor PRIVATE
    mingw32          # necesario en Windows
    SDL2             # la librería principal
)

# Forzar ejecutable de consola
set_target_properties(HolaMotor PROPERTIES WIN32_EXECUTABLE OFF)