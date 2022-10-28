/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:00:14 by kmahdi            #+#    #+#             */
/*   Updated: 2022/10/27 21:50:21 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*j;

	j = (char *)s;
	i = 0;
	while (j[i])
	{
		if (j[i] == (char)c)
		{
			return (j + i);
		}
		i++;
	}
	if ((char) c == '\0')
		return (j + i);
	return (0);
}
