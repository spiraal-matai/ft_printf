/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabderra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:18:16 by zabderra          #+#    #+#             */
/*   Updated: 2021/11/03 12:18:19 by zabderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ptr_d;
	char	*ptr_s;
	size_t	i;

	ptr_d = (char *)dst;
	ptr_s = (char *)src;
	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		*(ptr_d + i) = *(ptr_s + i);
		i++;
	}
	return (dst);
}
