/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rv_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:16:37 by wangthea          #+#    #+#             */
/*   Updated: 2022/12/19 22:57:48 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*rv_rotate(t_stack *stack)
{
	t_stack	*temp;

	temp = stack;
	while (temp->next->next != NULL)
		temp = temp->next;
	temp->next->next = stack;
	stack = temp->next;
	temp->next = NULL;
	return (stack);
}

t_stack	*rv_rotate_a(t_info *data)
{
	if (data->stack_a_len < 2)
		error();
	data->stack_a = rv_rotate(data->stack_a);
	ft_putstr_fd("rra\n", 1);
	return (data->stack_a);
}

t_stack	*rv_rotate_b(t_info	*data)
{
	if (data->stack_a_len < 2)
		error();
	data->stack_b = rv_rotate(data->stack_b);
	ft_putstr_fd("rrb\n", 1);
	return (data->stack_b);
}

void	rv_rotate_rrr(t_info *data)
{
	if (data->stack_a_len < 2)
		error();
	data->stack_a = rv_rotate(data->stack_a);
	data->stack_b = rv_rotate(data->stack_b);
	ft_putstr_fd("rrr\n", 1);
}
