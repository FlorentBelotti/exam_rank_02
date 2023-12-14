/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 23:56:20 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/06 00:09:38 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(int nb)
{
	char	*hex = "0123456789abcdef";

	if (nb >= 16)
		print_hex(nb / 16);
	write (1, &hex[nb % 16], 1);
}

int	ft_atoi(char *str)
{
	int	result = 0;
	int	i = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write (1, "\n", 1);
}
