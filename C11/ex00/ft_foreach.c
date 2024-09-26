/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:18:28 by souaammo          #+#    #+#             */
/*   Updated: 2024/07/17 17:52:46 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

void	f(int nbr)
{
	if (nbr < 0)
	{
		write (1, "-", 1);
		nbr *= -1;
	}
	if (nbr > 9)
		f(nbr / 10);
	nbr %= 10;
	nbr += '0';
	write(1, &nbr, 1);
}
*/
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int length = 5;

	ft_foreach(arr, length, f);
	return 0;
}
*/
