#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int taille;

char *ptr = malloc(taille * sizeof(*ptr));

if (ptr = NULL)
{
    printf("error !!!\n");
    return 1;
}
free(ptr);
ptr = NULL;
return 0;
}