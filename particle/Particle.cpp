//
// Created by ignacio on 4/12/19.
//

#include <cstdlib>
#include <iostream>
#include "Particle.h"

using namespace std;

Particle::Particle() {
    m_x = 2.0 * (double) random() / RAND_MAX - 1;
    m_y = 2.0 * (double) random() / RAND_MAX - 1;

    m_xSpeed = 0.001 * ((2.0 * (double) random()) / RAND_MAX - 1);
    m_ySpeed = 0.001 * ((2.0 * (double) random()) / RAND_MAX - 1);
}

void Particle::update() {

    m_x += m_xSpeed;
    m_y += m_ySpeed;

    if(m_x < -1 || m_x >= 1) {
        m_xSpeed *= -1;
    }

    if(m_y < -1 || m_y >= 1) {
        m_ySpeed *= -1;
    }
}

