/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:40:42 by fbelotti          #+#    #+#             */
/*   Updated: 2023/11/27 17:01:28 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	repeat_alpha(char *str)
{
	int	i;
	int	alpha_index;

	i = 0;
	while (str[i])
	{
		alpha_index = 0;
		if (str[i] >= 65 && str[i] <= 90)
		{
			alpha_index = str[i] - 64; 
			while (alpha_index != 0)
			{
				ft_putchar(str[i]);
				alpha_index--;
			}
			i++;
		}
		if (str[i] >= 97 && str[i] <= 122)
		{
			alpha_index = str[i] - 96;
			while (alpha_index != 0)
			{
				ft_putchar(str[i]);
				alpha_index--;
			}
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write (1, "\n", 1);
}



