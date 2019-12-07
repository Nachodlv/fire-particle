//
// Created by ignacio on 4/12/19.
//

#include <cstdlib>
#include <cmath>

#include "Particle.h"

using namespace std;

Particle::Particle() : m_x(0), m_y(0), m_direction(0), m_speed(0) {
   init();
}

void Particle::init() {
    m_x = 0;
    m_y = 0;
    m_direction = 2 * M_PI * (double) random() / RAND_MAX;
    m_speed = (0.02 * (double) random()) / RAND_MAX;

    m_speed *= m_speed;
}

void Particle::update(int interval) {

    m_direction += interval * 0.0003;

    double xSpeed = m_speed * cos(m_direction);
    double ySpeed = m_speed * sin(m_direction);

    m_x += xSpeed * interval;
    m_y += ySpeed * interval;

    if (m_x < -1 || m_x > 1 || m_y < -1 || m_y > 1) {
        init();
    }

    if(random() < RAND_MAX/100) {
        init();
    }
}

