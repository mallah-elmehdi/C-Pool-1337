/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 18:03:17 by emallah           #+#    #+#             */
/*   Updated: 2019/04/17 15:47:56 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int		ft_putchar(char c)
{
	write(1, &c,1);
	return 0;
}

void	print_o(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
}

void	end_of_line(char a)
{
	if (a != '7')
	{
		ft_putchar(' ');
		ft_putchar(',');
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;
	int		k;

	k = 7;
	a = '0';
	b = '1';
	c = '2';
	while (k >= 0)
	{
		while (c <= '9')
		{
			print_o(a, b, c);
			end_of_line(a);
			c++;
		}
		k--;
		a++;
		b++;
		c = c - k - 1;
	}
}

int main()
{
	ft_print_comb();
	return 0;
}
