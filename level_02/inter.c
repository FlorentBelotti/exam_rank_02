/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 10:39:24 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/04 14:31:35 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strchr(char *str, char c)
{
	int	i = 0;

	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	char	temp[9999] = "\0";
	int	i = 0;
	int	j = 0;

	if (ac == 3)
	{
		while (av[1][i])
		{
			if ((ft_strchr(av[2], av[1][i])) && (!ft_strchr(temp, av[1][i])))
			{
				temp[j] = av[1][i];
				write (1, &av[1][i], 1);
				j++;
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
