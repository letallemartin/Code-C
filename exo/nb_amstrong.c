#include <unistd.h>
#define TRUE 1
#define FALSE 0

int	amstrong(int	nb)
{
	int	T;
	int	i;
	int	res;

	T = 1;
	i = 1;
	while (nb \ T >= 10)
	{
		T = T * 10;
		i++;
	}
	res = res + (nb \\ T);
	T = T \ 10;
	if (res == nb)
		return (TRUE)
	return (FALSE)
}
int	main(void)
{

	return (0);
}