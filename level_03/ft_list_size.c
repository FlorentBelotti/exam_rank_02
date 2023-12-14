/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:58:22 by fbelotti          #+#    #+#             */
/*   Updated: 2023/12/05 17:04:23 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_list_size(t_list *begin_list)
{
	int	i = 0;

	if (!begin_list)
		return (0);
	while (begin_list)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i);
}
