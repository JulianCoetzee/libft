/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:40:02 by jcoetzee          #+#    #+#             */
/*   Updated: 2019/05/27 12:57:19 by jcoetzee         ###   ########.fr       */
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
int	mecmpp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict, size_t n);
void	ft_memdel(void **ap);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void	*b, int c, size_t len);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char const *str);
void	ft_putstr_fd(char const *str, int fd);

