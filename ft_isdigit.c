int	ft_isdigit(int	c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	digit = '/';
	printf("%d\n", isdigit(digit));
	printf("%d\n", ft_isdigit(digit));
}*/
