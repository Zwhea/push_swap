/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:43:57 by wangthea          #+#    #+#             */
/*   Updated: 2022/12/19 18:04:34 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_parsing_join(char **av)
{
	int		i;
	char	*new_av;

	i = 0;
	new_av = NULL;
	while (av[i])
	{
		new_av = ft_strjoin(new_av, av[i]);
		i++;
	}
	return (new_av);
}

char	**reform(char **av)
{
	char	*arguments;
	char	**new_av;

	arguments = ft_parsing_join(av);
	new_av = ft_split(arguments, ' ');
	free(arguments);
	if (!new_av)
		ft_error();
	return (new_av);
}
