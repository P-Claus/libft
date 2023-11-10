#include "libft.h"
#include <stdio.h>

int main() {
    //ft_strlen
    printf("-------------------ft_strlen----------------------\n");
    printf("ft_strlen: %lu\n", ft_strlen("hello world"));
    printf("\n\n\n\n\n");
    
    //ft_memset
    printf("-------------------ft_memset----------------------\n");
    char array[10];
    printf("Initial content of the array: ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", array[i]);
    }
    printf("\n");
    ft_memset(array, 'A', sizeof(array));
    printf("Content of the array after using memset: ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", array[i]);
    }
    printf("\n\n\n\n\n");
    
    //ft_memcpy
    printf("-------------------ft_memcpy----------------------\n");
    char source1[] = "Hello, World!";
    char destination1[20];
    printf("Initial content of the destination array: %s\n", destination1);
    ft_memcpy(destination1, source1, sizeof(source1));
    printf("Content of the destination array after using memcpy: %s\n", destination1);
    printf("\n\n\n\n\n");

    //ft_memmove
    printf("------------------ft_memmove---------------------\n");
    char source2[] = "Hello, World!";
    char destination2[20];
    printf("Initial content of the destination array: %s\n", destination2);
    ft_memmove(destination2, source2, sizeof(source2));
    printf("Content of the destination array after using memmove: %s\n", destination2);
    printf("\n\n\n\n\n");
    
    //strlcpy
    printf("------------------ft_strlcpy---------------------\n");
    const char *source3 = "Hello, World!";
    char destination3[20];
    size_t copied3 = ft_strlcpy(destination3, source3, sizeof(destination3));
    printf("Content of the destination buffer: %s\n", destination3);
    printf("Number of characters copied: %zu\n", copied3);
    printf("\n\n\n\n\n");


    //ft_strlcat
    printf("------------------ft_strlcat---------------------\n");
    char destination4[20] = "Hello, ";
    const char *source4 = "World!";
    size_t destination_size4 = sizeof(destination4);
    printf("Original destination: %s\n", destination4);
    size_t result4 = ft_strlcat(destination4, source4, destination_size4);
    printf("Concatenated string: %s\n", destination4);
    printf("Total length after concatenation: %zu\n", result4);
    printf("\n\n\n\n\n");


    	//ft_strchr
    	printf("------------------ft_strchr---------------------\n");
   	char *str5 = "Hello world how is the weather today";
	printf("The result of ft_strchr is: %s\n", ft_strchr(str5, 'a'));
    	printf("\n\n\n\n\n");
	
	//ft_strrchr
    	printf("------------------ft_strrchr---------------------\n");
   	char *str6 = "Hello world how is the weather today";
	printf("The result of ft_strrchr is: %s\n", ft_strrchr(str6, 'a'));
    	printf("\n\n\n\n\n");

	//ft_strncmp
    	printf("------------------ft_strncmp---------------------\n");
 	char *s7 = "tests";
	char *s8 = "testss";
	printf("The value of ft_strncmp is: %d\n", ft_strncmp(s7, s8, 7));  	
	printf("\n\n\n\n\n");

	//ft_memchr
    	printf("------------------ft_memchr---------------------\n");
	char	*s9 = "Hello my friend how are you doing?";
	printf("The value of ft_memchr is: %p\n", ft_memchr(s9, 'h', 20));
	printf("\n\n\n\n\n");

	//ft_memcmp
    	printf("------------------ft_memcmp---------------------\n");
	char *s10 = "hahaha";
	char *s11 = "jjhahaha";
	printf("The result of ft_memcmp is: %d\n", ft_memcmp(s10, s11, 25));
	printf("\n\n\n\n\n");

	//ft_strnstr
    	printf("------------------ft_strnstr---------------------\n");
	const char *haystack = "This is a sample string for testing.";
    	const char *needle = "sample";
    	size_t len = 20; // The maximum number of characters to search in haystack
	char *result12 = ft_strnstr(haystack, needle, len);

    	if (result12) {
        	printf("Needle found: %s\n", result12);
    	} else {
        	printf("Needle not found.\n");
    	}
	printf("\n\n\n\n\n");

	//ft_strdup
    	printf("------------------ft_strdup---------------------\n");
	char *src13 = "hello everybody";
	printf("Using ft_strdup:  %s", ft_strdup(src13));
	printf("\n\n\n\n\n");

	//ft_bzero
    	printf("------------------ft_bzero---------------------\n");
	char src14[30] = "567:;2`$dfhjgazGHJGgdhsqjjG";
    	printf("Before the function: %s\n", src14);
   	ft_bzero(src14 + 7, 8);
    	printf("ft_bzero: %s\n", src14);
	printf("\n\n\n\n\n");

	//ft_isalpha
    	printf("------------------ft_isalpha---------------------\n");
	char test_char = 'A';  // You can change this character to test different values
    	if (ft_isalpha(test_char)) {
        	printf("%c is an alphabetic character.\n", test_char);
    	} else {
        	printf("%c is not an alphabetic character.\n", test_char);
    	}
	printf("\n\n\n\n\n");


	//ft_isdigit
    	printf("------------------ft_isdigit---------------------\n");
	char test_char2 = '5';  // you can change this character to test different values

    if (ft_isdigit(test_char2)) {
        printf("%c is a digit.\n", test_char2);
    } else {
        printf("%c is not a digit.\n", test_char2);
    }
	printf("\n\n\n\n\n");

	//ft_isalnum
    	printf("------------------ft_isalnum---------------------\n");
	char test_char3 = 'A';  // You can change this character to test different values

    if (ft_isalnum(test_char3)) {
        printf("%c is an alphanumeric character.\n", test_char3);
    } else {
        printf("%c is not an alphanumeric character.\n", test_char3);
    }
	printf("\n\n\n\n\n");

    	//ft_isascii
    	printf("------------------ft_isascii---------------------\n");
	    char test_char4 = 'A';  // You can change this character to test different values
	if (ft_isascii(test_char4)) {
        printf("%c is a 7-bit ASCII character.\n", test_char4);
    } else {
        printf("%c is not a 7-bit ASCII character.\n", test_char4);
    }
	printf("\n\n\n\n\n");

    	//ft_isprint
    	printf("------------------ft_isprint---------------------\n");
	char test_char5 = 'A';  // You can change this character to test different values

    if (ft_isprint(test_char5)) {
        printf("%c is a printable character.\n", test_char5);
    } else {
        printf("%c is not a printable character.\n", test_char5);
    }
	printf("\n\n\n\n\n");

	//ft_toupper
    	printf("------------------ft_toupper---------------------\n");
	char lowercase_char = 'a';  // You can change this character to test different values

    char uppercase_char = ft_toupper(lowercase_char);

    printf("Original character: %c\n", lowercase_char);
    printf("Uppercase character: %c\n", uppercase_char);

	printf("\n\n\n\n\n");

	//ft_tolower
    	printf("------------------ft_tolower---------------------\n");
	char lowercase_char1 = 'A';  // You can change this character to test different values

    char uppercase_char1 = ft_tolower(lowercase_char1);

    printf("Original character: %c\n", lowercase_char1);
    printf("Uppercase character: %c\n", uppercase_char1);

	printf("\n\n\n\n\n");

	//ft_atoi
    	printf("------------------ft_atoi---------------------\n");
	char str20[] = "12345";  // You can change this string to test different values

    int converted_int20 = ft_atoi(str20);

    printf("Original string: %s\n", str20);
    printf("Converted integer: %d\n", converted_int20);
	printf("\n\n\n\n\n");

	//ft_calloc
    	printf("------------------ft_calloc---------------------\n");
	int *arr21;
    int size21 = 5;  // You can change this size to test with a different number of elements
    arr21 = (int *)ft_calloc(size21, sizeof(int));
    printf("Allocated array elements:\n");
    for (int i = 0; i < size21; i++) {
        printf("%d ", arr21[i]);
    }
    printf("\n");
    free(arr21);
	printf("\n\n\n\n\n");

	//ft_substr
    	printf("------------------ft_substr---------------------\n");
	const char *original22 = "Hello, World!";
    int start22 = 7;
    int length22 = 5;

    // Get a substring
    char *sub22 = ft_substr(original22, start22, length22);

    if (sub22 != NULL) {
        printf("Original: %s\n", original22);
        printf("Substring: %s\n", sub22);

        // Don't forget to free the allocated memory
        free(sub22);
    } else {
        fprintf(stderr, "Substring extraction failed.\n");
    }
	printf("\n\n\n\n\n");

	//ft_strjoin
    	printf("------------------ft_strjoin---------------------\n");
	const char *str23 = "Hello, ";
    const char *str24 = "World!";

    // Join two strings
    char *joined_str23 = ft_strjoin(str23, str24);

    if (joined_str23 != NULL) {
        printf("String 1: %s\n", str23);
        printf("String 2: %s\n", str24);
        printf("Joined String: %s\n", joined_str23);

        // Don't forget to free the allocated memory
        free(joined_str23);
    } else {
        fprintf(stderr, "String joining failed.\n");
    }
	printf("\n\n\n\n\n");

	//ft_strtrim
    	printf("------------------ft_strtrim---------------------\n");
	char	*test40 = "hhaacutsaahh";
	char	*trimmed_s40 = ft_strtrim(test40, "hh");
	printf("The trimmed string is: %s\n", trimmed_s40);
	free(trimmed_s40);
	printf("\n\n\n\n\n");

	//ft_split
    	printf("------------------ft_split---------------------\n");
	printf("\n\n\n\n\n");

	//ft_itoa
    	printf("------------------ft_itoa---------------------\n");
	printf("\n\n\n\n\n");

	//ft_strmapi
    	printf("------------------ft_strmapi---------------------\n");
	printf("\n\n\n\n\n");

	//ft_striteri
    	printf("------------------ft_striteri---------------------\n");
	printf("\n\n\n\n\n");

	//_fd functions
    	printf("------------------_fd functions---------------------\n");
	int file_descriptor = 1; // 1 represents standard output (stdout)

    // Test putchar_fd
    ft_putchar_fd('A', file_descriptor);

    // Test putstr_fd
    ft_putstr_fd("Hello, ", file_descriptor);

    // Test putendl_fd
    ft_putendl_fd("World!", file_descriptor);

    // Test putnbr_fd
    int number28 = 42;
    ft_putstr_fd("The answer is: ", file_descriptor);
    ft_putnbr_fd(number28, file_descriptor);
    ft_putchar_fd('\n', file_descriptor);
	printf("\n\n\n\n\n");

	//ft_putnbr_fd
    	printf("------------------ft_putnbr_fd---------------------\n");
	printf("\n\n\n\n\n");


	//ft_lstnew_bonus
	printf("------------------ft_lstnew---------------------\n");
	int value1 = 42;
    	int value2 = 19;
	
    t_list *node1 = ft_lstnew(&value1);
    t_list *node2 = ft_lstnew(&value2);

    // Check if the nodes were created successfully and print their values
    if (node1) {
        printf("Node 1 content: %d\n", *(int *)node1->content);
        free(node1); // Don't forget to free the memory when done
    } else {
        printf("Failed to create Node 1\n");
    }

    if (node2) {
        printf("Node 2 content: %d\n", *(int *)node2->content);
        free(node2);
    } else {
        printf("Failed to create Node 2\n");
    }	
	printf("\n\n\n\n\n");


	//ft_lst_size
    	printf("------------------ft_lstsize---------------------\n");
	t_list *new1, *new2, *new3;
	new1 = ft_lstnew((void *)4);
	new2 = ft_lstnew((void *)1);
	new3 = ft_lstnew((void *)9);
	new1->next = new2;
	new2->next = new3;
	printf("First node: %p\n", (void *)new1->content);
	printf("Second node: %p\n", (void *)new2->content);
	printf("Third node: %p\n", (void *)new3->content);
	int size = ft_lstsize(new1);
	printf("The size is: %d\n", size);
	free(new1);
	free(new2);
	free(new3);
	printf("\n\n\n\n\n");




}

