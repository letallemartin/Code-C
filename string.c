#include <stdio.h>
#include <string.h>

int main(void)
{
char prenom[32];

printf("entrez votre prenom : ");
scanf("%s", prenom); 
printf("bonjour %s\n", prenom);

printf("la longueur de votre prenom est de %lu\n ", strlen(prenom));
return 0;

}
//string scanf pas besoin "&"