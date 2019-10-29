#include <unistd.h>
void ft_putchar(char a)
{
	write(1, &a,1);
}

void test(int x,int y)
{
	int i,j;
	i=1;
	while(i<=y)
	{
		j=1;
		while(j<=x)
		{
			if(i==1)
			{
				if(j==1)
				{	
					ft_putchar('A');
				}
				else if(j==(x))
				{
					ft_putchar('C');
					ft_putchar('\n');
				}
				else
				{
					ft_putchar('B');
				}
		
			}	
			else if(i==y)
			{
				if(j==1)
				{
					ft_putchar('C');
				}
				else if(j==x)
				{
					ft_putchar('A');
					ft_putchar('\n');
				}
				else
				{
					ft_putchar('B');
				}
			}
			else
			{
				if(j==1)
				{
					ft_putchar('B');
				}
				else if(j==x)
				{
					ft_putchar('B');
					ft_putchar('\n');
				}
				else
				{
					ft_putchar(' ');
				}
			}
			j++;
		
		}
		i++;
	}	
}


int main()
{
	test(5,1);
	return 0;
}
