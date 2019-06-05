/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:22:15 by jcoetzee          #+#    #+#             */
/*   Updated: 2019/06/05 11:48:31 by jcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *str, unsigned int start, size_t len)
{
	size_t i;
	size_t j;
	char *sstr;

	i = 0;
	j = 0;
	sstr = (char *)malloc(sizeof(char) * (len + 1));
	if(!sstr)
		return (NULL);
	while (str != '\0' && i <= (start + len))
	{
		if (i >= start)
		{
			sstr[j] = str[i];
			j++;
		}
		i++;
	}
	sstr[i] = '\0';
	return (sstr);
}
