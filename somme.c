#include <stdio.h>

int main(void)
{
int somme = 0;
int nombre;
printf("entrez un nombre: ");
scanf("%d", &nombre);
for (int i = 0; i <= nombre; i++)
{
somme += i;
}
printf("la somme de 1 a %d est %d\n", nombre, somme);
return 0;
}