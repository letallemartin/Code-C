#include <stdio.h>
#include <stdlib.h> // Nécessaire pour rand() et srand()
#include <time.h>   // Nécessaire pour time()
#include <stdbool.h>
// #include <stdlib.h>
struct Joueur{
    char name;
    int pv;
    bool protect;
};

void action(int choix, struct Joueur *joueur, struct Joueur *cible)
{
    if (choix == 1)
    {
        if (cible->protect == false)
        {
        cible->pv -= 10;
        }
        else {
        printf("attaque de %s rate\n",joueur->name);
        }
    }
    else if (choix == 2)
    {
        joueur->protect = true;
        printf("%s\n, protege",joueur->name);
    }
}

void test_vie(int *jeu,struct Joueur *hero, struct Joueur *enemie)
{
    if (hero->pv <= 0 || enemie->pv <= 0) 
    {
        printf("game finish\n");
        *jeu = 0;
    }
}

int main(void)
{
    srand(time(NULL));
    int jeu = 1;
    struct Joueur hero = {'hero',100,false};
    struct Joueur enemie = {'mechant',80,false};
    int choix;

    while (jeu == 1)
    {
        printf("pv joueur: %d - pv enemie: %d\n", hero.pv, enemie.pv);
        printf("attaquer ou bloquer (1-2)");
        scanf("%d", &choix);
        action(choix,&hero,&enemie);
        int choix = (rand() % 2) + 1;
        action(choix,&enemie,&hero);

        test_vie(&jeu,&hero,&enemie);
    }
    return 0;
    
}
