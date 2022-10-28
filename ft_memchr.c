/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 06:12:54 by kmahdi            #+#    #+#             */
/*   Updated: 2022/10/27 21:42:59 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*h;

	h = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (h[i] == (unsigned char )c && i < n)
		{
			return (h + i);
		}
		i++;
	}
	return (0);
}
