/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:42:12 by kmahdi            #+#    #+#             */
/*   Updated: 2022/10/28 11:37:51 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (!dst && !dstsize)
		return (ft_strlen(src));
	i = 0;
	j = ft_strlen(dst);
	k = j;
	if (dstsize <= j)
		return (ft_strlen(src) + dstsize);
	while (src[i] && i < dstsize - k - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (k + ft_strlen(src));
}
