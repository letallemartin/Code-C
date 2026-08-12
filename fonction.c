#include <stdio.h>

int addition(int a, int b)
{
return a + b;
}


int main(void)
{
int somme = addition(3, 5);
printf("la somme de %d et %d est de %d\n", 3, 5, somme);
return 0;
}