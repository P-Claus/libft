#include <stddef.h>

void    ft_bzero(void *s, size_t n)
{
    size_t  counter;
    
    counter = 0;
    while (counter < n)
        *(char *)(s + counter++) = 0;
}

#include <stdio.h>
#include<string.h>
int main(void)
{
    char src1[21] = "567:;2`$dfhjgazGHJGgdhsqjjG";
    char src2[21] = "567:;2`$dfhjgazGHJGgdhsqjjG";
    printf("Before the function: %s\n", src1);
    printf("-------------------------------------------------\n");
    bzero(src1 + 7, 5);
    printf("bzero: %s\n", src1);
   ft_bzero(src2 + 7, 5);
    printf("ft_bzero: %s\n", src2);
}
