/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 18:10:49 by emallah           #+#    #+#             */
/*   Updated: 2019/04/16 00:15:31 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

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
	j = 1;
	while (a <= '9')
	{
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
			while (c <= '9')
			{
				while(d <= '9')
				{
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(' ');
					ft_putchar(c);
					ft_putchar(d);
					ft_putchar(',');
					ft_putchar(' ');
					d++;
				}
				if (d > '9')
				{
					d = '0';
				}
				c++;
			}
			if (c > '9')
			{
				c = '0';
			}
			b++;
		}
	
		if (b > '9')
		{
			b = '0';
		}
		a++;
	}
}
