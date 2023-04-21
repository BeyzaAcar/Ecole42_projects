/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacar <bacar@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:58:22 by bacar             #+#    #+#             */
/*   Updated: 2022/03/01 16:40:04 by bacar            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	*ptr;
	char	*tmp;

	ptr = str;
	if (*ptr <= 'z' && *ptr >= 'a')
		*ptr = *ptr + ('A' - 'a');
	ptr++;
	while (*ptr != '\0')
	{
		tmp = ptr - 1;
		if ((*tmp <= 'z' && *tmp >= 'a') || (*tmp <= 'Z' && *tmp >= 'A'))
		{
			if (*ptr >= 'A' && *ptr <= 'Z')
				*ptr = *ptr - ('A' - 'a');
		}
		else if ((*ptr <= 'z' && *ptr >= 'a') && !(*tmp <= '9' && *tmp >= '0'))
			*ptr = *ptr + ('A' - 'a');
		ptr++;
	}
	return (str);
}
