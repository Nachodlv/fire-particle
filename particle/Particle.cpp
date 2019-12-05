//
// Created by ignacio on 4/12/19.
//

#include <cstdlib>
#include <iostream>
#include <cmath>

#include "Particle.h"

using namespace std;

Particle::Particle() : m_x(0), m_y(0) {
    m_direction = 2 * M_PI * (double) random() / RAND_MAX;
    m_speed = (0.001 *  (double) random()) / RAND_MAX;
}

void Particle::update(int interval) {
    double xSpeed = m_speed * cos(m_direction);
    double ySpeed = m_speed * sin(m_direction);

    m_x += xSpeed * interval;
    m_y += ySpeed * interval;
}

