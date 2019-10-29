#include <unistd.h>
void fr_putchar(char a)
{
	write(1, &a,1);
}
void fr_print_alphabet(void)
{
	char a;
	a ='a';
	int i;
	i=1;
	while(i<=26)
		{
			fr_putchar(a);
			i++;
			a++;
		}
}

int main()
{
	fr_print_alphabet();
	return 0 ;
}
