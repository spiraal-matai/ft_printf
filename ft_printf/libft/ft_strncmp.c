/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabderra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:27:51 by zabderra          #+#    #+#             */
/*   Updated: 2021/11/03 12:27:59 by zabderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		dif;

	i = 0;
	while (i < n && (*(s1 + i) || *(s2 + i)))
	{
		dif = *((unsigned char *)s1 + i) - *((unsigned char *)s2 + i);
		if (dif)
			return (dif);
		i++;
	}
	return (0);
}
