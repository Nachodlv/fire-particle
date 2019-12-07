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

private:
    double m_speed;
    double m_direction;

private:
    /**
     * Set the particle position to (0, 0) and set a random direction and a random speed
     * */
    void init();

public:
    /**
     * Initializes the variables to 0 and calls the function init
     * */
    Particle();

    /**
     * Changes the position of the particle according to the speed and the direction.
     * If the particle is out of bound, it calls the function init
     * */
    void update(int interval);
};


#endif //FIRE_PARTICLE_PARTICLE_H
