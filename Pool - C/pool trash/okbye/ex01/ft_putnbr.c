/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 15:08:26 by emallah           #+#    #+#             */
/*   Updated: 2019/04/23 19:29:11 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	cond(long d, int p, int nb, int i)
{
	while (d > 0)
	{
		d = d / 10;
		p = p * 10;
		if (d < 10)
		{
			ft_putchar(d + 48);
			nb = nb - (d * p);
			while (nb < (p / i))
			{
				ft_putchar(48);
				i = i * 10;
			}
			if (nb > 0 && nb < 10)
			{
				ft_putchar(nb + 48);
				break ;
			}
			d = nb;
			p = 1;
			i = 10;
		}
	}
}

void	ft_putnbr(int nb)
{
	long	d;
	int		p;
	int		i;

	d = nb;
	p = 1;
	i = 10;
	if (d < 0)
	{
		d = -d;
		nb = d;
		ft_putchar('-');
	}
	if (d >= 0 && d < 10)
	{
		ft_putchar(d + 48);
		d = -1;
	}
	cond(d, p, nb, i);
}
