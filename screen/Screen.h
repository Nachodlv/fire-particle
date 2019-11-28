//
// Created by ignacio on 28/11/19.
//

#ifndef FIRE_PARTICLE_SCREEN_H
#define FIRE_PARTICLE_SCREEN_H

#include <SDL.h>

/**
 * Class in charge of creating and rendering a window with SDL
 * */
class Screen {
public:
    const static int SCREEN_WIDTH = 800;
    const static int SCREEN_HEIGHT = 600;

private:
    SDL_Window *m_window;
    SDL_Renderer *m_renderer;
    SDL_Texture *m_texture;
    Uint32 *m_buffer;
    SDL_Event event{};

public:

    /**
     * Initializes the variables of the Screen
     * */
    Screen();

    /**
     * Opens the sdl window, creates the renderer and creates the texture.
     * If it returns true the initialization was successful.
     * If it returns false the initialization was unsuccessful
     * */
    bool init();

    /**
     * Destroys the renderer, the texture and the screen.
     * It also delete the memory space reserved for m_buffer
     * */
    void destroyScreen();

    /**
     * Processes the events of SDL.
     * If it returns true it means that it received a QUIT event.
     * If it returns false it means that it does not received a QUIT event.
     * */
    bool processEvents();
};


#endif //FIRE_PARTICLE_SCREEN_H
