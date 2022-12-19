/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:44:53 by twang             #+#    #+#             */
/*   Updated: 2022/12/19 22:58:10 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	which_algo(t_info *data)
{
	if (is_sorted(data) == true)
		return ;
	else if (data->stack_a_len <= 1)
		error();
	else if (data->stack_a_len == 2)
		swap_a(data);
	else if (data->stack_a_len == 3)
	{
		// show_pile(data->stack_a);
		algo_mini(data);
		// show_pile(data->stack_a);
	}
	else if (data->stack_a_len == 4 || data->stack_a_len == 5)
	{
		// show_pile(data->stack_a);
		algo_small(data);
		// show_pile(data->stack_a);
	}
}

void	show_pile(t_stack *stack)
{
	while (stack != NULL)
	{
		printf("[%d]\n", stack->content);
		stack = stack->next;
	}
	printf("\n");
}
