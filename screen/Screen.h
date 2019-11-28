//
// Created by ignacio on 28/11/19.
//

#ifndef FIRE_PARTICLE_SCREEN_H
#define FIRE_PARTICLE_SCREEN_H

#include <SDL.h>

class Screen {
private:
    const static int SCREEN_WIDTH = 800;
    const static int SCREEN_HEIGHT = 600;

    SDL_Window *m_window;
    SDL_Renderer *m_renderer;
    SDL_Texture *m_texture;
    Uint32 *m_buffer1;
    Uint32 *m_buffer2;
    Uint32 *m_frontBuffer;
    Uint32 *m_backBuffer;
    SDL_Event event;

public:
    bool init();

    SDL_Window *getWindow() { return m_window; };
    void destroyScreen();

    bool Update();
};


#endif //FIRE_PARTICLE_SCREEN_H
