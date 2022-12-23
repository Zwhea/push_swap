/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 10:47:41 by twang             #+#    #+#             */
/*   Updated: 2022/12/23 11:28:51 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack **stack)
{
	int	tmp;

	tmp = (*stack)->content;
	(*stack)->content = (*stack)->next->content;
	(*stack)->next->content = tmp;
}

void	swap_a(t_info *data)
{
	if (data->stack_a_len < 2)
		return ;
	swap(&data->stack_a);
	ft_putendl_fd("sa", 1);
}

void	swap_b(t_info *data)
{
	if (data->stack_b_len < 2)
		return ;
	swap(&data->stack_b);
	ft_putendl_fd("sb", 1);
}

void	swap_ss(t_info *data)
{
	if (data->stack_a_len < 2 || data->stack_b_len < 2)
		return ;
	swap(&data->stack_a);
	swap(&data->stack_b);
	ft_putendl_fd("ss", 1);
}
