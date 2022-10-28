/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 06:52:45 by kmahdi            #+#    #+#             */
/*   Updated: 2022/10/27 21:49:01 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*j;
	unsigned char	*k;

	i = 0;
	j = (unsigned char *)s1;
	k = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((j[i]) == (k[i]) && (i < n - 1))
		i++;
	return (j[i] - k[i]);
}
