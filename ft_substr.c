/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 21:56:08 by kmahdi            #+#    #+#             */
/*   Updated: 2022/10/28 13:30:10 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*j;

	i = 0 ;
	if (start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	while (i < len && s[i])
		i++;
	j = malloc((i + 1) * sizeof(char));
	if (!j)
		return (NULL);
	i = 0;
	while (s[i + start] && i < len)
	{
		j[i] = s[start + i];
		i++;
	}
	j[i] = '\0';
	return (j);
}
