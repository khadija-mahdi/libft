/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:45:29 by kmahdi            #+#    #+#             */
/*   Updated: 2022/10/29 13:16:05 by kmahdi           ###   ########.fr       */
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

char **free_stuff(char ** k)
{
	int i;

	i = 0;
	while (k[i])
	{
		free(k[i]);
		k[i] = NULL;
		i++;
	}
	free(k);
	k = NULL;
	return (k);
	
}
char	**ft_split(char const *s, char c)
{
	int		i;
	char	**k;

	if (!s)
		return (NULL);
	k = malloc((ft_words_count(s, c) + 1) * (sizeof(char *)));
	if (!k)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			k[i++] = ft_substr(s, 0, get_world_len(s, c));
			if (!k)
				return(free_stuff(k));
			s += get_world_len(s, c);
		}
	}
	k[i] = 0;
	return (k);
}
