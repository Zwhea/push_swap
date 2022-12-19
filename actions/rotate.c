/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:49:27 by wangthea          #+#    #+#             */
/*   Updated: 2022/12/19 22:57:00 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*rotate(t_stack *stack)
{
	t_stack	*temp;
	t_stack	*temp2;

	temp = stack;
	temp2 = stack->next;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = stack;
	stack->next = NULL;
	return (temp2);
}

t_stack	*rotate_a(t_info *data)
{
	if (data->stack_a_len < 2)
		error();
	data->stack_a = rotate(data->stack_a);
	ft_putstr_fd("ra\n", 1);
	return (data->stack_a);
}

t_stack	*rotate_b(t_info *data)
{
	if (data->stack_a_len < 2)
		error();
	data->stack_b = rotate(data->stack_b);
	ft_putstr_fd("rb\n", 1);
	return (data->stack_a);
}

void	rotate_rr(t_info *data)
{
	if (data->stack_a_len < 2)
		error();
	data->stack_a = rotate(data->stack_a);
	data->stack_b = rotate(data->stack_b);
	ft_putstr_fd("rr\n", 1);
}
