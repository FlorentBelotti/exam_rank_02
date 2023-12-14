/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 00:35:21 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/06 00:44:42 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	i = 1;
	int	nb = 0;

	if (ac == 2)
	{
		nb = atoi(av[1]);
		if (nb == 0)
			printf("1");
		while (nb >= i)
		{
			if (nb % i == 0)
			{
				printf("%d", i);
				if (nb == i)
					break;
				printf("*");
				nb /= i;
				i = 1;
			}
		}
		printf("\n");
		return (0);
	}
}
