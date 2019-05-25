/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:54:10 by jcoetzee          #+#    #+#             */
/*   Updated: 2019/05/24 13:45:05 by jcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "libft.h"
*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void ft_bzero(void *s, size_t n)
{
	unsigned char *str;
	int i;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

int main () 
{
   char s[50];

   strcpy(s,"Really now, I'm hungry.");
   puts(s);

   ft_bzero(s,4);
   puts(s);
   return(0);
}

