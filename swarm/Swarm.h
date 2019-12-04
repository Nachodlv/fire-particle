//
// Created by ignacio on 4/12/19.
//

#ifndef FIRE_PARTICLE_SWARM_H
#define FIRE_PARTICLE_SWARM_H


#include "../particle/Particle.h"

class Swarm {
public:
    const static int N_PARTICLES = 5000;

private:
    Particle * m_pParticle;

public:
    Swarm();
    ~Swarm();

    const Particle * getParticles(){return m_pParticle;};

    void update();
};


#endif //FIRE_PARTICLE_SWARM_H
