#include "./includes/libft.h"
#include <fcntl.h>

int	main(void)
{
	int		fd;
	char	*result;

	fd = open("test.txt", O_RDONLY);
	result = get_next_line(fd);
	ft_printf("The result is: %s\n", result);
	free(result); /*
	result = get_next_line(fd);
	ft_printf("The result is: %s\n", result);
	free(result);
	result = get_next_line(fd);
	ft_printf("The result is: %s\n", result);
	free(result);
	result = get_next_line(fd);
	ft_printf("The result is: %s\n", result);
	free(result);
	result = get_next_line(fd);
	ft_printf("The result is: %s\n", result);
	free(result);
	result = get_next_line(fd);
	ft_printf("The result is: %s\n", result);
	free(result);*/
	close(fd);
}
