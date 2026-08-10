#include <stdio.h>

int main(void)
{
float nombre;
printf("entrez la temp en degrés");
scanf("%f", &nombre);
printf("%f\n", (nombre*1.8) + 32);

return 0;
}