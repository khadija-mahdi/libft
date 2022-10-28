/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:53:13 by kmahdi            #+#    #+#             */
/*   Updated: 2022/10/27 21:44:56 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;

	if (!s1)
		return (0);
	if (!set)
		return ((char *)s1);
	if (!*s1)
		return (ft_calloc(1, 1));
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	end = ft_strlen(s1) - 1;
	while (s1[end] && ft_strrchr(set, s1[end]))
		end--;
	return (ft_substr(s1, 0, end + 1));
}
