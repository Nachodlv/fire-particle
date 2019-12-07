#include "screen/Screen.h"
#include "swarm/Swarm.h"
#include "swarm-drawer/SwarmDrawer.h"
#include <cmath>
#include <ctime>

using namespace std;

int main() {

    srandom(time(nullptr));

    Screen screen{};
    if (!screen.init()) return 1;

    Swarm swarm;
    SwarmDrawer swarmDrawer(&swarm);

//  game loop
    while (true) {
        auto elapsed = SDL_GetTicks();

        screen.boxBlur();

        swarmDrawer.draw(&screen, elapsed);

        screen.update();

        if (screen.processEvents()) break;
    }

    screen.destroyScreen();
    return 0;
}