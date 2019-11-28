#include <iostream>
#include <SDL.h>

using namespace std;

int main() {

    const int SCREEN_WIDTH = 800;
    const int SCREEN_HEIGHT = 600;

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "SDL Init failed" << std::endl;
        return 1;
    }

//  Opens the SDL Window
    SDL_Window *window = SDL_CreateWindow(
            "Particle Fire Explosion",
            SDL_WINDOWPOS_UNDEFINED,
            SDL_WINDOWPOS_UNDEFINED,
            SCREEN_WIDTH,
            SCREEN_HEIGHT,
            SDL_WINDOW_SHOWN);

//  If an error occur and the window is null print the error and return;
    if (window == nullptr) {
        SDL_Quit();
        cout << "An error courred:" << SDL_GetError() << flush;
        return 2;
    }

    bool quit = false;
    SDL_Event event;

//  game loop
    while (!quit) {
//        Update particles
//        Draw particles

//        Check for messages/events
        while (SDL_PollEvent(&event)) {
//          If the user close the windows then it breaks the game loop
            if(event.type == SDL_QUIT) {
                quit = true;
            }
        }
    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}