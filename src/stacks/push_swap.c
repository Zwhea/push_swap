/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 18:41:26 by mmosca            #+#    #+#             */
/*   Updated: 2022/12/17 02:28:38 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int32_t	main(int32_t argc, char **argv)
{
	t_push_swap	data;

	check_arguments(argc, argv);
	argv = &argv[1];
	argv = reformat(argv);
	init_array_of_number(&data, argv);
	check_if_have_two_same_numbers_in_arguments(&data);
	create_stack(&data);
	ft_lstclear(&data.stack_a, del);
	return (0);
}
