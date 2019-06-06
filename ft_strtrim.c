/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:23:25 by jcoetzee          #+#    #+#             */
/*   Updated: 2019/06/06 13:06:56 by jcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str)
{
	size_t i;
	size_t j;
	size_t k;
	char *tstr;

	i = 0;
	j = ft_strlen(str);
	k = 0;
	tstr = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	if (tstr == NULL)
		return (NULL);
	while (str[i] < 33 && str[i] > 126 && str[i] > 0)
		i++;
	while (str[j] < 33 && str[j] >= 0)
		j--;
	while (i < j)
	{
		tstr[k] = str[i];
		i++;
		k++;
	}
	tstr[k] = '\0';
	return (tstr);
}
