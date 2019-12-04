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

}

