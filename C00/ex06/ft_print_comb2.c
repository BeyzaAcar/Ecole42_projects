/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacar <bacar@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 17:55:51 by bacar             #+#    #+#             */
/*   Updated: 2022/02/14 20:06:42 by bacar            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	kontrolyaz(int i, int j)
{
	char	ilk;
	char	ikinci;

	ilk = (i / 10) + '0';
	write(1, &ilk, 1);
	ikinci = (i % 10) + '0';
	write(1, &ikinci, 1);
	write(1, " ", 1);
	ilk = (j / 10) + '0';
	write(1, &ilk, 1);
	ikinci = (j % 10) + '0';
	write(1, &ikinci, 1);
	if (i == 98 && j == 99)
	{
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 99)
	{
		while (j < 99)
		{
			j++;
			kontrolyaz(i, j);
		}
		i++;
		j = i;
	}
}
