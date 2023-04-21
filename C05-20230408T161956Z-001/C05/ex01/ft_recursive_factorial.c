/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacar <bacar@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:36:05 by bacar             #+#    #+#             */
/*   Updated: 2022/03/01 18:56:29 by bacar            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb > 0)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (1);
}

int main()
{
	printf("%d", ft_recursive_factorial(5));
	return 0;
}	
