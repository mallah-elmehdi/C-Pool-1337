#include <stdio.h>

int main(int argc, char *argv[])
{
	int i,j,k,a;
	char c;

	k = 1;
	j = 0;
	a = 1;

	while (k <= 9)
	{
		i=0;
		while (i < 9)
		{
			c = '1';
			if(argv[k][i]<= '9' && argv[k][i]>= '1')
			{
				printf("%c ", argv[k][i]);
			}

			else if(argv[k][i] == '.')
			{
				while(c <= '9')
				{
					while(j < 9)
					{
						if(argv[k][j] == c)
						{
							c++;
							j = 0;
						}
						else if (argv[k][j] != c)
						{
							j++;
						}
					}
					while(a < 9)
					{
						if(argv[a][i] == c)
						{
							c++;
							a = 0;
						}
						else if (argv[a][i] != c)
						{
							a++;
						}
					}
					argv[k][i]=c;
					printf("%c ", c);
					j = 0;
					c = '9' + 1;	
				}
			}	
			i++;
		}
		printf("\n");
		k++;
	}
	return 0;
}
