#include <stdio.h>

struct Contact
{
char prenom[50];
char num[12];
int age;
};

int main(void)
{
struct Contact mes_contacts[3];

for (int i = 0; i < 2; i++)
{
printf("entrez prenom : ");
scanf("%s", mes_contacts[i].prenom);

printf("entrez num : ");
scanf("%s", mes_contacts[i].num);

printf("entrez age : ");
scanf("%d", &mes_contacts[i].age);
}

for (int i = 0; i < 2; i++)
{
printf("prenom : %s\n", mes_contacts[i].prenom);
printf("num : %s\n", mes_contacts[i].num);
printf("age : %d\n", mes_contacts[i].age);
}

return 0;
}

// dans un scanf pour des chaine de caracter %s "&" n'est pas necessaire