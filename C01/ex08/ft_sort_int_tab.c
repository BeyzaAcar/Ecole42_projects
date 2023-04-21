/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacar <bacar@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:39:08 by bacar             #+#    #+#             */
/*   Updated: 2022/02/22 14:02:50 by bacar            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	tut;
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < size - 1)
	{
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tut = tab[i];
				tab [i] = tab[j];
				tab[j] = tut;
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}
