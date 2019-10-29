/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 19:54:17 by emallah           #+#    #+#             */
/*   Updated: 2019/04/15 22:35:32 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_variables(void)
{
	int		d;
	int		a;
	long	pow;
	char	c;

	pow = 10;
	c = '0';
	a = 1;
	d = nr;
}

void	lastnbr(void)
{
	if (d < 10)
	{
		a = 0;
		c = '0' + d;
		ft_putchar(c);
	}
}

void	ft_putnbr(int nr)
{
	ft_variables();
	if (d < 0)
	{
		d = d * (-1);
		ft_putchar('-');
	}
	while (a > 0)
	{
		a = (d / pow);
		pow = pow * 10;
		if (a == 0)
		{
			c = c + (d / (pow / 100));
			ft_putchar(c);
			d = d - ((d / (pow / 100)) * (pow / 100));
			pow = 10;
			a = 1;
		}
		lastnbr();
		c = '0';
	}
}
