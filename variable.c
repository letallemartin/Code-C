#include <stdio.h>
int main(void)
{
int entier = 10;
float flottant = 3.14;
char caractere = 'A';

printf("%d\n", entier);
printf("%.2f\n", flottant); //.2 sert uniquement a indiquer 2 chiffre aprés la virgule
printf("%c\n", caractere);
printf("Entier : %d, Flottant : %.2f, Char : %c\n"
    ,entier, flottant, caractere);
return 0;
}