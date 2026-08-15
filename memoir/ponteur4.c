#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x = 42;
    int *ptr = &x;

    printf("%d\n", x); // 42 — la valeur
    printf("%p\n",(void*)ptr); // 0x7ff… — l'adresse
    printf("%d\n", *ptr); // valeur à l'adresse
    // (déréférencement)

    *ptr = 100; // Modifie x à travers le pointeur
    printf("%d\n", x); // 100

    // &x → adresse de x
    // *ptr → valeur à l'adresse contenue dans ptr
    // int *p → déclaration d'un pointeur vers int
    
return 1;
}