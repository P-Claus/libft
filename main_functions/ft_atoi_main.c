#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char	*str = "	  -+8765hjk8";
	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));
}
