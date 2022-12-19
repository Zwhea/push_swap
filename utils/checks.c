/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 10:49:52 by twang             #+#    #+#             */
/*   Updated: 2022/12/19 18:04:39 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool	is_sign(char c)
{
	if (c == '-' || c == '+')
		return (true);
	return (false);
}

bool	is_valid_char(char c)
{
	if (c == ' ' || is_sign(c) || ft_isdigit(c))
		return (true);
	return (false);
}

bool	one_sign_per_number(char c1, char c2)
{
	if (is_sign(c1) && ft_isdigit(c2) == false)
		return (false);
	return (true);
}

bool	follow_by_number_or_space(char c1, char c2)
{
	if (ft_isdigit(c1) && ft_isdigit(c2) == false && c2 != ' ' && c2 != '\0')
		return (false);
	return (true);
}

bool	is_sorted(t_info *data)
{
	t_stack	*temp;

	temp = data->stack_a;
	while (temp && temp->next != NULL)
	{
		if (temp->content > temp->next->content)
			return (false);
		temp = temp->next;
	}
	return (true);
}
