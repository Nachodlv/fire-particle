//
// Created by ignacio on 4/12/19.
//

#ifndef FIRE_PARTICLE_PARTICLE_H
#define FIRE_PARTICLE_PARTICLE_H

/**
 * Struct representing a particle in the screen
 * */
struct Particle {
    double m_x;
    double m_y;

    double m_speed;
    double m_direction;

public:
    /**
     * Initializes the position of the particle at (0, 0) and set a random speed and direction;
     * */
    Particle();

    /**
     * Changes the position of the particle according to the speed and the direction.
     * */
    void update();
};


#endif //FIRE_PARTICLE_PARTICLE_H
