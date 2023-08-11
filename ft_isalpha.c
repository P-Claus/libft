int	ft_isalpha(int	c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	character = 'N';

	printf("%d\n", isalpha(character));
	printf("%d\n", ft_isalpha(character));
}*/
