#include <iostream>
#include <SDL.h>
#include "screen/Screen.h"

using namespace std;

int main() {

    Screen screen{};
    screen.init();

    bool quit = false;

//  game loop
    while (!quit) {
//        Update particles
//        Draw particles
        quit = screen.Update();

    }

   screen.destroyScreen();

    return 0;
}