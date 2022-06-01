/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrpere <gabrpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:38:19 by gabrpere          #+#    #+#             */
/*   Updated: 2022/02/17 18:34:20 by gabrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	x;

	x = 2;
	if (nb == 2)
		return (1);
	if (nb <= 1)
		return (0);
	while (nb % x != 0)
	{
		x++;
		if (x == nb)
			return (1);
	}
	return (0);
}
