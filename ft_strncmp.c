/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 04:25:16 by kmahdi            #+#    #+#             */
/*   Updated: 2022/10/27 21:51:08 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] && s2[i]) && i <= n - 1)
	{
		if ((unsigned char)s1[i] == (unsigned char)s2[i])
		i++;
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	if (i > n - 1)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
