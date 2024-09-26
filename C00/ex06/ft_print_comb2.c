/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 18:44:00 by souaammo          #+#    #+#             */
/*   Updated: 2024/06/26 20:05:45 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nbr(int nbr)
{
	char	c;

	c = nbr / 10 + '0';
	write (1, &c, 1);
	c = nbr % 10 + '0';
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print_nbr (i);
			write (1, " ", 1);
			ft_print_nbr (j);
			if (i < 98)
				write (1, ", ", 2);
			j++;
		}
		i++;
	}
}
