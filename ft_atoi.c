int	ft_atoi(const char *str)
{
	int	iter;
	int	sign;
	int	result;

	iter = 0;
	sign = 0;
	result = 0;
	while ((str[iter] == 32) || (str[iter] >= 9 && str[iter] <= 13))
		iter++;
	if (str[iter] == 45)
	{
		sign = -1;
		iter++;
	}
	else if (str[iter] == 43)
		iter++;
	while (str[iter] != '\0' && str[iter] >= 48 && str[iter] <= 58)
	{
		result *= 10;
		result += str[iter] - '0';
		iter++;
	}
	return (result * sign);
}
