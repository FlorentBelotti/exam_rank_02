/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:57:12 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/05 19:10:43 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	nb;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		nb = a;
	else
		nb = b;
	while (1)
	{
		if (nb % a == 0 && nb % b == 0)
			return (nb);
		++nb;
	}
}
