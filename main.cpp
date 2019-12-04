#include "screen/Screen.h"
#include "swarm/Swarm.h"
#include <cmath>
#include <ctime>

using namespace std;

int main() {

    srandom(time(nullptr));

    Screen screen{};
    if (!screen.init()) return 1;

    Swarm swarm;

//  game loop
    while (true) {

        auto elapsed = SDL_GetTicks();
        unsigned char red = (int) ((sin(elapsed * 0.0001) + 1) * 128);
        unsigned char green = (int) ((sin(elapsed * 0.0002) + 1) * 128);
        unsigned char blue = (int) ((sin(elapsed * 0.0003) + 1) * 128);

        const Particle *const pParticles = swarm.getParticles();
        for (int i = 0; i < Swarm::N_PARTICLES; i++) {
            Particle particle = pParticles[i];
            int x = (int) ((particle.m_x + 1) * Screen::SCREEN_WIDTH / 2);
            int y = (int) ((particle.m_y + 1) * Screen::SCREEN_HEIGHT / 2);

            screen.setPixel(x, y, red,green,blue);
        }


        screen.update();

        if (screen.processEvents()) break;
    }

    screen.destroyScreen();

    return 0;
}