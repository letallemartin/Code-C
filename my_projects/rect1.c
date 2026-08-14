#include <stdio.h>
#include <SDL3/SDL.h>
#include <stdbool.h>

int main(void)
{
    int width = 800;
    int height = 600;
    bool isopen = true;
    SDL_Event event;

    if (!SDL_Init(SDL_INIT_VIDEO))
    {
        printf("Erreur lors de l'initialisation de SDL : %s\n", SDL_GetError());
        return 1;
    }
    SDL_Window *fenetre = SDL_CreateWindow("ma fenetre SDL3", width, height, 0);

    if (fenetre == NULL)
    {
        printf("erreur lors de la creation de la fenetre: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }
    while (isopen == true)
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
//gcc rect1.c -I . -L . -lSDL3 -o rect1.exe