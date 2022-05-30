/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrpere <gabrpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:42:34 by gabrpere          #+#    #+#             */
/*   Updated: 2022/02/18 18:15:53 by gabrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_positive(int nb)
{
	write(1, "-", 1);
	if (nb == -2147483648)
	{
		write(1, "2", 1);
		nb = -147483648;
	}
	return (nb - nb - nb);
}

void	ft_putnbr(int nb)
{
	char	number;

	if (nb == 2147483647)
	{
		write(1, "2", 1);
		nb = 147483647;
	}
	if (nb < 0)
	{
		nb = ft_positive(nb);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		number = (nb % 10) + '0';
		write(1, &number, 1);
	}
	else
	{
		number = nb + '0';
		write(1, &number, 1);
	}
}
