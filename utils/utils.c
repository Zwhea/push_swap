/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:44:57 by wangthea          #+#    #+#             */
/*   Updated: 2022/12/15 18:40:33 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	exit(ft_putstr_fd("Error\n", 2));
}

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
