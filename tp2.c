#include <stdio.h>

int main(void)
{
int annee;
printf("entrez une annee");
scanf("%d", &annee);
if (annee % 4 == 0 && annee % 100 != 0 || annee % 400 == 0)
{
printf("%d est une annee bissextile\n",annee);
}
else  
{
printf("%d est une anne non bissextile\n",annee);
}

return 0;
}
