/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:25:39 by jcoetzee          #+#    #+#             */
/*   Updated: 2019/05/21 09:46:17 by jcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar (char c);

void	ft_putnbr (int nbr)
{
	if (nbr < 0)
	{
		ft_putchar ('-');
		nbr = nbr * -1;
	}
	if (nbr >= 10)
	{
		ft_putnbr (nbr / 10);
		ft_putnbr (nbr % 10);
	}
	if (nbr < 10)
	{
		ft_putchar(nbr + 48);
	}
}
