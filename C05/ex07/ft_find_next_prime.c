/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabrpere <gabrpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:18:40 by gabrpere          #+#    #+#             */
/*   Updated: 2022/02/18 18:28:12 by gabrpere         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	x;

	x = 2;
	if (nb < 3)
		return (2);
	if (nb % x == 0)
		nb++;
	while (!ft_is_prime(nb))
		nb += x;
	return (nb);
}
