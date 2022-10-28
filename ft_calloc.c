/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 03:37:09 by kmahdi            #+#    #+#             */
/*   Updated: 2022/10/27 22:08:12 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

	if (count && size > SIZE_MAX)
		return (0);
	s = malloc(count * size);
	if (!s)
		return (NULL);
	ft_bzero (s, count * size);
	return (s);
}
