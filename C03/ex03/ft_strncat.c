/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:00:25 by souaammo          #+#    #+#             */
/*   Updated: 2024/07/02 13:02:44 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	size;

	i = 0;
	size = 0;
	while (dest[size])
		size++;
	while (src[i] && i < nb)
	{
		dest[size] = src[i];
		size++;
		i++;
	}
	dest[size] = '\0';
	return (dest);
}
