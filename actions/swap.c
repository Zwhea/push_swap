/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:02:03 by twang             #+#    #+#             */
/*   Updated: 2022/12/19 22:55:53 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack *stack)
{
	int	temp;

	temp = stack->content;
	stack->content = stack->next->content;
	stack->next->content = temp;
}

void	swap_a(t_info *data)
{
	if (data->stack_a_len < 2)
		error();
	swap(data->stack_a);
	ft_putstr_fd("sa\n", 1);
}

void	swap_b(t_info *data)
{
	if (data->stack_a_len < 2)
		error();
	swap(data->stack_b);
	ft_putstr_fd("sb\n", 1);
}

void	swap_ss(t_info *data)
{
	if (data->stack_a_len < 2)
		error();
	swap(data->stack_a);
	swap(data->stack_b);
	ft_putstr_fd("ss\n", 1);
}
