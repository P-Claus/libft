#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str);

int	main(void)
{
	char	*str = "	  -+8765hjk8";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));
}
