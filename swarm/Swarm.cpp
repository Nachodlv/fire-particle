//
// Created by ignacio on 4/12/19.
//

#include "Swarm.h"

Swarm::Swarm(): lastTime(0) {
    m_pParticle = new Particle[N_PARTICLES];
}

Swarm::~Swarm() {
    delete [] m_pParticle;
}

void Swarm::update(int elapsed) {

    int interval = elapsed - lastTime;
    lastTime = elapsed;

    for (int i = 0; i < N_PARTICLES; i++) {
        m_pParticle[i].update(interval);
    }

}
