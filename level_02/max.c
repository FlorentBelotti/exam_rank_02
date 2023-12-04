/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:11:17 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/04 17:30:06 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int* tab, unsigned int len)
{
	unsigned int	i = 0;

	if (!tab || len == 0)
		return (0);
	int	big = tab[i];
	while (i < len)
	{
		if (tab[i] > big)
			big = tab[i];
		i++;
	}
	return (big);
}

#include <stdio.h>

int	main(void)
{
	int	tab[] = {3,2,8,4,9,6,7,8,2};
	int	i = 0;

	i = max(tab, 9);
	printf("%d\n", i);
}
