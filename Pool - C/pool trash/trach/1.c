#include <unistd.h>

void top(int *a)
{
	*a = 10;
}

int main()
{
	int a;
	a = 15;
	top(&a);
	write(1, &a,2);
	return 0;
}
