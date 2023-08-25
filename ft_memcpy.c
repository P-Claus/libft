#include <stddef.h>

void    ft_memcpy(void *dest, void *src, size_t n)
{
    while ( n-- > 0)
        *(char *)(dest + n) = *(char *)(src + n);

}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENGTH 10
#define NUMBER_OF_STRINGS 5

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
    printf("Random string: %s\n", src);
    printf("-------------------------------------------------\n");
    printf("Before the function (dst 1): %s\n", dst1);
    printf("Before the function (dst 2): %s\n", dst2);
    printf("-------------------------------------------------\n");
    memcpy(dst1, src, 10);
    ft_memcpy(dst2, src, 10);
    printf("After memcpy (dst 1): %s\n", dst1);
    printf("After ft_memcpy (dst 2): %s\n", dst2);
    printf("-------------------------------------------------\n");
    printf("\n\n\n\n\n");

    
    }
}

