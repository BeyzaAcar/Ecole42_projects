/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacar <bacar@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:49:07 by bacar             #+#    #+#             */
/*   Updated: 2022/03/01 17:52:05 by bacar            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	eksi(int n)
{
	int	sonuc;

	sonuc = n;
	if (n == -2147483648)
	{
		write(1, "-2", 2);
		n = 147483648;
		sonuc = n;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		sonuc = n * (-1);
	}
	return (sonuc);
}

void	ft_putnbr(int nb)
{
	char		num;
	int			sayi;
	int			i;
	long int	basamak;

	nb = eksi(nb);
	basamak = 10;
	i = 1;
	sayi = nb;
	while (sayi / 10 != 0)
	{
		i++;
		sayi = sayi / 10;
		basamak = basamak * 10;
	}
	basamak = basamak / 10;
	while (i > 0)
	{
		num = '0' + (nb / basamak) % 10;
		write(1, &num, 1);
		basamak = basamak / 10;
		i--;
	}
}
