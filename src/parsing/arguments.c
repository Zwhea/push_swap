/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:57:22 by mmosca            #+#    #+#             */
/*   Updated: 2022/12/17 01:00:56 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_str_format(char **args)
{
	uint32_t	i;
	uint32_t	j;

	if (!args[0])
		error();
	i = 0;
	while (args[i])
	{
		j = 0;
		while (args[i][j])
		{
			if (is_valid_char(args[i][j]) == false
				|| is_only_one_sign_per_number(args[i][j], args[i][j + 1]) == false
				|| is_number_follow_by_number_or_space(args[i][j], args[i][j + 1]) == false)
				error();
			j++;
		}
		i++;
	}
}

static void	check_str_has_number(char **args)
{
	uint32_t	i;
	uint32_t	j;

	i = 0;
	while (args[i])
	{
		j = 0;
		while (args[i][j] && ft_strchr("+- ", args[i][j]))
			j++;
		if (j != 0 && args[i][j] == '\0')
			error();
		i++;
	}
}

void	check_arguments(int32_t argc, char **args)
{
	if (argc < 2)
		error();
	args = &args[1];
	check_str_format(args);
	check_str_has_number(args);
}

void	check_if_have_two_same_numbers_in_arguments(t_push_swap *data)
{
	uint32_t	i;
	uint32_t	j;

	i = 0;
	while (i < data->numbers_size)
	{
		j = i + 1;
		while (j < data->numbers_size)
		{
			if (data->numbers[i] == data->numbers[j])
				error();
			j++;
		}
		i++;
	}
}
