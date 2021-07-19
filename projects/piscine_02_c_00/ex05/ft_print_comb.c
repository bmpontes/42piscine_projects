/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:11:56 by bmarques          #+#    #+#             */
/*   Updated: 2021/07/07 14:26:10 by bmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_write1(int n1, int n2, int n3)
{
	if (n1 == n2 || n1 == n3 || n2 == n3 || n2 > n3 || n1 > n2)
	{
	}
	else
	{
		ft_write(n1);
		ft_write(n2);
		ft_write(n3);
		if (n1 == 55 && n2 == 56 && n3 == 57)
		{
		}
		else
		{
			ft_write(44);
			ft_write(32);
		}
	}
}

void	ft_loop(int n1, int n2, int n3)
{
	while (n1 < 57)
	{
		n1++;
		n2 = 47;
		while (n2 < 57)
		{
			n2++;
			n3 = 47;
			while (n3 < 57)
			{
				n3++;
				ft_write1(n1, n2, n3);
			}
		}
	}	
}

void	ft_print_comb(void)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = '/';
	n2 = '/';
	n3 = '/';
	ft_loop(n1, n2, n3);
}
