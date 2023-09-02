#include <stddef.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	unsigned_c;
	size_t			counter;

	unsigned_c = (unsigned char) c;
	counter = 0;
	while (counter < n)
	{
		*(char *)(dst + counter) = *(char *)(src + counter);
		counter++;
		if (*(char *)(src + counter) == unsigned_c)
		{
			*(char *)(dst + counter) = *(char *)(src + counter);
			return (dst);
		}
	}
	return (NULL);
}
/*
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENGTH 20
#define NUMBER_OF_STRINGS 10

int main(void)
{
	srand(time(NULL));

	for (int loop = 0; loop < NUMBER_OF_STRINGS; loop++)
	{
		int string_length = rand() % MAX_STRING_LENGTH + 1;
		char src[string_length + 1];
		for (int i = 0; i < string_length; ++i)
		{
			if (rand() % 2 == 0)
				src[i] = rand() % 26 + 'a';
			else
				src[i] = rand() % 26 + 'A';
		}
		src[string_length] = '\0';
    
	char dst1[string_length + 1];
	char dst2[string_length + 1];

	for (int index = 0; index <= string_length; index++)
	{
		dst1[index] = '\0';
		dst2[index] = '\0';
	}
	printf("Random string: %s\n", src);
	printf("-------------------------------------------------\n");
	printf("Before the function (dst 1): %s\n", dst1);
	printf("Before the function (dst 2): %s\n", dst2);
	printf("-------------------------------------------------\n");
	memccpy(dst1, src, 'l', 15);
	ft_memccpy(dst2, src, 'l', 15);
	printf("After memccpy (dst 1): %s\n", dst1);
	printf("After ft_memccpy (dst 2): %s\n", dst2);
	printf("-------------------------------------------------\n");
	printf("\n\n\n\n\n");
    }
}*/
