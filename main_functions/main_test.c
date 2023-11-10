#include "libft.h"
#include <stdio.h>

int main() {
    //ft_strlen
    printf("-------------------ft_strlen----------------------\n");
    printf("ft_strlen: %lu\n", strlen("hello world"));
    printf("\n\n\n\n\n");
    
    //ft_memset
    printf("-------------------ft_memset----------------------\n");
    char array[10];
    printf("Initial content of the array: ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", array[i]);
    }
    printf("\n");
    memset(array, 'A', sizeof(array));
    printf("Content of the array after using memset: ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", array[i]);
    }
    printf("\n\n\n\n\n");
    
    //ft_memcpy
    printf("-------------------ft_memcpy----------------------\n");
    char source[] = "Hello, World!";
    char destination[20];
    printf("Initial content of the destination array: %s\n", destination);
    memcpy(destination, source, sizeof(source));
    printf("Content of the destination array after using memcpy: %s\n", destination);
    printf("\n\n\n\n\n");

    //ft_memmove
    printf("------------------ft_memmove---------------------\n");
    char source2[] = "Hello, World!";
    char destination2[20];
    printf("Initial content of the destination array: %s\n", destination2);
    memmove(destination2, source2, sizeof(source2));
    printf("Content of the destination array after using memmove: %s\n", destination2);
    printf("\n\n\n\n\n");
    
    //strlcpy
    printf("------------------ft_strlcpy---------------------\n");
    const char *source3 = "Hello, World!";
    char destination3[20];
    size_t copied3 = strlcpy(destination3, source3, sizeof(destination3));
    printf("Content of the destination buffer: %s\n", destination3);
    printf("Number of characters copied: %zu\n", copied3);
    printf("\n\n\n\n\n");


    //ft_strlcat
    printf("------------------ft_strlcat---------------------\n");
    char destination4[20] = "Hello, ";
    const char *source4 = "World!";
    size_t destination_size4 = sizeof(destination4);

    printf("Original destination: %s\n", destination4);

    size_t result4 = strlcat(destination4, source4, destination_size4);

    printf("Concatenated string: %s\n", destination4);
    printf("Total length after concatenation: %zu\n", result4);
    printf("\n\n\n\n\n");
}
