int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c = 45;

	printf("%d\n", isprint(c));
	printf("%d\n", ft_isprint(c));
	
	return (0);
}
