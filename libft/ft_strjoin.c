/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:58:30 by twang             #+#    #+#             */
/*   Updated: 2022/12/21 11:25:58 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*s_join;
	int		i;
	int		j;

	s_join = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 2, sizeof(char));
	if (!s_join)
		return (NULL);
	i = -1;
	j = 0;
	if (s1)
		while (s1[++i])
			s_join[i] = s1[i];
	s_join[i] = ' ';
	i++;
	if (s2)
		while (s2[j])
			s_join[i++] = s2[j++];
	free(s1);
	return (s_join);
}
