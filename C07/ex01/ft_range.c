/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:03:46 by souaammo          #+#    #+#             */
/*   Updated: 2024/07/09 16:30:13 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*result;

	if (min >= max)
		return (NULL);
	size = (max - min);
	result = (int *)malloc(size * sizeof(int));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		result[i] = min;
		i++;
		min++;
	}
	return (result);
}
