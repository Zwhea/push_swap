/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:58:29 by wangthea          #+#    #+#             */
/*   Updated: 2022/12/23 12:23:50 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_max(t_info *data)
{
	int	hight;

	if (is_sorted(data) == true)
		return ;
	hight = find_position_highest_nb(data->stack_b);
	if (hight < data->stack_b_len / 2)
	{
		while (hight > 0)
		{
			rotate_b(data);
			hight--;
		}
	}
	else
	{
		hight = data->stack_b_len - hight;
		while (hight > 0)
		{
			rv_rotate_b(data);
			hight--;
		}
	}
	push_b_to_a(data);
}

void	algo_big(t_info *data, int chunk, int double_chunk)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (is_sorted(data) == false)
	{
		while (data->stack_a && data->stack_b_len <= i * double_chunk)
		{
			if (data->stack_a->content <= j * chunk)
				push_a_to_b(data);
			else if (data->stack_a->content <= i * double_chunk)
			{
				push_a_to_b(data);
				rotate_b(data);
			}
			else
				rotate_a(data);
		}
		i += 1;
		j += 2;
		while (data->stack_b && i > chunk / 2)
			push_max(data);
	}
}
