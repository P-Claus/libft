/*
Name
memset - fill memory with a constant byte

Synopsis
#include <string.h>
void *memset(void *s, int c, size_t n);

Description
The memset() function fills the first n bytes of the memory area pointed to by s with the constant byte c.

Return Value
The memset() function returns a pointer to the memory area s.

The memset function fills a number of bytes in memory with a value that you specify. So it fills a block of memory with a value that ypu provide, replacing the values that are there (like in the example with the string)
*/

#include <stddef.h>

void    *ft_memset(void *s, int c, size_t n)
{
    size_t  counter;
    
    counter = 0;
    while (counter < n)
    {
        *(char*)(s + counter++) = c;
    }
    return (s);
}

#include <stdio.h>
#include<string.h>

int main(void)
{
    char src1[21] = "gdfhjgazGHJGgdhsqjjG";
    char src2[21] = "gdfhjgazGHJGgdhsqjjG";
    printf("Before the function (1): %s\n", src1);
    printf("Before the function (2): %s\n", src2);
    printf("-------------------------------------------------\n");
    memset(src1 + 5, 43, 3*sizeof(char));
    printf("memset: %s\n", src1);
    ft_memset(src2 + 5, '+', 3*sizeof(char));
    printf("ft_memset: %s\n", src2);
}
