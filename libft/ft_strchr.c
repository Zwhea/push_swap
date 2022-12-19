/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:03:59 by twang             #+#    #+#             */
/*   Updated: 2022/11/14 10:53:22 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	c2;

	i = 0;
	c2 = (char) c;
	while (s[i] && s[i] != c2)
		i++;
	if (s[i] == c2)
		return ((char *) &s[i]);
	return (NULL);
}