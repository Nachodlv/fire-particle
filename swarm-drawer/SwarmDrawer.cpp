//
// Created by ignacio on 7/12/19.
//

#include "SwarmDrawer.h"

void SwarmDrawer::draw(Screen *screen, int elapsed) {

    swarm->update(elapsed);

    unsigned char red = (int) ((sin(elapsed * 0.0001) + 1) * 128);
    unsigned char green = (int) ((sin(elapsed * 0.0002) + 1) * 128);
    unsigned char blue = (int) ((sin(elapsed * 0.0003) + 1) * 128);

    const Particle *const pParticles = swarm->getParticles();
    const auto halfHeight = Screen::SCREEN_HEIGHT / 2;
    const auto halfWidth = Screen::SCREEN_WIDTH / 2;

    for (int i = 0; i < Swarm::N_PARTICLES; i++) {
        Particle particle = pParticles[i];
        int x = (int) ((particle.m_x + 1) * halfWidth);
        int y = (int) (particle.m_y * Screen::SCREEN_WIDTH / 2 + halfHeight);

        screen->setPixel(x, y, red,green,blue);
    }

}
