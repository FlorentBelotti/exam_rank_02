/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:13:57 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/05 11:40:07 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strchr(char *s1, char c, int limit)
{
	int	i = 0;

	while (s1[i] && limit > 0)
	{
		if (s1[i] == c)
			return (1);
		i++;
		limit--;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i = 0;
	int	j = 0;

	if (ac == 3)
	{
		while (av[1][i])
		{
			if (!ft_strchr(av[1], av[1][i], i))
				write (1, &av[1][i], 1);
			i++;
		}
		while (av[2][j])
		{
			if (!ft_strchr(av[1], av[2][j], i) && !ft_strchr(av[2], av[2][j], j))
				write (1, &av[2][j], 1);
			j++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
