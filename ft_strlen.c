int	ft_strlen(char *str)
{
	int	iter;

	iter = 0;
	while (str[iter] != '\0')
		iter++;
	return (iter);
}
/*
#include <stdio.h>
#include <string.h>


int	main(void)
{
	char str[] = "hello world";
	printf("%d\n", ft_strlen(str));
	printf("%lu\n", strlen(str));
}*/
