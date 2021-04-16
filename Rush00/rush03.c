/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-paul <fde-paul@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 17:38:40 by fde-paul          #+#    #+#             */
/*   Updated: 2021/04/04 22:23:48 by fde-paul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	printer_x(int x, char front, char mid, char back)
{
	int counter_x;

	counter_x = 1;
	ft_putchar(front);
	while (counter_x < x - 1)
	{
		ft_putchar(mid);
		counter_x++;
	}
	if (x != 1)
	{
		ft_putchar(back);
	}
}

void	printer_mid(int x, char front, char mid, char back)
{
	int counter_x;

	counter_x = 1;
	ft_putchar(front);
	while (counter_x < x - 1)
	{
		ft_putchar(mid);
		counter_x++;
	}
	if (x != 1)
	{
		ft_putchar(back);
	}
}

void	rush(int x, int y)
{
	int counter_y;

	counter_y = 1;
	if (x > 0 && y > 0)
	{
		printer_x(x, 'A', 'B', 'C');
		ft_putchar('\n');
		while (counter_y < y - 1)
		{
			printer_mid(x, 'B', ' ', 'B');
			ft_putchar('\n');
			counter_y++;
		}
		if (y != 1)
		{
			printer_x(x, 'A', 'B', 'C');
			ft_putchar('\n');
		}
	}
}
