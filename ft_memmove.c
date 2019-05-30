/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:55:54 by jcoetzee          #+#    #+#             */
/*   Updated: 2019/05/30 11:23:26 by jcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_memmove(void *dst, void const *src, size_t len)
{
	char *tmp;

	tmp = (chat *)malloc(sizeof(char) * len);
	if (tmp == NULL)
	{
		return (NULL);
	}
	ft_memcpy(tmp, src, len);
	ft_memcpy(dst, tmp, len);
	free(tmp);
	return (dst);
}
