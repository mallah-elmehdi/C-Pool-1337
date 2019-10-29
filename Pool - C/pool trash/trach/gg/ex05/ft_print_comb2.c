/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 18:10:49 by emallah           #+#    #+#             */
/*   Updated: 2019/04/17 10:32:23 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int		ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

void	print_o(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
	if ((a != '9') || (b != '8') || (c != '9') || (d != '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	c_condition(char a, char b, char c, char d)
{
	while (c <= '9')
	{
		while (d <= '9')
		{
			print_o(a, b, c, d);
			d++;
		}
		if (d > '9')
		{
			d = '0';
		}
		c++;
	}
}

void	ifc(char c)
{
	if (c > '9')
	{
		c = '0';
	}
}

void	b_condition(char a, char b, char c, char d)
{
	int		j;

	j = 1;
	while (b <= '9')
	{
		if (b == '9')
		{
			d = '0';
			c = c + j;
			j++;
		}
		else if (b == '0')
		{
			d = '1';
			c = a;
		}
		else if (b > '0' || b < '9')
		{
			d = b + 1;
			c = a;
		}
		c_condition(a, b, c, d);
		ifc(c);
		b++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;
	int		j;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	while (a <= '9')
	{
		b_condition(a, b, c, d);
		if (b > '9')
		{
			b = '0';
		}
		a++;
	}
}
int main()
{
	ft_print_comb2();
	return 0;
}
