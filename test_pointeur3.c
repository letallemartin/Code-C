#include <stdio.h>

int echanger(int *a, int *b)
{
int temp = *b;
*b = *a;
*a = temp;

return 0;
}

int main(void)
{
    int a = 5;
    int b = 6;

    printf("a = %d et b = %d\n", a, b);
    echanger(&a,&b);
    printf("a = %d et b = %d\n", a, b);

return 0;
}