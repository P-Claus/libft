#include <stdio.h>
#include <string.h>

int     main(void)
{
        char src[] = "Hello friend";
        char dest[5];
        printf("%zu\n", ft_strlcpy(dest, src, sizeof(dest)));
        printf("%zu\n", strlcpy(dest, src, sizeof(dest)));
}
