/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 22:02:27 by wangthea          #+#    #+#             */
/*   Updated: 2022/12/23 12:37:10 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sorting_algorithm(t_info *data)
{
	if (is_sorted(data) == true)
		return ;
	else if (data->stack_a_len == 2)
		swap_a(data);
	else if (data->stack_a_len == 3)
		algo_mini(data);
	else if (data->stack_a_len <= 5)
		algo_small(data);
	else if (data->stack_a_len <= 100)
		algo_big(data, CHUNK_SMALL, DOUBLE_CHUNK_SMALL);
	else
		algo_big(data, CHUNK_BIG, DOUBLE_CHUNK_BIG);
}

int	main(int ac, char **av)
{
	t_info	data;

	check_arguments(ac, av);
	av = &av[1];
	av = reform(av);
	init_array(&data, av);
	check_duplicate(&data);
	create_stack(&data);
	sorting_algorithm(&data);
	ft_lstclr(&data.stack_a);
	return (0);
}
