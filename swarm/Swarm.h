//
// Created by ignacio on 4/12/19.
//

#ifndef FIRE_PARTICLE_SWARM_H
#define FIRE_PARTICLE_SWARM_H


#include "../particle/Particle.h"

/**
 * A class containing an array of particles
 * */
class Swarm {
public:
    const static int N_PARTICLES = 5000;

private:
    Particle * m_pParticle;

public:

    /**
     * Initialize the particle array with size N_PARTICLES
     * */
    Swarm();

    /**
     * Deallocate the memory of the particles
     * */
    ~Swarm();

    /**
     * Returns the particles pointer
     * */
    const Particle * getParticles(){return m_pParticle;};

    /**
     * Updates each particle
     * */
    void update();
};


#endif //FIRE_PARTICLE_SWARM_H
