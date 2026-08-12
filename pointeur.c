#include <stdio.h>

void add_one(int *number)
{
    printf("adresse number : %p\n" , number);
    *number = *number + 1;
}

int main(void)
{
    
    int value = 42;
    int *ptr = &value;
    printf("value : %d\n",value); //valuer de value
    printf("adresse value : %p\n", &value); //adresse de value

    printf("ptr : %p\n",ptr);  //adresse de ptr = adresse value
    printf("valeur via pointeur %d\n:",*ptr);
    return 0;
}

// int value = 42;

//     printf("value : %d\n",value);
//     printf("adresse value : %p\n", &value);

//     add_one(&value);

//     printf("value : %d\n", value);