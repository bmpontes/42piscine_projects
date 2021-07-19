/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 10:59:29 by bmarques          #+#    #+#             */
/*   Updated: 2021/07/04 11:05:02 by bmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	N;
	char	P;

	N = 'N';
	P = 'P';
	if (n < 0)
	{
		write (1, &N, 1);
	}
	else
	{
		write (1, &P, 1);
	}
}
