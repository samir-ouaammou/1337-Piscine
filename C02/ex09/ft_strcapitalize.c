/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 21:16:04 by souaammo          #+#    #+#             */
/*   Updated: 2024/07/01 08:51:55 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check(char *str, int i)
{
	int	not_uper;
	int	not_lower;
	int	not_nbr;

	not_uper = str[i - 1] < 'A' || str[i - 1] > 'Z';
	not_lower = str[i - 1] < 'a' || str[i - 1] > 'z';
	not_nbr = str[i - 1] < '0' || str[i - 1] > '9';
	return (not_uper && not_lower && not_nbr);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	up;
	int	low;

	i = 0;
	while (str[i])
	{
		up = str[i] >= 'A' && str[i] <= 'Z';
		low = str[i] >= 'a' && str[i] <= 'z';
		if (i == 0 || ft_check(str, i))
		{
			if (low)
				str[i] -= 32;
		}
		else if (up)
			str[i] += 32;
		i++;
	}
	return (str);
}
