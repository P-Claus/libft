#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c);

int     main(void)
{
        int     character = 'N';

        printf("%d\n", isalpha(character));
        printf("%d\n", ft_isalpha(character));
}
