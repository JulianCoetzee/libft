/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:56:54 by jcoetzee          #+#    #+#             */
/*   Updated: 2019/05/30 13:11:35 by jcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	char *ns1;
	char *ns2;
	size_t i;

	if(!s1 && !s2)
		return (0);
	ns1 = (char *)s1;
	ns2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (ns1[i] != ns2[i])
			return(ns1[i] - ns2[i]);
		i++;
	}
	return (ns1[i] - ns2[i]);
}
