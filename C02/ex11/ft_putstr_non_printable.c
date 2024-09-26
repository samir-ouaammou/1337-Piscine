/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 09:10:54 by souaammo          #+#    #+#             */
/*   Updated: 2024/06/30 10:17:25 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_hex_decimals(unsigned char hex)
{
	char	*hex_decimals;

	hex_decimals = "0123456789abcdef";
	ft_putchar (hex_decimals[hex / 16]);
	ft_putchar (hex_decimals[hex % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			ft_putchar ('\\');
			ft_hex_decimals(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
