#include <stdio.h>
struct Student {
    char prenom[50];
    int age;
    float notes[10];
};

int main(void)
{
struct Student s1;
printf("entrez un prenom : ");
scanf("%s", s1.prenom);

printf("entrez votre age : ");
scanf("%d", &s1.age);

printf("Prenom : %s\n",s1.prenom);
printf(" Age : %d\n",s1.age);


return 0;
}