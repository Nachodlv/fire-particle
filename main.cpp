#include <iostream>
#include <SDL.h>
#include "screen/Screen.h"

using namespace std;

int main() {

    Screen screen{};
    screen.init();
    
//  game loop
    while (true) {
        if(screen.processEvents()) break;
    }

   screen.destroyScreen();

    return 0;
}