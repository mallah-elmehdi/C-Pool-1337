/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 17:05:17 by emallah           #+#    #+#             */
/*   Updated: 2019/04/20 16:08:57 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

void	c_condition(char a, char b, char c)
{
	while (c <= '9')
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		if (a != '7')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		c++;
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '0';
	c = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			c_condition(a, b, c);
			b++;
		}
		a++;
	}
}
int main()
{
	ft_print_comb();
	return 0;
}
