# Libft (Static Library in C)
![libft header](https://github.com/P-Claus/libft/blob/main/subject/LIBFT-header.png)

<p align='center'>
	<a href='https://profile.intra.42.fr/users/pclaus' target="_blank"><img alt="Campus 19 Profile" src="https://img.shields.io/badge/Campus%2019%20Profile-071C13" ></a>
<img alt="status" src="https://img.shields.io/badge/status-ongoing-success?color=071C13&style=flat-square"/>
  	<img alt="register date" src="https://img.shields.io/badge/registered-16%20%2F%2010%20%2F%202023-success?color=071C13&style=flat-square"/>
<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/P-Claus/libft?color=071C13" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/P-Claus/libft?color=071C13" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/P-Claus/libft?color=071C13" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/P-Claus/libft?color=071C13" />

	
</p>


## Overview

In this introductory project, I am excited to create my own personal static library in the C programming language. This project marks the beginning of my journey at campus19 and provides an opportunity to dive into C programming concepts while building a fundamental software component.<br>

The project is called libft and is an exercise that requires you to use many things learnt during the piscine. Most of the functions in this project were written during the piscine (in one form or another).

## Mandatory functions


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
* [`ft_bzero`]() - 

### Functions from `<ctype.h>` library
* [`ft_isalpha`]() - 
* [`ft_isdigit`]() - 
* [`ft_isalnum`]() - 
* [`ft_isascii`]() - 
* [`ft_isprint`]()
* [`ft_toupper`]()
* [`ft_tolower`]()

### Functions from `<stdlib.h>` library
* [`ft_atoi`]()
* [`ft_calloc`]()

### Additional functions
* [`ft_substr`]()
* [`ft_strjoin`]()
* [`ft_strtrim`]()
* [`ft_split`]()
* [`ft_itoa`]()
* [`ft_strmapi`]()
* [`ft_striteri`]()
* [`ft_putchar_fd`]()
* [`ft_putstr_fd`]()
* [`ft_putendl_fd`]()
* [`ft_putnbr_fd`]()

## Bonus part
* [`ft_lstnew`]()
* [`ft_lstadd_front`]()
* [`ft_lstsize`]()
* [`ft_lstlast`]()
* [`ft_lstadd_back`]()
* [`ft_lstdelone`]()
* [`ft_lstclear`]()
* [`ft_lstiter`]()
* [`ft_lstmap`]()

## Main Functions
I removed the main functions in the function files to hand in, but the files with a main function included are available in [`this directory`](https://github.com/P-Claus/libft/tree/main/main_functions).
