/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacar <bacar@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:49:41 by bacar             #+#    #+#             */
/*   Updated: 2022/02/15 13:28:07 by bacar            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_alphabet(void)
{	
	char	harf;

	harf = 'a';
	while (harf <= 'z')
	{
		write (1, &harf, 1);
		harf = harf + 1;
	}
}
