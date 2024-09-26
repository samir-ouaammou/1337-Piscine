/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:36:37 by souaammo          #+#    #+#             */
/*   Updated: 2024/06/27 10:52:50 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	index1;
	int	index2;
	int	tmp;

	index1 = 0;
	while (index1 < (size - 1))
	{
		index2 = index1 + 1;
		while (index2 < size)
		{
			if (tab[index1] > tab[index2])
			{
				tmp = tab[index1];
				tab[index1] = tab[index2];
				tab[index2] = tmp;
			}
			index2++;
		}
		index1++;
	}
}
