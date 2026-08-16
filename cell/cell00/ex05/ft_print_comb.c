/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_print_comb.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*                                                     #+#    #+#             */
/*                                                    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void ft_print_comb(void)
{
    int a;
    int b;
    int c;
    char tab[3];
    a = 0;
    while (a < 8)
    {
        b = a + 1;
        while (b < 9)
        {
            c = b + 1;
            while (c < 10)
            {
                if (a < b && b < c)
                {
                    tab[0] = a + '0';
                    tab[1] = b + '0';
                    tab[2] = c + '0';
                    write(STDOUT_FILENO, tab , 3);
                    if (a != 7)
                    {
                        write(STDOUT_FILENO, ", " , 2);
                    }
                }
                c++;
            }
            b++;
        }
        a++;
    }
}

// void main(void) {
//     ft_print_comb();
// }