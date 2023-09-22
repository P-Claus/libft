int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
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
        c = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvw\
		,?;.:/=$0123456789"[rand() % 70];
        printf("-------------------------------------------------\n");
        printf("RANDOM CHARACTER %d: %d\n", loop + 1, c);
        printf("ft_isalpha: %d\n", ft_isalpha(c));
	printf("isalpha: %d\n", isalpha(c));
        printf("-------------------------------------------------\n");
        printf("\n\n\n\n\n");
        
    }

    return 0;

}*/
