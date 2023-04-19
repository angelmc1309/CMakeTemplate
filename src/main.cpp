#include <iostream>
#include "staticLib.hpp"
#include "dynamicLib.hpp"
#include "SDL.h"

int main(int argc, char* argv[]) {
    printHelloLibrary();
    HelloDynamicLibrary();
    std::cout << SDL_HAPTIC_CONSTANT << std::endl;
    std::cout << "Hello, World!" << std::endl;

    return 0;
}
