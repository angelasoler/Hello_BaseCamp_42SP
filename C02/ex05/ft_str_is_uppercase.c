/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apatrici <apatrici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:56:29 by apatrici          #+#    #+#             */
/*   Updated: 2021/04/16 03:47:32 by apatrici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int s;

	s = 0;
	while (str[s] != '\0')
	{
		if (!(str[s] >= 65 && str[s] <= 90))
		{
			return (0);
		}
		s++;
	}
	return (1);
}
