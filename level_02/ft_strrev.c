/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:41:19 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/02 19:08:18 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strrev(char *str)
{
	int	str_len = 0;
	int	i = 0;
	char	temp;

	while (str[str_len])
		str_len++;
	while (i < str_len / 2)
	{
		temp = str[i];
		str[i] = str[str_len - 1 - i];
		str[str_len - 1 - i] = temp;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "abc";

	ft_strrev(str);
	printf("%s\n", str);
	return (0);
}
