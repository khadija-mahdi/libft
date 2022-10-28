/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 00:58:54 by kmahdi            #+#    #+#             */
/*   Updated: 2022/10/27 21:51:18 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len ;

	len = ft_strlen(s) - 1;
	while (len >= 0)
	{
		if (*((char *)(s + len)) == (char )c)
		{
			return ((char *)(s + len));
		}
		len--;
	}
	len = ft_strlen(s);
	if ((char) c == '\0')
		return ((char *)(s + len));
	return (0);
}
