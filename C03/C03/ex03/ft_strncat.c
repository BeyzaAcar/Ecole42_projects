/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacar <bacar@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:10:19 by bacar             #+#    #+#             */
/*   Updated: 2022/02/28 18:47:05 by bacar            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	while (*src != '\0' && nb > 0)
	{
		dest[i] = *src;
		src++;
		i++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}
