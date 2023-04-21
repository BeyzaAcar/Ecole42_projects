/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacar <bacar@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:17:41 by bacar             #+#    #+#             */
/*   Updated: 2022/03/01 15:01:06 by bacar            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char				*ptr;
	unsigned int		i;
	unsigned int		length;

	ptr = src;
	length = 0;
	while (*ptr != '\0')
	{
		ptr ++;
		length++;
	}
	if (size < 1)
		return (length);
	i = 0;
	while (*src != '\0' && i < size - 1)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	*(dest) = '\0';
	return (length);
}
