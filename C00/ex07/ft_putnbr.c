/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 20:07:28 by souaammo          #+#    #+#             */
/*   Updated: 2024/06/27 08:17:09 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar ('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr (nb / 10);
		nb %= 10;
		nb += 48;
		ft_putchar (nb);
	}
	else
	{
		nb += 48;
		ft_putchar (nb);
	}
}
