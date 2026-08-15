#include <stdio.h>
#include <SDL3/SDL.h>
#include <stdbool.h>
#define WIDTH 800
#define HEIGHT 600

int main(void)
{
    bool isopen = true;
    SDL_Event event;
    SDL_FRect rect = {400.0f, 500.0f, 60.0f, 60.0f};

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

    float vitesse_x = 7.0f;
    float vitesse_y = 7.0f;
    bool key[SDL_SCANCODE_COUNT] = {0};

    while (isopen) 
    {
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_EVENT_QUIT)
            {
                isopen = false;
            }
            else if (event.type == SDL_EVENT_KEY_DOWN)
            {
                key[event.key.scancode] = true;
            }
            else if (event.type == SDL_EVENT_KEY_UP)
            {
                key[event.key.scancode] = false;
            }
            
        }

        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
        SDL_RenderFillRect(renderer, &rect);

        SDL_RenderPresent(renderer);

    
        
        if (key[SDL_SCANCODE_D])
        {
            rect.x += vitesse_x;
        }

        if (key[SDL_SCANCODE_Q])
        {
           rect.x -= vitesse_x;
        }
        if (rect.x + rect.w >= WIDTH) 
        {
            rect.x = WIDTH - rect.w;
        }
        else if (rect.x  <= 0) 
        {
            rect.x = 0;
        }
        SDL_Delay(16);
    }

    SDL_DestroyWindow(fenetre);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    return 0;
}

//gcc platform.c -I . -L . -lSDL3 -o platform.exe