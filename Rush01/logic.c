/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 21:43:50 by akenji-a          #+#    #+#             */
/*   Updated: 2021/04/12 01:08:16 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char matriz[4][4];

void	print_vector()
{
	char mat;
	int x;
	int y;

	x = 0;
	y = 0;
	while (x < 4)
	{
		y = 0;
			while (y < 4)
			{
				mat = matriz[x][y];
				write(1, &mat, 1);
				y++;
			}
		write(1, "\n", 1);
		x++;
	}
}

int		ft_logic(char numbers[16])
{
	int c;

	int total;
	c = 0;
	while (c < 4)
	{	//verificar números inválidos
		total = numbers[c] + numbers[4 + c] - 96;
		if (total == 2 || total == 6 || total == 7 || total == 8)	
			return (1);
		total = numbers[8 + c] + numbers[12 + c] - 96;
		if (total == 2 || total == 6 || total == 7 || total == 8)	
			return (1);
		c++;
	}
	c = 0;
	while (c < 4) //verificar se a linha ou coluna é 4, preencher com 1234
	{
		if (numbers[c] == '4')
		{
			matriz[0][c] = '1';
			matriz[1][c] = '2';
			matriz[2][c] = '3';
			matriz[3][c] = '4';
		}
		if (numbers[4 + c] == '4')
		{
			matriz[3][c] = '1';
			matriz[2][c] = '2';
			matriz[1][c] = '3';
			matriz[0][c] = '4';
		}
		if (numbers[8 + c] == '4')
		{
			matriz[c][0] = '1';
			matriz[c][1] = '2';
			matriz[c][2] = '3';
			matriz[c][3] = '4';
		}
		if (numbers[12 + c] == '4')
		{
			matriz[c][3] = '1';
			matriz[c][2] = '2';
			matriz[c][1] = '3';
			matriz[c][0] = '4';
		}
		c++;
	}
	c = 0;
	while (c < 4) //verifica se o number[] for 1, atribui o 4 para matriz mais proxima
	{
		if (numbers[c] == '1')
			matriz[0][c] = '4';
		if (numbers[c + 4] == '1')
			matriz[3][c] = '4';
		if (numbers[c + 8] == '1')
			matriz[c][0] = '4';
		if (numbers[c + 12] == '1')
			matriz[0][c] = '4';
		c++;
	}

	//Validações com números diferentes
	
	print_vector();
	return (0);
}
