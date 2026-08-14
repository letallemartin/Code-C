#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int taille;
    printf("combien d'entier voulez vous ajouter :\n");
    scanf("%d", &taille);
    int *tab = malloc(taille* sizeof(*tab));
    if (tab == NULL)
    {
        printf("error !!! \n");
        return 1;
    }
    for (int i = 0; i < taille; i++)
    {
        printf("entrez un entier : \n");
        scanf("%d", &tab[i]);
    }
    printf("votre tableau : \n");
    for (int i = 0; i < taille; i++)
    {
        printf("tab [%d] = %d\n", i , tab[i]);
    }
    free(tab);
    tab = NULL;
    return 0;
}