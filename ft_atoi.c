/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:08:35 by kmahdi            #+#    #+#             */
/*   Updated: 2022/10/27 22:28:05 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<limits.h>
#include "libft.h"

int	count(const char *str, int sym)
{
	unsigned long long	res;

	res = 0;
	while (ft_isdigit(*str))
	{
		res = 10 * res + (*str - '0');
		if (res > LLONG_MAX && sym == 1)
			return (-1);
		if (res > LLONG_MAX && sym == -1)
			return (0);
		str++;
	}
	return (res * sym);
}

int	ft_atoi(const char *str)
{
	int					sym;

	sym = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f'
		|| *str == '\r' || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sym *= (-1);
		str++;
	}
	return (count(str, sym));
}
