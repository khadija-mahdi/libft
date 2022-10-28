/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 21:23:02 by kmahdi            #+#    #+#             */
/*   Updated: 2022/10/27 21:50:28 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dst;

	len = ft_strlen(s1) + 1;
	dst = malloc(len * sizeof(char));
	if (!dst)
		return (NULL);
	ft_memcpy(dst, s1, len);
	return (dst);
}
