/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:23:33 by fbelotti          #+#    #+#             */
/*   Updated: 2023/11/29 15:15:10 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	i = 0;
	int	sign = 1;
	int	result = 0;

	if (str[i] == '-')
	{
		sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0'; 
		i++;
	}
	return (result * sign);
}

int	main(int arc, char **arv)
{
	int	i = 0;
	int	result = 0;
	int	nb_1 = ft_atoi(arv[1]);
	int	nb_2 = ft_atoi(arv[3]);

	if (arc == 4)
	{
		if (arv[2][i] == '*')
			result = nb_1 * nb_2;
		if (arv[2][i] == '/')
			result = nb_1 / nb_2;
		if (arv[2][i] == '-')
                        result = nb_1 - nb_2;
		if (arv[2][i] == '+')
                        result = nb_1 + nb_2;
                if (arv[2][i] == '%')
                        result = nb_1 % nb_2;
		printf("%d\n", result);
	}
	return (0);
}








