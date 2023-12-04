/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:03:05 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/04 15:16:46 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	if (n % 2 == 1 || n == 0)
		return (0);
	while (n > 2)
	{
		if (n % 2 == 1)
			return (0);
		n = n / 2;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	int	n = 16;
	int	result = 0;

	result = is_power_of_2(n);
	printf("%d\n", result);
	return (0);
}

