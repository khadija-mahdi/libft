/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:33:35 by kmahdi            #+#    #+#             */
/*   Updated: 2022/10/27 21:44:45 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (*needle && len == 0)
		return (0);
	if (!*needle)
		return ((char *) haystack);
	while (*haystack && len >= ft_strlen(needle))
	{
		if (*haystack == *needle
			&& !ft_strncmp(haystack, needle, ft_strlen(needle)))
			return ((char *) haystack);
		haystack++;
		len--;
	}
	return (0);
}
