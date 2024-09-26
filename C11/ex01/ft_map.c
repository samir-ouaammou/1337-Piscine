/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 08:58:13 by souaammo          #+#    #+#             */
/*   Updated: 2024/07/17 17:51:01 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
#include <stdio.h>

int	f(int nbr)
{
	return (nbr * 2);
}
*/
int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*t;

	t = (int *)malloc(length * sizeof(int));
	if (t == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		t[i] = (*f)(tab[i]);
		i++;
	}
	return (t);
}
/*
int	main()
{
	int	i = 0;
	int tab[] = {11, 22, 33, 44, 55};
	int *res = ft_map(tab, 5, f);
	while (i < 4)
	{
		printf ("%d\n", res[i]);
		i++;
	}
	return (0);
}
*/
