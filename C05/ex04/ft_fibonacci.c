/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 08:33:23 by souaammo          #+#    #+#             */
/*   Updated: 2024/07/06 09:32:03 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index >= 2)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else if (index == 1)
		return (1);
	else if (index == 0)
		return (0);
	return (-1);
}
