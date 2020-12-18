/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 12:58:54 by emallah           #+#    #+#             */
/*   Updated: 2019/04/29 17:47:38 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		calc_p(int nb)
{
	long int p;

	p = 1;
	if (nb < 0)
	{
		nb = -(nb + 1);
	}
	while (nb != 0)
	{
		nb = nb / 10;
		p = p * 10;
	}
	return (p / 10);
}

void	min_int(long int nb)
{
	int		p;
	int		b;

	nb = -nb;
	p = calc_p(nb);
	ft_putchar('-');
	while (nb >= 0 && p >= 1)
	{
		b = nb / p;
		ft_putchar('0' + b);
		nb = nb - (b * p);
		p = p / 10;
	}
}

void	ft_putnbr(int nb)
{
	int		p;
	int		b;

	p = calc_p(nb);
	if (nb >= 0 && nb <= 9)
		ft_putchar('0' + nb);
	else
	{
		if ((nb > (-2147483648)) && (nb < 0))
		{
			nb = -nb;
			ft_putchar('-');
		}
		else if (nb == -2147483648)
			min_int(nb);
		while (nb >= 0 && p >= 1)
		{
			b = nb / p;
			ft_putchar('0' + b);
			nb = nb - (b * p);
			p = p / 10;
		}
	}
}
