#include <stdio.h>
int	ft_atoi(char *str)
{
	int	i;
	int nbr;
	int signe;
	i = 0;
	nbr = 0;
	signe = 1;
	while (str[i] != '\0')
	{
		if (str[i] > 47 && str[i] < 58)
		{
			nbr = nbr * 10 + (str[i] - '0');
		}
		else if (str[i] == 45)
		{
			signe = -signe;
		}
		else if (str[i] < 48 || str[i] > 57 && str[i] != 45)
		{
			printf("%d", nbr);
			return (nbr*signe);
		}
		i++;
	}
	printf("%d", nbr);
	return (nbr*signe);
}

int main(void)
{
	char str[10] = "-22he542";
	ft_atoi(str);
	return (0);
}
