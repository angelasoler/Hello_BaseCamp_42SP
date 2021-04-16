/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akenji-a <akenji-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 18:13:47 by akenji-a          #+#    #+#             */
/*   Updated: 2021/04/12 01:10:14 by akenji-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_logic (char numbers[16]);

int		ft_valid(char *argv)
{
	int		c1;
	int		c2;
	char	numbers[16];
	int		valid_number;
	int		valid_next;
	int		success;

	c1 = 0;
	c2 = 0;
	while (argv[c1] != '\0')
	{
		valid_number = argv[c1] >= '1' && argv[c1] <= '4';
		valid_next = argv[c1 + 1] == ' ' || argv[c1 + 1] == '\0';
		if ((valid_number && valid_next) || argv[c1] == ' ')
		{
			if (argv[c1] != ' ')
			{
				numbers[c2] = argv[c1];
				c2++;
			}
		}
		else
			return (1);
		c1++;
	}
	if (c2 != 16)
		return (1);
	else
		success = ft_logic(numbers);
	if (success == 1)
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	int success;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	success = ft_valid(argv[1]);
	if (success == 1)
		write(1, "Error\n", 6);
	return (0);
}
