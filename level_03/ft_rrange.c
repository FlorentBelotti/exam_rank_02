/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:46:43 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/05 18:30:41 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int	*val;
	int	size;
	int	i = 0;

	if (start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;
	val = malloc (sizeof(int) * size);
	if (!val)
		return (0);
	while (i < size)
	{
		if (start <= end)
		{
			val[i] = end;
			end--;
		}
		else
		{
			val[i] = end;
			end++;
		}
		i++;
	}
	return (val);
}

int main(void)
{
	int start = 10;
	int end = 5;

	int *result = ft_rrange(start, end);

	if (result)
	{
		printf("Generated range: ");
		for (int i = 0; i < start - end + 1; i++)
		{
			printf("%d ", result[i]);
		}
		printf("\n");

		// Don't forget to free the allocated memory
		free(result);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}

	return (0);
}
