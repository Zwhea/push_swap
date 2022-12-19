/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reformat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosca <mmosca@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:55:02 by mmosca            #+#    #+#             */
/*   Updated: 2022/12/17 01:41:36 by mmosca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*get_str_formatted_for_split(char **args)
{
	char		*str;
	uint32_t	i;
	uint32_t	j;
	uint32_t	size;

	size = get_number_of_arguments(args);
	i = get_number_of_arguments(args);
	while (i--)
		size += ft_strlen(args[i]);
	str = ft_calloc(size + 1, sizeof(char));
	if (!str)
		error();
	i = 0;
	j = 0;
	while (args[i])
	{
		size = ft_strlen(args[i]);
		ft_memmove(&str[j], args[i], size);
		j += size;
		str[j++] = ' ';
		i++;
	}
	return (str);
}

char	**reformat(char **args)
{
	char	*str;
	char	**s;

	str = get_str_formatted_for_split(args);
	s = ft_split(str, ' ');
	free(str);
	if (!s)
		error();
	return (s);
}
