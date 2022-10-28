/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmahdi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:23:00 by kmahdi            #+#    #+#             */
/*   Updated: 2022/10/23 22:25:18 by kmahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n >= 0 && n < 10)
	{
		ft_putchar_fd((n + 48), fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			write (fd, "2147483648", 10);
		}
		else
		{
			n = -1 * n;
			ft_putnbr_fd(n, fd);
		}
	}
	else if (n >= 10)
	{
		ft_putnbr_fd (n / 10, fd);
		ft_putnbr_fd (n % 10, fd);
	}
}
