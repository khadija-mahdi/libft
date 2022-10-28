/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:45:29 by kmahdi            #+#    #+#             */
/*   Updated: 2022/10/27 21:50:08 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_words_count(const char *s, char c)
{
	size_t	i;
	int		len;

	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			len++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (len);
}

int	get_world_len(char const *sm, char c)
{
	int	len;

	len = 0;
	while (sm[len] && sm[len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		index;
	char	**k;

	if (!s)
		return (NULL);
	k = malloc((ft_words_count(s, c) + 1) * (sizeof(char *)));
	if (!k)
		return (NULL);
	index = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			k[index] = ft_substr(s, 0, get_world_len(s, c));
			index++;
			s += get_world_len(s, c);
		}
	}
	k[index] = 0;
	return (k);
}
