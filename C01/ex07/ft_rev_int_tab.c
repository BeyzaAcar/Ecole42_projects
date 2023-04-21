/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacar <bacar@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:24:08 by bacar             #+#    #+#             */
/*   Updated: 2022/02/22 13:40:00 by bacar            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	dongu;

	dongu = size / 2;
	i = 0;
	size--;
	while (dongu > 0)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		dongu--;
		i++;
		size--;
	}
}
