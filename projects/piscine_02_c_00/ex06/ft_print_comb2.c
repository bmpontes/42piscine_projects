/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 20:49:59 by bmarques          #+#    #+#             */
/*   Updated: 2021/07/07 14:22:21 by bmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (b <= 98)
	{
		a = b + 1;
		while (a <= 99)
		{
			ft_write(b / 10 + 48);
			ft_write(b % 10 + 48);
			ft_write(32);
			ft_write(a / 10 + 48);
			ft_write(a % 10 + 48);
			if (b < 98)
			{
				ft_write(44);
				ft_write(32);
			}
			a++;
		}
		b++;
	}
}
