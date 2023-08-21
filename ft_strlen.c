size_t ft_strlen(const char *s)
{
    size_t  len;
    
    len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    return (len);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_STRING_LENGTH 20
#define NUM_STRINGS 5

int main()
{
    srand(time(NULL));

    for (int loop = 0; loop < NUM_STRINGS; ++loop)
    {
        int stringLength = rand() % MAX_STRING_LENGTH + 1; //create random string between 1 and max length
        char randomString[stringLength + 1];
        for (int i = 0; i < stringLength; ++i) //start generating letters
        {
            if (rand() % 2 == 0)
                randomString[i] = rand() % 26 + 'a';
            else
                randomString[i] = rand() % 26 + 'A'; // uppercase 'A' to 'Z'
        }
        randomString[stringLength] = '\0';
        printf("-------------------------------------------------\n");
        printf("RANDOM STRING %d: %s\n", loop + 1, randomString);
        printf("ft_strlen: %zu\n", ft_strlen(randomString));
        printf("strlen: %zu\n", strlen(randomString);
        printf("-------------------------------------------------\n");
        printf("\n\n\n\n\n");
    }

    return 0;
}
*/
