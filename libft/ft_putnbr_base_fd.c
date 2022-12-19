/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:32:37 by twang             #+#    #+#             */
/*   Updated: 2022/11/24 11:01:21 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putnbr_base(unsigned long nbr, char *base)
{
	size_t				base_size;
	size_t				size;

	base_size = ft_strlen(base);
	size = 0;
	if (nbr >= 0 && nbr < base_size)
		size += ft_putchar_fd(base[nbr], 1);
	else
	{
		size += ft_putnbr_base(nbr / base_size, base);
		size += ft_putchar_fd(base[nbr % base_size], 1);
	}
	return (size);
}
