/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 10:47:17 by twang             #+#    #+#             */
/*   Updated: 2022/12/23 10:48:04 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_stack **stack_from, t_stack **stack_to)
{
	t_stack	*tmp;

	tmp = *stack_to;
	*stack_to = tmp->next;
	tmp->next = *stack_from;
	*stack_from = tmp;
}

void	push_b_to_a(t_info *data)
{
	if (data->stack_b_len == 0)
		return ;
	push(&data->stack_a, &data->stack_b);
	data->stack_a_len++;
	data->stack_b_len--;
	ft_putendl_fd("pa", 1);
}

void	push_a_to_b(t_info *data)
{
	if (data->stack_a_len == 0)
		return ;
	push(&data->stack_b, &data->stack_a);
	data->stack_a_len--;
	data->stack_b_len++;
	ft_putendl_fd("pb", 1);
}
