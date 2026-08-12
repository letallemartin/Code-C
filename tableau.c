#include <stdio.h>

// int main(void)
// {
//     float notes[3] = {14.2, 15.6, 19};
//     for (int i = 0; i < 3; i++)
//     {
//         printf("la note est : %.2f\n", notes[i]);
//     }
//     return 0;
// }


int main(void)
{
    float notes[2][3] = {{14.2, 15.6, 19},{14.2, 15.6, 19}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("la note est : %.2f\n", notes[i][j]);
        }
    }
    return 0;
}