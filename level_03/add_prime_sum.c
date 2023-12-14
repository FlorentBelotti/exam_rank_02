/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:30:40 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/05 15:01:32 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_prime(int nb)
{
	int	div = 2;

	if (nb < 2)
		return (0);
	while (div * div <= nb)
	{
		if (nb % div == 0)
			return (0);
		div++;
	}
	return (1);
}

int	simple_atoi(char *str)
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

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	simple_putnbr(int nb)
{
	if (nb > 9)
	{
		simple_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
		ft_putchar(nb + '0');

}

int	main(int ac, char **av)
{
	int	nb = 0;
	int	result = 0;
	int	i = 1;

	if (ac == 2)
	{
		nb = simple_atoi(av[1]);
		while (i <= nb)
		{
			if (is_prime(i))
				result = result + i;
			i++;
		}
		simple_putnbr(result);
	}
	write (1, "\n", 1);
	return (0);
}
