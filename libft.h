/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:40:02 by jcoetzee          #+#    #+#             */
/*   Updated: 2019/05/28 10:59:21 by jcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	void *content;
	size_t content_size;
	struct s_list *next;
}
	t_list;

int	ft_atoi(char *str);
void	ft_bzero(void *s, size_t n);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int ft_isascii(int c);
int ft_isprint(int c);
char	*ft_itoa(int n);
void	*ft_memalloc(size_t size);
void	*ft_memccpy(void *restrict dst, const void *restrict, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict, size_t n);
void	ft_memdel(void **ap);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void	*b, int c, size_t len);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl(char const *str);
void	ft_putendl_fd(char const *str, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr(char const *str);
void	ft_putstr_fd(char const *str, int fd);
char	*ft_strcat(char *restrict s1, const char *restrict s2, size_t n);
char *	ftstrchr(const char *str, int c);
void	ft_strclr(char *str);
int ft_strcmp(const char *s1, const char *s2);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strcpy(char *dst, const char *src);
void	ft_strdel(char **as);
void	ft_strdup(const char *str);
int ft_strequ(chat char const *s1; char const *s2);
void	ft_striter(char *str, void (*f)(char *));
void	ft_striteri(char *str, void (*f)(unsigned int,char *));
char *	ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char * restrict dst, const char* restrict src, size_t dstsize);
size_t	ft_strlen(const char *str);
char *	ft_strmap(char const *str, char (*f)(char));
char *	ft_ft_strmapi(char const *str, char (*f)(unsigned int, char));
size_t	ft_strncat(char *restrict s1, char *restrict s2, size_t n);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char * dst, const char * src, size_t len);
char	*ft_strndup(const char *str, size_t n);
int	ft_strnequ(char const *s1, char const *s2, size_t n);
char *	ft_strnew(size_t size);
char *	ft_strnstr(const char *haystack, const char *needle, size_t len);
char *	ft_strrchr(const char *str, intc);
char ** ft_strsplit(char const *str, char c);
char *	ft_strstr(const char *haystack, const char *needle);
char *	ft_strsub(char const *str, unsigned int start, size_t len);
char *	ft_strtrim(char const *str);
int	ft_tolower(int c);
int	ft_toupper(int c);

#endif
