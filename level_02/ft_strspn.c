/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 19:17:11 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/02 19:39:08 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int	i = 0;
	int	j = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] != accept[j])
				j++;
			else
				i++;
		}
	return (i);
	}
}

int	main(int arc, char **arv)
{
	char	*s = "a";
	char	*accept = "b";
	int		result = ft_strspn(s, accept);
	int		result2 = strspn(s, accept);

	printf("resultat de ma fonction : %d\n", result);
	printf("resultat de la fonction originale : %d\n", result2);
	return (0);
}
