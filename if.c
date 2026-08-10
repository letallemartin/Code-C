#include <stdio.h>

int main(void)
{
int nombre;
printf("%d\n", 1 == 1 && 0 == 1);
printf("%d\n", 1 == 1 || 0 == 1);
printf("%d\n", 1 == 1 || 0 == 1 && 0 == 1);

return 0;
}

// 0 = faux et 1 = vrai lors d'un if
// bool test = 5 == 2;
// printf("%d", test);
// printf("%d", 5 == 2)


// printf("entrez un nombre");
// scanf("%d", &nombre);

// if (nombre > 0) 
// {
//     printf("le nombre est positif");
// }
// else if (nombre < 0)
// {
//      printf("le nombre est negatif");
// }
// else 
// {
//     printf("le nombre est zero");
// }