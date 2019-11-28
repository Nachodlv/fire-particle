//
// Created by ignacio on 28/11/19.
//

#include "Screen.h"

using namespace std;


bool Screen::init() {

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        return false;
    }

    m_window = nullptr;

//  Opens the SDL Window
    m_window = SDL_CreateWindow(
            "Particle Fire Explosion",
            SDL_WINDOWPOS_UNDEFINED,
            SDL_WINDOWPOS_UNDEFINED,
            SCREEN_WIDTH,
            SCREEN_HEIGHT,
            SDL_WINDOW_SHOWN);

//  If an error occur and the window is null print the error and return;
    if (m_window == nullptr) {
        SDL_Quit();
        return false;
    }

    m_renderer = SDL_CreateRenderer(
            m_window,
            -1,
            SDL_RENDERER_PRESENTVSYNC);

    if (m_renderer == nullptr) {
        SDL_DestroyWindow(m_window);
        SDL_Quit();
        return false;
    }

    m_texture = SDL_CreateTexture(
            m_renderer,
            SDL_PIXELFORMAT_RGBA8888,
            SDL_TEXTUREACCESS_STATIC,
            SCREEN_WIDTH, SCREEN_HEIGHT);

    if (m_texture == nullptr) {
        SDL_DestroyRenderer(m_renderer);
        SDL_DestroyWindow(m_window);
        SDL_Quit();
    }

//    Maybe should I check if the memory could be allocated
    m_buffer1 = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];


    return true;
}

void Screen::destroyScreen() {
    SDL_DestroyRenderer(m_renderer);
    SDL_DestroyTexture(m_texture);
    SDL_DestroyWindow(m_window);
    SDL_Quit();

    delete[] m_buffer1;
}

bool Screen::Update() {

    memset(m_buffer1, 0xFF, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));

    SDL_UpdateTexture(m_texture, nullptr, m_buffer1, SCREEN_WIDTH * sizeof(Uint32));
    SDL_RenderClear(m_renderer);
    SDL_RenderCopy(m_renderer, m_texture, nullptr, nullptr);
    SDL_RenderPresent(m_renderer);

//        Check for messages/events
    while (SDL_PollEvent(&event)) {
//          If the user close the windows then it breaks the game loop
        if (event.type == SDL_QUIT) {
            return true;
        }
    }
    return false;
}
