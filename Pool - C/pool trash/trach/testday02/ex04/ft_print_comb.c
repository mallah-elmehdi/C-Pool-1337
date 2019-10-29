/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 18:03:17 by emallah           #+#    #+#             */
/*   Updated: 2019/04/15 23:59:04 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

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
			ft_putchar(a);
			ft_putchar(b);
			ft_putchar(c);
			ft_putchar(' ');
			ft_putchar(',');
			c++;
		}
		k--;
		a++;
		b++;
		c = c - k - 1;
	}
}
