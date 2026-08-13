#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int tabl[5];
    int taille = 5;
    // printf("*%lu\n", sizeof(int));
    int *ptr = malloc(taille * sizeof(*ptr)); //ou int *ptr = malloc(taille & sizeoff(int));
    if (ptr == NULL)
    {
        printf("error !!!\n");
        return 1;
    }
        ptr[0] = 0;
        ptr[1] = 1;
        ptr[2] = 2;
        ptr[3] = 3;
        ptr[4] = 4;
        for (int i = 0; i < 5; i++)
    {
        printf("ptr[%d] = %d\n",i , ptr[i]);
    }
    free(ptr);

    ptr = NULL;
    return 0;
}