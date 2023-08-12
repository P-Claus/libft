#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c);

int     main(void)
{
        int     digit = '/';
        printf("%d\n", isdigit(digit));
        printf("%d\n", ft_isdigit(digit));
}
