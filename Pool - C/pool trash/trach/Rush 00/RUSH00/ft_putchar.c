#include <unistd.h>
void ft_putchar(char a)
{
	write(1, &a,1);
}

void ruch(int x, int y)
{
	int i,j,k ;
	i = 0;
	while(i<=(y-1))
	{
		
		if(i == 0 || i == (y-1))
		{
			j=0;
				while(j<x)
			{
				if(j==0)
				{
					ft_putchar('o');
				}
				else if(j==(x-1))
				{
					ft_putchar('o');
					ft_putchar('\n');
				}
				else
				{
					ft_putchar('-');
				}
				j++;
			}
		}	
		else
		{
			k=0;
			while(k<x)
			{
				if(k==0)
				{
					ft_putchar('|');
				}
				else if(k==(x-1))
				{
					ft_putchar('|');
					ft_putchar('\n');
				}
				else
				{
					ft_putchar(' ');
				}
				k++;
			}
		}
			
		i++;

	}	
}

int main()
{
	ruch(1,5);
	return 0;
}
