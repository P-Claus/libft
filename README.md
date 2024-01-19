# Libft (Static Library in C)
![libft header](https://github.com/P-Claus/libft/blob/main/subject/LIBFT-header.png)

<p align='center'>
	<a href='https://profile.intra.42.fr/users/pclaus' target="_blank"><img alt="Campus 19 Profile" src="https://img.shields.io/badge/Campus%2019%20Profile-071C13" ></a>
<img alt="status" src="https://img.shields.io/badge/status-done-success?color=071C13&style=flat-square"/>
<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/P-Claus/libft?color=071C13" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/P-Claus/libft?color=071C13" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/P-Claus/libft?color=071C13" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/P-Claus/libft?color=071C13" />

	
</p>


## Overview

In this introductory project, I am excited to create my own personal static library in the C programming language. This project marks the beginning of my journey at campus19 and provides an opportunity to dive into C programming concepts while building a fundamental software component.<br>

The project is called libft and is an exercise that requires you to use many things learnt during the piscine. Most of the functions in this project were written during the piscine (in one form or another).

## Result
 ![libft result](https://github.com/P-Claus/libft/blob/main/subject/libft.png)

## After libft project
Once I finished the libft project, I started rewriting some of the functions and makefile to use the library in other projects. The current state of the project is not what I submitted to moulinette. All updates after 18 January 2024 might not pass the moulinette because of changes in some functions rules in the makefile.

## Functions


### Functions from `<string.h>` library
* [`ft_strlen`](https://github.com/P-Claus/libft/blob/main/libft/ft_strlen.c): calculates the length of a string
* [`ft_memset`](https://github.com/P-Claus/libft/blob/main/libft/ft_memset.c): writes a certain amount of bytes (len) of value c to string b 
* [`ft_memcpy`](https://github.com/P-Claus/libft/blob/main/libft/ft_memcpy.c): copies certain amount of bytes (n) from src ro dst 
* [`ft_memmove`](https://github.com/P-Claus/libft/blob/main/libft/ft_memmove.c): copies a certain amount of bytes (len) from src to dst (there may be overlap)
* [`ft_strlcpy`](https://github.com/P-Claus/libft/blob/main/libft/ft_strlcpy.c): copies up to dstsize -1 from src to dst and null-terminates the new string (returns the string it tried to create so length of src)
* [`ft_strlcat`](https://github.com/P-Claus/libft/blob/main/libft/ft_strlcat.c): concatenates src to the end of dst and makes sure the new string is not longer than size to prevent buffer overflow
* [`ft_strchr`](https://github.com/P-Claus/libft/blob/main/libft/ft_strchr.c): searches if c is in the string and returns a pointer to the first c
* [`ft_strrchr`](https://github.com/P-Claus/libft/blob/main/libft/ft_strrchr.c): searches if c is in a string and returns a pointer to the last c
* [`ft_strncmp`](https://github.com/P-Claus/libft/blob/main/libft/ft_strncmp.c): compares a maximum of n characters of s1 and s2 and returns the difference in ASCII value
* [`ft_memchr`](https://github.com/P-Claus/libft/blob/main/libft/ft_memchr.c): searches a memory block forc(converted to unsigned char) and returns a pointer to the byte
* [`ft_memcmp`](https://github.com/P-Claus/libft/blob/main/libft/ft_memcmp.c): compares s1 and s2 up to n characters and returns the difference in ASCII value
* [`ft_strnstr`](https://github.com/P-Claus/libft/blob/main/libft/ft_strnstr.c): this looks for a substring in a string and returns a pointer to the substring
* [`ft_strdup`](https://github.com/P-Claus/libft/blob/main/libft/ft_strdup.c): duplicates a string and returns a pointer to the new string

### Functions from `<strings.h>` library
* [`ft_bzero`](https://github.com/P-Claus/libft/blob/main/libft/ft_bzero.c): writes n-bytes of 0 to a string s

### Functions from `<ctype.h>` library
* [`ft_isalpha`](https://github.com/P-Claus/libft/blob/main/libft/ft_isalpha.c): checks if c is alphabetical 
* [`ft_isdigit`](https://github.com/P-Claus/libft/blob/main/libft/ft_isdigit.c): checks if c is a digit 
* [`ft_isalnum`](https://github.com/P-Claus/libft/blob/main/libft/ft_isalnum.c): checks if c is a digit or alphabetical 
* [`ft_isascii`](https://github.com/P-Claus/libft/blob/main/libft/ft_isascii.c): checks if c is an ASCII value 
* [`ft_isprint`](https://github.com/P-Claus/libft/blob/main/libft/ft_isprint.c): checks if c is a printale character
* [`ft_toupper`](https://github.com/P-Claus/libft/blob/main/libft/ft_toupper.c): converts c to uppercase
* [`ft_tolower`](https://github.com/P-Claus/libft/blob/main/libft/ft_tolower.c): converts c to lowercase

### Functions from `<stdlib.h>` library
* [`ft_atoi`](https://github.com/P-Claus/libft/blob/main/libft/ft_atoi.c): converts string to integer
* [`ft_calloc`](https://github.com/P-Claus/libft/blob/main/libft/ft_calloc.c): allocates memory for a number of elements and sets that memory to 0

### Additional functions
* [`ft_substr`](https://github.com/P-Claus/libft/blob/main/libft/ft_substr.c): creates and returns a substring from a string
* [`ft_strjoin`](https://github.com/P-Claus/libft/blob/main/libft/ft_strjoin.c): creates a new string by concatenating s1 and s2
* [`ft_strtrim`](https://github.com/P-Claus/libft/blob/main/libft/ft_strtrim.c): removes characters specified in set from start and end in s1
* [`ft_split`](https://github.com/P-Claus/libft/blob/main/libft/ft_split.c): creates a new array of strings from an existing string using a separator
* [`ft_itoa`](https://github.com/P-Claus/libft/blob/main/libft/ft_itoa.c): converts an int to a string
* [`ft_strmapi`](https://github.com/P-Claus/libft/blob/main/libft/ft_strmapi.c): creates a new string by applying a function to each character in an existing string
* [`ft_striteri`](https://github.com/P-Claus/libft/blob/main/libft/ft_striteri.c): applies a function to each character in a string and modifying it if necessary
* [`ft_putchar_fd`](https://github.com/P-Claus/libft/blob/main/libft/ft_putchar_fd.c): outputs c to the file descriptor
* [`ft_putstr_fd`](https://github.com/P-Claus/libft/blob/main/libft/ft_putstr_fd.c): outputs a string to the file descriptor
* [`ft_putendl_fd`](https://github.com/P-Claus/libft/blob/main/libft/ft_putendl_fd.c): outputs a string to the file descriptor, followed by a newline
* [`ft_putnbr_fd`](https://github.com/P-Claus/libft/blob/main/libft/ft_putnbr_fd.c): outputs an int n to the file descriptor

## Functions for linked lists
* [`ft_lstnew`](https://github.com/P-Claus/libft/blob/main/libft/ft_lstnew_bonus.c): creates a new node in a linked list
* [`ft_lstadd_front`](https://github.com/P-Claus/libft/blob/main/libft/ft_lstadd_front_bonus.c): adds a new node to the front of an existing linked list
* [`ft_lstsize`](https://github.com/P-Claus/libft/blob/main/libft/ft_lstsize_bonus.c): returns the size of a linked list
* [`ft_lstlast`](https://github.com/P-Claus/libft/blob/main/libft/ft_lstlast_bonus.c): returns the last node in a linked list
* [`ft_lstadd_back`](https://github.com/P-Claus/libft/blob/main/libft/ft_lstadd_back_bonus.c): adds a node to the back of a linked list
* [`ft_lstdelone`](https://github.com/P-Claus/libft/blob/main/libft/ft_lstdelone_bonus.c): takes del function as parameter and frees the memory of a node's content and frees the node
* [`ft_lstclear`](https://github.com/P-Claus/libft/blob/main/libft/ft_lstclear_bonus.c): clears a list by deleting and freeing every node in a linked list
* [`ft_lstiter`](https://github.com/P-Claus/libft/blob/main/libft/ft_lstiter_bonus.c): iterates the linked list and applies the function f on the content of each node
* [`ft_lstmap`](https://github.com/P-Claus/libft/blob/main/libft/ft_lstmap_bonus.c): creates a new linked list by applying the function f to the content of each node
