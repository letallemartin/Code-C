#include <stdio.h>
#include <SDL3/SDL.h>
#include <stdbool.h>
#define WIDTH 800
#define HEIGHT 600

int main(void)
{
    bool isopen = true;
    SDL_Event event;
    SDL_FRect rect = {100.0f, 150.0f, 200.0f, 100.0f};

    if (!SDL_Init(SDL_INIT_VIDEO))
    {
        printf("Erreur lors de l'initialisation de SDL : %s\n", SDL_GetError());
        return 1;
    }

    SDL_Window *fenetre = SDL_CreateWindow("ma fenetre SDL3", WIDTH, HEIGHT, 0);
    
    
    SDL_Renderer *renderer = SDL_CreateRenderer(fenetre, NULL);

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

        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
        SDL_RenderFillRect(renderer, &rect);

        SDL_RenderPresent(renderer);

        rect.x += vitesse_x;
        rect.y += vitesse_y;

        if (rect.x + rect.w >= WIDTH) 
        {
            vitesse_x = -vitesse_x;
        }
        else if (rect.x  <= 0) 
        {
            vitesse_x = -vitesse_x;
        }

        if (rect.y + rect.h >= HEIGHT) 
        {
            vitesse_y = -vitesse_y;
        }
        else if (rect.y  <= 0) 
        {
            vitesse_y = -vitesse_y;
        }

        SDL_Delay(16);
        
    }

    SDL_DestroyWindow(fenetre);
    SDL_Quit();
    return 0;
}

//gcc rect1.c -I . -L . -lSDL3 -o rect1.exe