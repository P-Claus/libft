#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c);

int	main(void)
{
	int	c = 137;

	printf("%d\n", isprint(c));
	printf("%d\n", ft_isprint(c));
}
