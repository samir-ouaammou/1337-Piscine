/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 08:26:06 by souaammo          #+#    #+#             */
/*   Updated: 2024/07/06 08:28:44 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 0)
		return (nb * ft_recursive_factorial (nb - 1));
	else if (nb == 0)
		return (1);
	else
		return (0);
}
