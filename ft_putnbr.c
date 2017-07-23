/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmulish <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 14:38:45 by dmulish           #+#    #+#             */
/*   Updated: 2017/02/27 17:09:43 by dmulish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr(int n)
{
	char		c;
	long int	n1;

	n1 = n;
	if (n1 < 0)
	{
		write(1, "-", 1);
		n1 *= -1;
	}
	if (n1 > 9)
		ft_putnbr(n1 / 10);
	c = n1 % 10 + '0';
	write(1, &c, 1);
}
