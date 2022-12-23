/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:50:21 by twang             #+#    #+#             */
/*   Updated: 2022/12/23 16:05:33 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_min(t_info *data, int low)
{
	while (data->stack_a->content != low)
	{
		if (data->stack_a->next->content == low)
			swap_a(data);
		else
			rv_rotate_a(data);
	}
	if (is_sorted(data) == true)
		return ;
	push_a_to_b(data);
}

void	algo_small(t_info *data)
{
	int		low;

	low = find_lowest_nb(data->stack_a);
	push_min(data, low);
	low = find_lowest_nb(data->stack_a);
	push_min(data, low);
	if (data->stack_a_len == 3)
		algo_mini(data);
	else
	{
		if (data->stack_a->content > data->stack_a->next->content)
			swap_a(data);
	}
	push_b_to_a(data);
	push_b_to_a(data);
}
