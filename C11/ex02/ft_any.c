/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 08:58:36 by souaammo          #+#    #+#             */
/*   Updated: 2024/07/17 17:44:05 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <stdlib.h>

int f(char *str)
{
	if (*str == 'A')
		return (1);
	return (0);
}
*/
int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}
/*
int main (void)
{
	char **array;
	int	i;

	i = 0;
	array = malloc(3 * sizeof(char *));
	array[0] = "A";
	array[1] = "Z";
	array[2] = NULL;
	while (array[i])
	{
		printf("%d\n", ft_any(&array[i], f));
		i++;
	}
}*/
