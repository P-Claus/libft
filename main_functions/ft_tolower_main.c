#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c);

int	main(void)
{
	char c = 'm';

	printf("%c\n", tolower(c));
	printf("%c\n", ft_tolower(c));
}
