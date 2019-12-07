//
// Created by ignacio on 7/12/19.
//

#ifndef FIRE_PARTICLE_SWARMDRAWER_H
#define FIRE_PARTICLE_SWARMDRAWER_H


#include "../screen/Screen.h"
#include "../swarm/Swarm.h"

class SwarmDrawer {
private:
    Swarm *swarm;
public:
    /**
     * Initializes the SwarmDrawer with the swarm passed as parameter
     * */
    explicit SwarmDrawer(Swarm *swarm): swarm(swarm){};

    /**
     * Draw the particles of the swarm on the screen
     * */
    void draw(Screen *screen, int elapsed);
};


#endif //FIRE_PARTICLE_SWARMDRAWER_H
