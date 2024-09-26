/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 09:32:16 by souaammo          #+#    #+#             */
/*   Updated: 2024/07/09 10:17:14 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(int size, char **strs, char *sep, char *result)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			result[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			result[k++] = sep[j++];
		i++;
	}
	result[k] = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*result;

	if (size <= 0)
	{
		result = (char *)malloc(sizeof(char));
		result[0] = '\0';
		return (result);
	}
	i = 0;
	len = 0;
	while (i < size)
		len += ft_strlen (strs[i++]);
	len += ((ft_strlen(sep) * (size - 1)) + 1);
	result = (char *)malloc(len * sizeof(char));
	if (result == NULL)
		return (NULL);
	result = ft_strcpy(size, strs, sep, result);
	return (result);
}
