/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 22:58:24 by kmahdi            #+#    #+#             */
/*   Updated: 2022/10/27 21:49:22 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int				i;

	if (src == 0 && dst == 0)
		return (0);
	if (src == dst)
		return (dst);
	if (dst > src)
	{
		i = len - 1;
		while (i >= 0)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		ft_memcpy((unsigned char *)dst, (unsigned char *)src, len);
	}	
	return (dst);
}
