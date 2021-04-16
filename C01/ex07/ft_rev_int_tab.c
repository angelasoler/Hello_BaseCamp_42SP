/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apatrici <apatrici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:59:43 by apatrici          #+#    #+#             */
/*   Updated: 2021/04/14 18:39:17 by apatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int primeira;
	int ultima;
	int temp;

	ultima = size - 1;
	primeira = 0;
	while (primeira <= ultima)
	{
		temp = tab[primeira];
		tab[primeira] = tab[ultima];
		tab[ultima] = temp;
		ultima--;
		primeira++;
	}
}
