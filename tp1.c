#include <stdio.h>

int main(void)
{
float nombre;
printf("entrez la temp en degrés");
scanf("%f", &nombre);
printf("%.2f degres celcius font %.2f degres Fahrenheit\n",
     nombre, nombre*1.8 + 32);

return 0;
}