/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyamaza <soyamaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:59:28 by soyamaza          #+#    #+#             */
/*   Updated: 2023/08/17 19:06:23 by soyamaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long n)
{
	char	c;
	long	num;
	int		len;

	len = 0;
	num = n;
	if (num < 0)
	{
		num *= -1;
		len++;
		write(1, "-", 1);
	}
	c = num % 10 + '0';
	if (num < 10)
		write(1, &c, 1);
	else
	{
		len += ft_putnbr(num / 10);
		write(1, &c, 1);
	}
	return (1 + len);
}
