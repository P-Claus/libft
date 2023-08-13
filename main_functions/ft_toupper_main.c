#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c);

int	main(void)
{
	char c = ':';

	printf("%c\n", toupper(c));
	printf("%c\n", ft_toupper(c));
}
