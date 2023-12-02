/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:49:43 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/02 16:28:46 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	len = 0;
	int		i = 0;

	while (s[len])
	{
		i = 0;
		while (reject[i])
		{
			if (s1[len] == reject[i])
				return (len);
			i++;
		}
		len++;
	}
	return (len);
}
