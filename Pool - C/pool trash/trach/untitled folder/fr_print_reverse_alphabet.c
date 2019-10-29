/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 17:25:14 by emallah           #+#    #+#             */
/*   Updated: 2019/04/15 23:06:34 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	ft_putchar(char c)
{
	write(1, &c,1);
	return 0;
}

void	ft_print_reverse_alphabet(void)
{
	int		i;
	char	a;

	i = 1;
	a = 'z';
	while (i <= 26)
	{
		ft_putchar(a);
		a--;
		i++;
	}
}

int main()
{
	ft_print_reverse_alphabet();
	return 0;
}
