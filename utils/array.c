/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 22:08:16 by wangthea          #+#    #+#             */
/*   Updated: 2022/12/23 09:58:28 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_number_of_arguments(char **av)
{
	int	i;

	i = 0;
	while (av[i])
		i++;
	return (i);
}

bool	is_sorted(t_info *data)
{
	t_stack	*temp;

	if (data->stack_b_len != 0)
		return (false);
	temp = data->stack_a;
	while (temp && temp->next != NULL)
	{
		if (temp->content > temp->next->content)
			return (false);
		temp = temp->next;
	}
	return (true);
}

int	find_lowest_nb(t_stack *stack)
{
	t_stack	*temp;
	int		lowest;

	temp = stack;
	lowest = stack->content;
	while (temp)
	{
		if (temp->content < lowest)
			lowest = temp->content;
		temp = temp->next;
	}
	return (lowest);
}

int	find_position_highest_nb(t_stack *stack)
{
	t_stack	*temp;
	int		highest;
	int		position;
	int		i;

	temp = stack;
	highest = stack->content;
	position = 0;
	i = 0;
	while (temp)
	{
		if (temp->content > highest)
		{
			highest = temp->content;
			position = i;
		}
		temp = temp->next;
		i++;
	}
	return (position);
}
