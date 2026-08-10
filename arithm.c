#include <stdio.h>
int main(void)
{
int a = 10, b = 5;

int somme = a + b;
int difference = a - b;
int produit = a * b;
float quotient = a / b;

int modulo = 5 % 3;

printf("%d\n",somme);
printf("%d\n",difference);
printf("%d\n",produit);
printf("%f\n",quotient);
printf("%d\n",quotient);

return 0;
}