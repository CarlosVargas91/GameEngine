set(CHAPTER_NAME 2dRenderer)

# Crear el ejecutable
add_executable(${CHAPTER_NAME} 
    src/main.cpp
    src/Game/Game.cpp)

# Incluir headers
target_include_directories(${CHAPTER_NAME} PRIVATE
    C:/msys64/mingw64/include/SDL2   # headers de SDL2
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Actors
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Game
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Math
    ${CMAKE_CURRENT_SOURCE_DIR}/src/SpriteComponents
)

# Linkear librerías directamente
target_link_libraries(${CHAPTER_NAME} PRIVATE
    mingw32          # necesario en Windows
    SDL2             # la librería principal
    SDL2_image
)

# Forzar ejecutable de consola
set_target_properties(${CHAPTER_NAME} PROPERTIES WIN32_EXECUTABLE OFF)