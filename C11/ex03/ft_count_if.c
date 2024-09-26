/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 08:59:16 by souaammo          #+#    #+#             */
/*   Updated: 2024/07/17 17:36:17 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
*/
int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if ((*f)(tab[i]))
			count++;
		i++;
	}
	return (count);
}
/*
int	main()
{
	char *tab[] = {"Hello", "1337", "42"};
	printf("%d\n", ft_count_if(tab, 3, ft_strlen));
	return (0);
}
*/
