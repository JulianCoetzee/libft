/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:12:44 by jcoetzee          #+#    #+#             */
/*   Updated: 2019/05/23 09:55:13 by jcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint	(int c)
{
	if (c => ' ' && c =< '~')
		return (1);
	else
		return (0);
}
