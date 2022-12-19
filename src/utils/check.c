/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 00:40:52 by mmosca            #+#    #+#             */
/*   Updated: 2022/12/17 00:54:07 by mmosca           ###   ########.fr       */
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

bool	is_only_one_sign_per_number(char c1, char c2)
{
	if (is_sign(c1) && ft_isdigit(c2) == false)
		return (false);
	return (true);
}

bool	is_number_follow_by_number_or_space(char c1, char c2)
{
	if (ft_isdigit(c1) && ft_isdigit(c2) == false && c2 != ' ' && c2 != '\0')
		return (false);
	return (true);
}
