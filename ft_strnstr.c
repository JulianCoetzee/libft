/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:06:55 by jcoetzee          #+#    #+#             */
/*   Updated: 2019/06/12 15:04:57 by jcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *stack, const char *ndl, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	if (stack[0] == '\0' && ndl[0] == '\0')
		return ((char *)stack);
	while (stack[i] != '\0')
	{
		j = 0;
		while (stack[i + j] == ndl[j] && ndl[j] != '\0' && i < n)
			j++;
		if (ndl[j] == '\0' || i == (n - 1))
			return ((char *)stack + i);
		i++;
	}
	return (NULL);
}
