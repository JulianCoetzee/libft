/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:05:34 by jcoetzee          #+#    #+#             */
/*   Updated: 2019/05/31 12:53:52 by jcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
	int i;

	i = 0;
	while(i <= ft_strlen(str))
	{
		if(str[i] == c)
		{
			return (char *)&str[i];
		}
		i++;
	}
	return (NULL);
}
