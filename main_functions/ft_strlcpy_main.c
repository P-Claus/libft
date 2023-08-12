#include <stdio.h>
#include <string.h>

int	ft_strlcpy(char *dst, const char *src, int dstsize);

int     main(void)
{
        char src[] = "Hello friend";
        char dest[5];
        printf("%d\n", ft_strlcpy(dest, src, sizeof(dest)));
        printf("%lu\n", strlcpy(dest, src, sizeof(dest)));
}
