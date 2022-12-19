/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 22:09:26 by wangthea          #+#    #+#             */
/*   Updated: 2022/12/19 22:09:39 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	fill_array(t_info *data, char **av)
{
	int	i;

	data->index_size = get_number_of_arguments(av);
	data->index = ft_calloc(data->index_size, sizeof(int));
	if (!data->index)
		error();
	i = 0;
	while (i < data->index_size)
	{
		data->index[i] = ft_atoi(av[i]);
		i++;
	}
}

static int	get_lower_number(t_info *data, int index)
{
	int	i;
	int	smaller;

	i = 0;
	smaller = 0;
	while (i < data->index_size)
	{
		if (data->index[index] > data->index[i])
			smaller++;
		i++;
	}
	return (smaller);
}

static int	*index_array(t_info *data)
{
	int	i;
	int	*array;

	array = ft_calloc(data->index_size, sizeof(int));
	if (!array)
		error();
	i = 0;
	while (i < data->index_size)
	{
		array[i] = get_lower_number(data, i);
		i++;
	}
	free(data->index);
	return (array);
}

void	init_array(t_info *data, char **av)
{
	fill_array(data, av);
	data->index = index_array(data);
	ft_free(av, get_number_of_arguments(av));
}
