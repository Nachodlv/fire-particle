#include "screen/Screen.h"
#include <cmath>

using namespace std;

int main() {

    Screen screen{};
    if (!screen.init()) return 1;

//  game loop
    while (true) {
        auto elapsed = SDL_GetTicks();
        unsigned char red = (int) ((sin(elapsed * 0.0001) + 1) * 128);
        unsigned char green = (int) ((sin(elapsed * 0.0002) + 1) * 128);
        unsigned char blue = (int) ((sin(elapsed * 0.0003) + 1) * 128);


        for (int y = 0; y < Screen::SCREEN_HEIGHT; y++) {
            for (int x = 0; x < Screen::SCREEN_WIDTH; x++) {
                screen.setPixel(x, y, red, green, blue);
            }
        }

        screen.update();

        if (screen.processEvents()) break;
    }

    screen.destroyScreen();

    return 0;
}