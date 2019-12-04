//
// Created by ignacio on 4/12/19.
//

#include "Swarm.h"

Swarm::Swarm() {
    m_pParticle = new Particle[N_PARTICLES];
}

Swarm::~Swarm() {
    delete [] m_pParticle;
}
