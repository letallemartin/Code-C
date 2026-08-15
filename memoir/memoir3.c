#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
typedef struct{
char nom[50] ;
int age;
}Personne;
Personne alice = {"marie",50} ;
Personne bob = {"marie",40} ;

printf("%s\n", alice.nom, alice.age);

Personne *ptr = &alice;
printf("%s\n", ptr -> nom);
ptr -> age = 26;

Personne *p = malloc(sizeof(Personne));
strcpy(p->nom, "charlie");
p -> age = 28;

printf("nom : %s age : %d\n", ptr -> nom, ptr -> age);
printf("nom : %s age : %d\n", p -> nom, p -> age);
free(p);
}