/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacar <bacar@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:08:43 by bacar             #+#    #+#             */
/*   Updated: 2022/02/13 17:38:08 by bacar            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	yazdir(char i, char j, char k);

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				yazdir(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

void	yazdir(char i, char j, char k)
{
	char	virgul;
	char	bosluk;

	bosluk = ' ';
	virgul = ',';
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
	if (i != '7')
	{
		write(1, &virgul, 1);
		write(1, &bosluk, 1);
	}
}
