/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 22:07:17 by wangthea          #+#    #+#             */
/*   Updated: 2022/12/21 13:38:35 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_stack(t_info *data)
{
	int	i;

	data->stack_a = NULL;
	i = 0;
	while (i < data->index_size)
	{
		stack_addback(&data->stack_a, stack_addnew(data->index[i]));
		i++;
	}
	data->stack_a_len = i;
	free(data->index);
}
