/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 01:30:19 by mmosca            #+#    #+#             */
/*   Updated: 2022/12/17 02:15:12 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	fill_array_with_numbers(t_push_swap *data, char **args)
{
	uint32_t	i;

	data->numbers_size = get_number_of_arguments(args);
	data->numbers = ft_calloc(data->numbers_size, sizeof(int));
	if (!data->numbers)
		error();
	i = 0;
	while (i < data->numbers_size)
	{
		data->numbers[i] = ft_atoi(args[i]);
		i++;
	}
}

static int32_t	get_how_many_number_are_lower(t_push_swap *data, uint32_t index)
{
	uint32_t	i;
	int32_t		smaller;

	i = 0;
	smaller = 0;
	while (i < data->numbers_size)
	{
		if (data->numbers[index] > data->numbers[i])
			smaller++;
		i++;
	}
	return (smaller);
}

static int32_t	*index_array(t_push_swap *data)
{
	uint32_t	i;
	int32_t		*array;

	array = ft_calloc(data->numbers_size, sizeof(int));
	if (!array)
		error();
	i = 0;
	while (i < data->numbers_size)
	{
		array[i] = get_how_many_number_are_lower(data, i);
		i++;
	}
	free(data->numbers);
	return (array);
}

void	init_array_of_number(t_push_swap *data, char **args)
{
	fill_array_with_numbers(data, args);
	data->numbers = index_array(data);
	ft_free(args, get_number_of_arguments(args));
}
