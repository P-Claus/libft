/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:15:12 by pclaus            #+#    #+#             */
/*   Updated: 2023/10/30 22:04:02 by pclaus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

//string.h library functions
void    *ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
char    *ft_strchr(const char *str, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *s);
char    *ft_strrchr(const char *s, int c);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strdup(const char *str);

//strings.h library functions
void    ft_bzero(void *s, size_t n);

//ctype.h library functions
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
int     ft_isprint(int c);

//stdlib.h library functions
int	ft_atoi(const char *str);
void    *ft_calloc(size_t num_elements, size_t element_size);

//additional functions
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
void	*ft_calloc(size_t num_elements, size_t element_size);
void    ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char    **ft_split(char const *s, char c) ;
char    *ft_itoa(int n);
#endif
