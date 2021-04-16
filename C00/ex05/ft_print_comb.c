/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apatrici <apatrici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 14:57:22 by apatrici          #+#    #+#             */
/*   Updated: 2021/04/12 15:22:21 by apatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int first;
	int second;
	int third;

	first = -1;
	while (first++ < 7)
	{
		second = first;
		while (second++ < 8)
		{
			third = second;
			while (third++ < 9)
			{
				ft_putchar(first + '0');
				ft_putchar(second + '0');
				ft_putchar(third + '0');
				if (first != 7)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
