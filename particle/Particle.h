//
// Created by ignacio on 4/12/19.
//

#ifndef FIRE_PARTICLE_PARTICLE_H
#define FIRE_PARTICLE_PARTICLE_H


struct Particle {
    double m_x;
    double m_y;

    double m_xSpeed;
    double m_ySpeed;

public:
    Particle();

    void update();
};


#endif //FIRE_PARTICLE_PARTICLE_H
