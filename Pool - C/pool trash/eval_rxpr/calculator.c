#include <stdlib.h>
#include <stdio.h>

unsigned int tab_size(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
		while (str[i] == ' ')
		{
			i++;
		}
	}
	return (i);
}

int		*ft_ctoi(char *str)
{
	int size;
	int i;
	int *tabint;
	int supa10;
	int j;

	size = tab_size(str);
	tabint = (int*) malloc(size * sizeof(int));
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		supa10 = 0;
		if (str[i] >= 48 && str[i] <= 57)
		{
			if (str[i + 1] >= 48 && str[i + 1] <= 57)
			{
				while (str[i+1] >= 48 && str[i+1] <= 57)
				{
					supa10 = (supa10*10) + ((str[i]-48)*10);
					i++;
				}
				tabint[j] = supa10 + (str[i]-48);
				j++;
				i++;
			}
			else
			{
				tabint[j] = str[i] - 48;
				j++;
				i++;
			}
		}
		else
		{
			tabint[j] = 0;
			i++;
			j++;
		}
	}
	return(tabint);
}

char *tab_char(char *str)
{
	int size;
	int i;
	int j;
	char *tabchar;

	size = tab_size(str);
	tabchar = (char*) malloc(size * sizeof(char));
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			
			tabchar[j] = str[i];
			i++;
			j++;
		}
		else
		{
			if (str[i+1] >= 48 && str[i+1] <= 57)
			{
				i++;
				j++;
			}
			else
			{
				tabchar[j] = '.';
				i++;
				j++;
			}
		}
	}
	return (tabchar);
}

/*

int cal(int *tabint, char *tabchar)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tabchar[i] != 0)
	{
		while (tabchar[i] != ')')
		{
			++i;
			if (tabchar[i] == ')')
			{
				j = i;
				while (tabchar[j] != '(')
				{
					--j;
					if (tabchar[j] == '(')
					{
						if (tabchar[j + 2] == '+')
							 return (tabint[j + 1] + tabint[i - 1]);
						else if (tabchar[j + 2] == '-')
							return (tabint[j + 1] - tabint[i - 1]);
						else if (tabchar[j + 2] == '*')
							return (tabint[j + 1] * tabint[i - 1]);
						else if (tabchar[j + 2] == '/')
							return (tabint[j + 1] / tabint[i - 1]);
						else if (tabchar[j + 2] == '%')
							return (tabint[j + 1] % tabint[i - 1]);
					}
				}
			}
		}
	}
	return 0;
}
*/

int main()
{
	unsigned long  j = 0;
	int *tabint;
	char *tabchar;
	char str[] = "3 + 42 * (1 - 2 / (3 + 4) - 1 % 21) + 1";
	
	tabint = ft_ctoi(str);
	tabchar = tab_char(str);
	while(j < tab_size(str) - 2)
	{
		printf("%d ",tabint[j]);
		j++;
	}
	printf("\n");
	printf("%s", tabchar);
	printf("\n");
	//printf("%d", cal(tabint, tabchar));
}







