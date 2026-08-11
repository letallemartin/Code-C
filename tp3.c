#include <stdio.h>

int main(void)
{
    int nb_cycle;
    int terme1 = 0;
    int terme2 = 1;
    int somme = 0;

    printf("entrez le nb de cycle: ");
    scanf("%d", &nb_cycle);

    for (int i = 0; i < nb_cycle; i++)
        {
            somme = terme2 + terme1;
            printf("%d + %d = %d\n",terme1, terme2, somme);
            terme1 = terme2;
            terme2 = somme;
        }

    printf("la somme est de %d\n", somme);

    return 0;
}