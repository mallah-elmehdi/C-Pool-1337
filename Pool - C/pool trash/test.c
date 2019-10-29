#include <stdio.h>
#include <string.h>


char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int a;

	i = 0;
	while (str[i] != 0)
	{
		j = 0;
		if(str[i] == to_find[j])
		{
			a = i;
			while (str[i+1] == to_find[j+1])
			{
				if ((str[i+2] != to_find[j+2]) && (to_find[j + 2] != 0))
					break ;
				i++;
				j++;
			}
			if (to_find[j + 1] == 0)
				return (&str[a]);
		}
		i++;
	}
	return(0);
}

int main()
{
	char s0[] = "moaad labhairi";
	char s1[] = "bhaii";
	printf("%s\n", ft_strstr(s0, s1));
	char s2[] = "moaad labhairi";
	char s3[] = "bhaii";
	printf("%s", strstr(s2, s3));
}
