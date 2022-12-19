/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:44:57 by wangthea          #+#    #+#             */
/*   Updated: 2022/12/19 19:29:39 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_lowest_nb(t_stack *stack)
{
	t_stack	*temp;
	int	lowest;

	temp = stack;
	lowest = stack->content;
	while (temp->next)
	{
		if (temp->content < lowest)
			lowest = temp->content;
		temp = temp->next;
	}
	return (lowest);
}

int	find_highest_nb(t_stack *stack)
{
	t_stack	*temp;
	int	highest;

	temp = stack;
	highest = stack->content;
	while (temp->next)
	{
		if (temp->content > highest)
			highest = temp->content;
		temp = temp->next;
	}
	return (highest);
}
