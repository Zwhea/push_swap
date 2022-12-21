/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 22:02:27 by wangthea          #+#    #+#             */
/*   Updated: 2022/12/21 13:57:50 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_info	data;

	if (av[1] == '\0')
		return (1);
	check_arguments(ac, av);
	av = &av[1];
	av = reform(av);
	init_array(&data, av);
	check_duplicate(&data);
	create_stack(&data);
	which_algo(&data);
	ft_lstclr(&data.stack_a);
	return (0);
}
