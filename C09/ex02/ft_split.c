/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:04:58 by souaammo          #+#    #+#             */
/*   Updated: 2024/07/15 10:05:05 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_separator(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_word_count(char *str, char *sep)
{
	int	i;
	int	wc;

	i = 0;
	wc = 0;
	while (str[i])
	{
		while (str[i] && ft_separator(str[i], sep) == 1)
			i++;
		if (str[i])
			wc++;
		while (str[i] && ft_separator(str[i], sep) == 0)
			i++;
	}
	return (wc + 1);
}

char	*ft_strcpy(char *str, char *sep)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	len = 0;
	while (str[len] && ft_separator(str[len], sep) == 0)
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**result;

	if (str == NULL)
		return (NULL);
	result = (char **)malloc(ft_word_count(str, charset) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && ft_separator(str[i], charset) == 1)
			i++;
		if (str[i])
		{
			result[j] = ft_strcpy(&str[i], charset);
			j++;
		}
		while (str[i] && ft_separator(str[i], charset) == 0)
			i++;
	}
	result[j] = NULL;
	return (result);
}
