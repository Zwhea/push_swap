/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_mini.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:35:59 by twang             #+#    #+#             */
/*   Updated: 2022/12/23 16:04:59 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	actions_case_3(t_info *data)
{	
	swap_a(data);
	rotate_a(data);
}

void	algo_mini(t_info *data)
{
	if (data->stack_a->content < data->stack_a->next->content
		&& data->stack_a->next->content < data->stack_a->next->next->content)
		return ;
	if (data->stack_a->content > data->stack_a->next->content
		&& data->stack_a->next->content < data->stack_a->next->next->content
		&& data->stack_a->next->next->content > data->stack_a->content)
		swap_a(data);
	else if (data->stack_a->content > data->stack_a->next->content
		&& data->stack_a->next->content < data->stack_a->next->next->content
		&& data->stack_a->next->next->content < data->stack_a->content)
		rotate_a(data);
	else if (data->stack_a->content < data->stack_a->next->content
		&& data->stack_a->next->content > data->stack_a->next->next->content
		&& data->stack_a->next->next->content > data->stack_a->content)
		actions_case_3(data);
	else if (data->stack_a->content > data->stack_a->next->content
		&& data->stack_a->next->content > data->stack_a->next->next->content
		&& data->stack_a->next->next->content < data->stack_a->content)
	{
		swap_a(data);
		rv_rotate_a(data);
	}
	else
		rv_rotate_a(data);
}
