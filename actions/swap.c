/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:02:03 by twang             #+#    #+#             */
/*   Updated: 2022/12/14 17:13:07 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack *stack)
{
	int	temp;

	if (stack_length(stack) < 2)
		ft_error();
	temp = stack->content;
	stack->content = stack->next->content;
	stack->next->content = temp;
}

void	swap_a(t_info *data)
{
	swap(data->stack_a);
	ft_putstr_fd("sa\n", 1);
}

void	swap_b(t_info *data)
{
	swap(data->stack_b);
	ft_putstr_fd("sb\n", 1);
}

void	swap_ss(t_info *data)
{
	swap(data->stack_a);
	swap(data->stack_b);
	ft_putstr_fd("ss\n", 1);
}
