#include <stdio.h>

int main(void)
{
int a = 10;
int *p = &a;
printf("l'adresse de p est : %p et sa valeur est : %d\n",p,*p);
int **pp = &p;
printf("%d\n", **pp);
return 0;
}
//double pointeur