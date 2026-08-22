
int	ft_atoi(char *str)
{
	int	i;
	int nbr;
	int signe;
	i = 0;
	nbr = 0;
	signe = 1;
		while (str[i] >= 9 && str[i] <= 13 || str[i] == ' ')
		{
			i++;
		}
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
			{
				signe = -signe;
			}
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			nbr = nbr*10 + (str[i] - '0');
			i++;
		}
	return (nbr*signe);
}

// int main(void)
// {
// 	char str[10] = " ---2u2";
// 	ft_atoi(str);
// 	return (0);
// }
