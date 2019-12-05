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

        screen.clear();

        swarm.update(elapsed);

        unsigned char red = (int) ((sin(elapsed * 0.0001) + 1) * 128);
        unsigned char green = (int) ((sin(elapsed * 0.0002) + 1) * 128);
        unsigned char blue = (int) ((sin(elapsed * 0.0003) + 1) * 128);

        const Particle *const pParticles = swarm.getParticles();
        const auto halfHeight = Screen::SCREEN_HEIGHT / 2;
        const auto halfWidth = Screen::SCREEN_WIDTH / 2;

        for (int i = 0; i < Swarm::N_PARTICLES; i++) {
            Particle particle = pParticles[i];
            int x = (int) ((particle.m_x + 1) * halfWidth);
            int y = (int) (particle.m_y * Screen::SCREEN_WIDTH / 2 + halfHeight);

            screen.setPixel(x, y, red,green,blue);
        }

        screen.update();

        if (screen.processEvents()) break;
    }

    screen.destroyScreen();

    return 0;
}