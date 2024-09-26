/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 09:01:28 by souaammo          #+#    #+#             */
/*   Updated: 2024/07/17 17:27:06 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	f(int n1, int n2)
{
	return (n1 - n2);
}
*/
int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	n1;
	int	n2;

	i = 0;
	n1 = 1;
	n2 = 1;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			n1 = 0;
		if ((*f)(tab[i], tab[i + 1]) > 0)
			n2 = 0;
		i++;
	}
	return (n1 || n2);
}
/*
int	main()
{
	int	tab[] = {11, 12, 13, 14, 15};
	printf("%d\n", ft_is_sort(tab, 5, f));
	return (0);
}
*/
