/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:35:41 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/05 17:59:12 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
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
			val[i] = start;
			start++;
		}
		else
		{
			val[i] = start;
			start--;
		}
		i++;
	}
	return (val);
}

int main(void)
{
	int start = 5;
	int end = 10;

	int *result = ft_range(start, end);

	if (result)
	{
		printf("Generated range: ");
		for (int i = 0; i < end - start + 1; i++)
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

