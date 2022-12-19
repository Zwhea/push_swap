/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:58:30 by twang             #+#    #+#             */
/*   Updated: 2022/12/19 23:17:08 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s_join;
	size_t	i;
	size_t	j;

	if (!s1 && !s2)
		return (NULL);
	s_join = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 2, sizeof(char));
	if (!s_join)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		s_join[i] = s1[i];
		i++;
	}
	while (s2[j])
		s_join[i++] = s2[j++];
	s_join[i + j] = ' ';
	return (s_join);
}
