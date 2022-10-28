/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <kmahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:46:06 by kmahdi            #+#    #+#             */
/*   Updated: 2022/10/27 21:52:22 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_nub_len(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nbr;
	char	*result;
	int		total_len;

	nbr = n;
	total_len = get_nub_len(nbr);
	result = (char *) malloc(sizeof(char) * (total_len + 1));
	if (!result)
		return (0);
	result[total_len--] = 0;
	if (nbr == 0)
		result[0] = '0';
	if (nbr < 0)
	{
		result[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		result[total_len--] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (result);
}
