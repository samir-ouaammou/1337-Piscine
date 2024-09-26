/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:37:28 by souaammo          #+#    #+#             */
/*   Updated: 2024/07/03 08:26:01 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	j;

	i = 0;
	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	j = d_len;
	if (size == 0 || size <= d_len)
		return (s_len + size);
	while (src[i] && i < size - d_len - 1)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (d_len + s_len);
}
