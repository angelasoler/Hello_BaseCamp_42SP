/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apatrici <apatrici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:05:18 by apatrici          #+#    #+#             */
/*   Updated: 2021/04/12 19:31:39 by apatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int first;
	int second;

	first = -1;
	while (first++ < 98)
	{
		second = first;
		while (second++ < 99)
		{
			ft_putchar(first / 10 + '0');
			ft_putchar(first % 10 + '0');
			ft_putchar(' ');
			ft_putchar(second / 10 + '0');
			ft_putchar(second % 10 + '0');
			if (first != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
