/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 18:14:00 by souaammo          #+#    #+#             */
/*   Updated: 2024/06/27 13:46:09 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char i, char j, char k)
{
	write (1, &i, 1);
	write (1, &j, 1);
	write (1, &k, 1);
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				ft_print (i, j, k);
				if (i != '7')
					write (1, ", ", 2);
				k++;
			}
			j++;
		}
		i++;
	}
}
