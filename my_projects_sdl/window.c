#include <stdio.h>
#include <SDL3/SDL.h>
#include <stdbool.h>
#define WIDTH 800
#define HEIGHT 600

int main(void)
{
    bool isopen = true;
    SDL_Event event;

    if (!SDL_Init(SDL_INIT_VIDEO))
    {
        printf("Erreur lors de l'initialisation de SDL : %s\n", SDL_GetError());
        return 1;
    }

    SDL_Window *fenetre = SDL_CreateWindow("ma fenetre SDL3", WIDTH, HEIGHT, 0);

    if (fenetre == NULL)
    {
        printf("erreur lors de la creation de la fenetre: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    float vitesse_x = 4.0f;
    float vitesse_y = 4.0f;

    while (isopen) 
    {
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_EVENT_QUIT)
            {
                isopen = false;
            }
        }
    }

    SDL_DestroyWindow(fenetre);
    SDL_Quit();
    return 0;
}

//gcc window.c -I . -L . -lSDL3 -o window.exe