/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 02:15:24 by mmosca            #+#    #+#             */
/*   Updated: 2022/12/17 02:15:37 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_stack(t_push_swap *data)
{
	uint32_t	i;

	data->stack_a = NULL;
	i = 0;
	while (i < data->numbers_size)
	{
		ft_lstadd_back(&data->stack_a, ft_lstnew(data->numbers[i]));
		i++;
	}
	data->stack_a_size = i;
	free(data->numbers);
}
