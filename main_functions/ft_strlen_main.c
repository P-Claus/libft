#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int     main(void)
{
        char str[] = "hello world";
        printf("%d\n", ft_strlen(str));
        printf("%lu\n", strlen(str));
}
