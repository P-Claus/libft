#include <stddef.h>
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

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_STRING_LENGTH 20
#define NUM_STRINGS 5

int main() {
    // Set the seed for random number generation
    srand(time(NULL));

    for (int loop = 0; loop < NUM_STRINGS; ++loop) {
        // Generate a random length for the string (between 1 and MAX_STRING_LENGTH)
        int stringLength = rand() % MAX_STRING_LENGTH + 1;

        // Define a string to store the random string
        char randomString[stringLength + 1]; // +1 for the null terminator

        // Generate and store random lowercase letters
        for (int i = 0; i < stringLength; ++i) {
            if (rand() % 2 == 0) {
                randomString[i] = rand() % 26 + 'a'; // lowercase 'a' to 'z'
            } else {
                randomString[i] = rand() % 26 + 'A'; // uppercase 'A' to 'Z'
            }
        }

        // Add the null terminator at the end of the string
        randomString[stringLength] = '\0';

        // Print the random string
        printf("-------------------------------------------------\n");
        printf("RANDOM STRING %d: %s\n", loop + 1, randomString);
        printf("The length of the random string is: %zu\n", ft_strlen(randomString));
        printf("-------------------------------------------------\n");
        printf("\n\n\n\n\n");
    }

    return 0;
}
