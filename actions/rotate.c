/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 10:47:28 by twang             #+#    #+#             */
/*   Updated: 2022/12/23 10:48:13 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack **stack)
{
	t_stack	*tmp;

	tmp = (*stack)->next;
	stack_addback(stack, *stack);
	(*stack) = tmp;
}

void	rotate_a(t_info *data)
{
	if (data->stack_a_len < 2)
		return ;
	rotate(&data->stack_a);
	ft_putendl_fd("ra", 1);
}

void	rotate_b(t_info *data)
{
	if (data->stack_b_len < 2)
		return ;
	rotate(&data->stack_b);
	ft_putendl_fd("rb", 1);
}

void	rotate_rr(t_info *data)
{
	if (data->stack_a_len < 2 || data->stack_b_len < 2)
		return ;
	rotate(&data->stack_a);
	rotate(&data->stack_b);
	ft_putendl_fd("rr", 1);
}
