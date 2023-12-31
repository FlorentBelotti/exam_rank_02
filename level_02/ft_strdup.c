/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:29:59 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/02 16:34:15 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	int	i = 0;
	char	*dest;

	while (src[i])
		i++;
	dest = malloc(i + 1);
	i = 0;
	while (src[i])
		dest[i++] = src[i++];
	dest[i] = '\0';
	return (dest);
}
