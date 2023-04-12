#include<stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] == to_find[j] )
		{
			if (to_find[j] == '\0')
				return (to_find);
			j++;
			i++;
		}
		i++;
	}
}
 int main(){
 char str[123] = "jdfhgtttrakya";
 char to_find[12] = "trakya";
 printf("%s", ft_strstr(str, to_find));
 return 0;
 }
