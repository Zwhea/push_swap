/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 21:58:16 by wangthea          #+#    #+#             */
/*   Updated: 2022/12/21 14:01:33 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_str_format(char **av)
{
	int	i;
	int	j;

	if (!av[0])
		return ;
	i = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (is_valid_char(av[i][j]) == false
				|| one_sign_per_number(av[i][j], av[i][j + 1]) == false
				|| follow_by_number_or_space(av[i][j], av[i][j + 1]) == false)
				error();
			j++;
		}
		i++;
	}
}

static void	check_str_has_number(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j] && ft_strchr("+- ", av[i][j]))
			j++;
		if (j != 0 && av[i][j] == '\0')
			error();
		i++;
	}
}

void	check_arguments(int ac, char **av)
{
	if (ac < 1)
		error();
	av = &av[1];
	check_str_format(av);
	check_str_has_number(av);
}

void	check_duplicate(t_info *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->index_size)
	{
		j = i + 1;
		while (j < data->index_size)
		{
			if (data->index[i] == data->index[j])
				error();
			j++;
		}
		i++;
	}
}
