/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacar <bacar@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:16:44 by bacar             #+#    #+#             */
/*   Updated: 2022/03/01 17:32:29 by bacar            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	yazdir(char *ptr)
{
	char	a;
	int		melike;

	melike = 92;
	a = (*ptr) / 16 + '0';
	write(1, &melike, 1);
	write(1, &a, 1);
	if ((*ptr) % 16 >= 10)
	{
		a = ((*ptr) % 16) - 10 + 'a';
		write(1, &a, 1);
	}
	else
	{
		a = ((*ptr) % 16) + '0';
		write(1, &a, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	while ((*str) != '\0')
	{
		if (*str < 32)
		{
			yazdir(str);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
}
