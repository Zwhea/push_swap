/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 14:31:43 by twang             #+#    #+#             */
/*   Updated: 2022/12/19 18:04:37 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool	push(t_stack **stack_1, t_stack **stack_2)
{
	t_stack	*temp_a;
	t_stack	*temp_b;

	if (!*stack_1)
		return (false);
	temp_a = (*stack_1)->next;
	temp_b = *stack_2;
	*stack_2 = *stack_1;
	(*stack_2)->next = temp_b;
	*stack_1 = temp_a;
	return (true);
}

void	push_b_to_a(t_info *data)
{
	bool	result;

	result = push(&data->stack_b, &data->stack_a);
	if (result)
	{
		data->stack_b_len--;
		data->stack_a_len++;
		ft_putstr_fd("pa\n", 1);
	}
}

void	push_a_to_b(t_info *data)
{
	bool	result;

	result = push(&data->stack_a, &data->stack_b);
	if (result)
	{
		data->stack_a_len--;
		data->stack_b_len++;
		ft_putstr_fd("pb\n", 1);
	}
}
