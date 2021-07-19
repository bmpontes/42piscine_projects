/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 09:46:29 by bmarques          #+#    #+#             */
/*   Updated: 2021/07/07 14:31:54 by bmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_alphabet(void)
{
	char	letter;

	letter = 97;
	while (letter != 123)
	{
		write(1, &letter, 1);
		letter++;
	}
}
