/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:22:41 by jcoetzee          #+#    #+#             */
/*   Updated: 2019/06/05 14:33:56 by jcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft."

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t i;
	char *js;

	i = 0;
	js = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!js)
		return (NULL);
	while (i < (ft_strlen(s1) + ft_strlen(s2)))
	{
		js[i] = ft_strcat(s1, s2)[i];
		i++;
	}
	js[i] = '\0';
	return (js);
}
