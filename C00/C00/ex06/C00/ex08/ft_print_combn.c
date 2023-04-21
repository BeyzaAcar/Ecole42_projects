/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacar <bacar@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:12:39 by bacar             #+#    #+#             */
/*   Updated: 2022/02/13 14:57:33 by bacar            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	yazdir(int olusan, int n)
{
	int		basamak;
	int		cep;
	char	yazdir;

	basamak = 1;
	while (n - 3 > 0)
	{
		basamak = basamak * 10;
		n--;
	}

	cep = n;
	while (n > 1)
	{
		yazdir = ((olusan / basamak) % 10) + '0';
		write(1, &yazdir, 1);
		n--;
		basamak = basamak / 10;
	}
}

int	olustur(int n)
{
	int	dizi[10];
	int basamak;
	int sayi;
	int olusan;

	olusan = 0;
	sayi = n;
	basamak = 1;
	while (n > 1)
	{
		dizi[n-2] = n - 1;
		n--;
	}
	while(sayi > 1)
	{
		olusan = olusan + dizi[sayi-2] * basamak;
		basamak = basamak * 10;
		sayi--;
	}
	return (olusan);
}

int	kontrol(int sayi, int n)
{
	int	basamak;
	int	dizi[10];
	int	i;
	int sayac;

	sayac = 0;
	basamak = 1;
	i = n-2;
	while (n > 1)
	{
		dizi[n-2] = (sayi / basamak) % 10;
		basamak = basamak * 10;
		n--;
	}
	while (i > 0)
	{
		if (dizi[i] > dizi[i-1])
		sayac++;
		i--;	
	}
	return (sayac);
}

void ft_print_combn(int n)
{
	int 	olusan;
	int 	i;
	char	ilk;

	olusan = olustur(n);
		if (kontrol(olusan, n) == n - 2)
		{
			yazdir(olusan, n);
			write(1, " ", 1);
		}
	olusan++;
}

int	main(void)
{
	ft_print_combn(5);
	return(0);
}
