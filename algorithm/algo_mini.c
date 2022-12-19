/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_mini.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:35:59 by twang             #+#    #+#             */
/*   Updated: 2022/12/19 18:05:15 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*algo_mini(t_info *data)
{
	if (is_sorted(data) == true)
		return (data->stack_a);
	else if (data->stack_a->content > data->stack_a->next->content
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
	{
		swap_a(data);
		rotate_a(data);
	}
	else if (data->stack_a->content > data->stack_a->next->content
		&& data->stack_a->next->content > data->stack_a->next->next->content
		&& data->stack_a->next->next->content < data->stack_a->content)
	{
		swap_a(data);
		rv_rotate_a(data);
	}
	else
		rv_rotate_a(data);
	return (data->stack_a);
}
