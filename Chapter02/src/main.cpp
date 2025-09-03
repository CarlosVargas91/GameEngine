// Para que SDL_Main se maneje solo
#define SDL_MAIN_HANDLED

#include <iostream>
#include <memory>
#include "Game.hpp"


int main() {
    std::unique_ptr<Game> game = std::make_unique<Game>(); // Like a singleton

    if (!game->Init()) {
        std::cout << "Fallo al inicializar el juego" << std::endl;
    }
    else{
        std::cout << "Hola, Motor Grafico en C++ funcionando con GCC + CMake + Cursor!" << std::endl;
    }
    return 0;
}