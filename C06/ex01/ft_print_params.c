/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souaammo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 21:53:48 by souaammo          #+#    #+#             */
/*   Updated: 2024/07/07 21:53:53 by souaammo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc >= 2)
	{
		i = 1;
		while (argv[i] && i < argc)
		{
			ft_putstr(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
