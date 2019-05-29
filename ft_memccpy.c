/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:55:24 by jcoetzee          #+#    #+#             */
/*   Updated: 2019/05/29 12:51:50 by jcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *ndst;
	unsigned char *nsrc;
	size_t i;

	ndst = (unsigned char *)dst;
	nsrc = (unsigned char *)src;
	i = 0;
	while (i < n && src[i] != '\0' )
	{
		ndst[i] = nsrc[i];
		if (ndst[i] == c)
			return ((void *)dst[i + 1]);
		i++;
	}
	return ((void *)NULL);
}
