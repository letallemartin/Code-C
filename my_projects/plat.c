#include <stdio.h>
#include <SDL3/SDL.h>
#include <stdbool.h>
#define WIDTH 800
#define HEIGHT 600

int main(void)
{
    bool isopen = true;
    SDL_Event event;
    SDL_FRect rect = {50.0f, 500.0f, 700.0f, 50.0f};

    SDL_FRect player = {350.0f, 475.0f, 20.0f, 20.0f};

    if (!SDL_Init(SDL_INIT_VIDEO))
    {
        printf("Erreur lors de l'initialisation de SDL : %s\n", SDL_GetError());
        return 1;
    }

    SDL_Window *fenetre = SDL_CreateWindow("ma fenetre SDL3", WIDTH, HEIGHT, 0);
    if (fenetre == NULL)
    {
        printf("Erreur lors de la creation de la fenetre : %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    SDL_Renderer *renderer = SDL_CreateRenderer(fenetre, NULL);
    if (renderer == NULL)
    {
        printf("Erreur lors de la creation du renderer : %s\n", SDL_GetError());
        SDL_DestroyWindow(fenetre);
        SDL_Quit();
        return 1;
    }

    float vitesse_x = 4.0f;
    float vitesse_y = 4.0f;

    char key[SDLK_AT] = {0}; // tableau qui vérifie l'appui UP ou non DOWN d'une touche, ligne 46 à 52

    while (isopen)
    {
        while (SDL_PollEvent(&event))
        {
            switch (event.type)
            {
                case SDL_EVENT_QUIT:
                    isopen = false;
                    break;

                case SDL_EVENT_KEY_DOWN:
                    key[event.key.scancode] = true;
                    break;

                case SDL_EVENT_KEY_UP:
                    key[event.key.scancode] = false;
                    break;
            }
        }

        if (key[SDL_SCANCODE_D])
        {
            player.x += vitesse_x;
        }

        if (key[SDL_SCANCODE_Q])
        {
            player.x -= vitesse_x;
        }

        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
        SDL_RenderFillRect(renderer, &rect);

        SDL_SetRenderDrawColor(renderer, 0, 0, 210, 255);
        SDL_RenderFillRect(renderer, &player);

        SDL_RenderPresent(renderer);

        SDL_Delay(16);
    }

    SDL_DestroyWindow(fenetre);
    SDL_Quit();
    return 0;
}

//gcc rect1.c -I . -L . -lSDL3 -o rect1.exe