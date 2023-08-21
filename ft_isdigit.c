int	ft_isdigit(int	c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#define MAX_STRING_LENGTH 1
#define NUM_STRINGS 20

int main()
{
    srand(time(NULL));
    char    c;
    for (int loop = 0; loop < NUM_STRINGS; ++loop)
    {
        c = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvw,?;.:/=$0123456789"[rand() % 70];
        printf("-------------------------------------------------\n");
        printf("RANDOM CHARACTER %d: %d\n", loop + 1, c);    
        printf("ft_isdigit: %d\n", ft_isdigit(c));
	printf("isdigit: %d\n", isdigit(c));
        printf("-------------------------------------------------\n");
        printf("\n\n\n\n\n");
        
    }

    return 0;
}
