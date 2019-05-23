/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:53:34 by jcoetzee          #+#    #+#             */
/*   Updated: 2019/05/23 13:39:46 by jcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char u;
	char *str;
	int i;
	
	u = (unsigned char)c;
	str = b;
	i = 0;
	while (i < len)
	{
		str[i] = u;
		i++;
	}
	return (b);
}

int main () 
{
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   ft_memset(str,'$',7);
   puts(str);
   
   return(0);
}
