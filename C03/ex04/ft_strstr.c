/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bacar <bacar@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:32:06 by bacar             #+#    #+#             */
/*   Updated: 2022/03/01 12:00:03 by bacar            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	olcum(char *ptr)
{
	int	i;

	i = 0;
	while (ptr[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;
	int	len;

	len = olcum(to_find);
	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		k = i;
		while (str[i] == to_find[j] || to_find[j] == '\0')
		{
			if (to_find[j] == '\0')
				return (&str[i - len]);
			j++;
			i++;
		}
		i = k + 1;
	}
	return (0);
}
