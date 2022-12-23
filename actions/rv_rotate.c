/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rv_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 10:47:35 by twang             #+#    #+#             */
/*   Updated: 2022/12/23 10:48:16 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*first;

	first = (*stack);
	tmp = stack_last(*stack);
	while ((*stack)->next->next != NULL)
		(*stack) = (*stack)->next;
	(*stack)->next = NULL;
	(*stack) = tmp;
	tmp->next = first;
}

void	rv_rotate_a(t_info *data)
{
	if (data->stack_a_len < 2)
		return ;
	reverse_rotate(&data->stack_a);
	ft_putendl_fd("rra", 1);
}

void	rv_rotate_b(t_info *data)
{
	if (data->stack_b_len < 2)
		return ;
	reverse_rotate(&data->stack_b);
	ft_putendl_fd("rrb", 1);
}

void	rv_rotate_rr(t_info *data)
{
	if (data->stack_a_len < 2 || data->stack_b_len < 2)
		return ;
	reverse_rotate(&data->stack_a);
	reverse_rotate(&data->stack_b);
	ft_putendl_fd("rrr", 1);
}
