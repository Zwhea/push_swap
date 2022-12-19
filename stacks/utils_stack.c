/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 22:21:39 by wangthea          #+#    #+#             */
/*   Updated: 2022/12/19 23:22:32 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	del(int number)
{
	number = 0;
	if (number == 0)
		return ;
}

void	ft_lstclr(t_stack **list, void (*del)(int))
{
	t_stack	*temp;
	t_stack	*next;

	if (!list || !(*del))
		return ;
	temp = *list;
	while (temp)
	{
		next = temp->next;
		ft_lstdlone(temp, del);
		temp = next;
	}
	ft_lstdlone(temp, del);
	*list = NULL;
}

void	ft_lstdlone(t_stack *list, void (*del)(int))
{
	del(list->content);
	free(list);
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
