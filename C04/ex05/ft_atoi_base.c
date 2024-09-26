/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 15:02:35 by souaammo          #+#    #+#             */
/*   Updated: 2024/07/14 15:15:33 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_check_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi(char *str, int *sign)
{
	int	i;

	i = 0;
	*sign = 1;
	while (str[i] && (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r')))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			*sign *= -1;
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	long	result;
	int		len_base;

	len_base = ft_strlen(base);
	if (ft_check(base) == 1 || len_base < 2)
		return (0);
	i = ft_atoi(str, &sign);
	result = 0;
	while (str[i] && ft_check_base(str[i], base) != -1)
	{
		result = result * len_base + ft_check_base(str[i], base);
		if (result > 2147483647)
			return (0);
		i++;
	}
	return (result * sign);
}
