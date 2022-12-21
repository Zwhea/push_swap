/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 22:21:39 by wangthea          #+#    #+#             */
/*   Updated: 2022/12/20 18:18:56 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstclr(t_stack **list)
{
	t_stack	*current;
	t_stack	*next;

	if (!list)
		return ;
	current = *list;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	list = NULL;
}

void	stack_addback(t_stack **stack, t_stack *add_new)
{
	t_stack	*temp;

	temp = *stack;
	if (!*stack)
	{
		*stack = add_new;
		return ;
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = add_new;
}

t_stack	*stack_addnew(int content)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
