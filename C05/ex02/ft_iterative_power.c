/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 08:29:55 by souaammo          #+#    #+#             */
/*   Updated: 2024/07/06 09:40:18 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	result = 1;
	i = 0;
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
