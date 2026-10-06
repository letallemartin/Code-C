#include <unistd.h>
#include <stdio.h>
#include <math.h>
#define TRUE 1
#define FALSE 0

int	amstrong(int	nb)
{
	int	T;
	int	i;
	int	res;

	T = 1;
	i = 1;
	res = 0;
	while (nb / T >= 10)
	{
		T = T * 10;
		i++;
	}
	while (i != 0)
	{
		res = res + pow((nb / T), i);
		nb = nb / T;
		T = T / 10;
		i--;
	}
	if (res == nb)
		return (TRUE);
	return (FALSE);
}
int	main(void)
{
	int	a = amstrong(156);
	printf("%d", a);
	return (0);
}