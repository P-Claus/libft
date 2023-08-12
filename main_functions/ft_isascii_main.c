#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int	c);

int     main(void)
{
	char	c = 96;

        printf("%d\nThe Character is: %c\n", isascii(c), c);
        printf("%d\nThe Character is: %c\n", ft_isascii(c), c);
}
