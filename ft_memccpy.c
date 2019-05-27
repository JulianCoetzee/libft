/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:55:24 by jcoetzee          #+#    #+#             */
/*   Updated: 2019/05/27 12:12:06 by jcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict, int c, size_t n)
{
	unsigned char ndst;
	unsigned char nsrc;
	size_t i;

	ndst = (unsigned char *)dst;
	nsrc = (unsigned char *)src;
	i = 0;
	while (i < n && src[i] != c)
	{
		ndst[i] = nsrc[i];
		i++;
