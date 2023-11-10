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

}
