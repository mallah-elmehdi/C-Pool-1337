/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 12:36:48 by emallah           #+#    #+#             */
/*   Updated: 2019/04/20 13:18:15 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		i_vr(int j)
{
	int		i;

	i = (((j / 100) - ((j / 1000) * 10)) * 10);
	return (i);
}

void	print_char(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;
	int		j;

	j = 0;
	while (j <= 9899)
	{
		a = '0' + (j / 1000);
		b = '0' + (j / 100) - ((j / 1000) * 10);
		c = '0' + (j / 10) - ((j / 1000) * 100) - i_vr(j);
		d = '0' + j - ((j / 10) * 10);
		if ((j / 100) < (j - ((j / 100) * 100)))
		{
			print_char(a, b, c, d);
			if (j != 9899)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		j++;
	}
}
