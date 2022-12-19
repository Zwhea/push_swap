/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 22:08:16 by wangthea          #+#    #+#             */
/*   Updated: 2022/12/19 23:21:23 by wangthea         ###   ########.fr       */
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

int	find_highest_nb(t_stack *stack)
{
	t_stack	*temp;
	int		highest;

	temp = stack;
	highest = stack->content;
	while (temp)
	{
		if (temp->content > highest)
			highest = temp->content;
		temp = temp->next;
	}
	return (highest);
}
