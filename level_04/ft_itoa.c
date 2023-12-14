/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 00:47:04 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/06 01:22:57 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	count_nb(int nb)
{
	int	i = 0;

	if (nb == 0)
		return (1);
	if (nb < 0)
		i++;
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int	nb = n;
	int	len = count_nb(n);
	char	*str;

	str = malloc (sizeof(char) * len + 1);
	if (!str)
		return (0);
	str[len] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
		nb = -nb;
	while (len > 0)
	{
		str[--len] = nb % 10 + '0';
		nb = nb / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

int	main(void)
{
	int	nb = 9999999999999;
	char *ptr;

	ptr = ft_itoa(nb);
	printf("%s", ptr);
}
