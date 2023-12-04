/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:55:32 by fbelotti          #+#    #+#             */
/*   Updated: 2023/11/29 11:39:12 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*line_malloc(char *str)
{
	int	i = 0;
	int	maj_nb;
	//char	*line;

	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			maj_nb++;
		i++;
	}
	str = malloc (i + maj_nb);
	return (str);
}

int	main(int arc, char **arv)
{
	int	i = 0;

	if (arc == 2)
	{
		//line_malloc(arv[1]);
		while (arv[1][i])
		{
			if (arv[1][i] >= 'A' && arv[1][i] <= 'Z')
			{
				write (1, "_", 1); 
				arv[1][i] = arv[1][i] + 32;
			}
			write (1, &arv[1][i], 1);
			i++;
		}
		write (1, "\n", 1);
		return (0); 
        }
}


