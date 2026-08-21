#include <stdio.h>
int	ft_atoi(char *str)
{
	int	i;
	int nbr;
	i = 0;
	nbr = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 47 && str[i] < 58)
		{
			nbr = nbr * 10 + (str[i] - '0');
		}
		else if (str[i] < 48 || str[i] > 57)
		{
			printf("%d", nbr);
			return (nbr);
		}
		i++;
	}
	printf("%d", nbr);
	return (nbr);
}

int main(void)
{
	char str[10] = "55he542";
	ft_atoi(str);
	return (0);
}
