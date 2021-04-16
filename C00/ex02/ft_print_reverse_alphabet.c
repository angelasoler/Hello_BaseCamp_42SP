/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apatrici <apatrici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 11:48:24 by apatrici          #+#    #+#             */
/*   Updated: 2021/04/12 17:27:11 by apatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char r;

	r = 122;
	while (r >= 97)
	{
		write(1, &r, 1);
		r--;
	}
}
