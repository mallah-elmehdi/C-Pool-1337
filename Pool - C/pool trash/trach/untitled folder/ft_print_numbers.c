/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 17:52:57 by emallah           #+#    #+#             */
/*   Updated: 2019/04/15 23:15:40 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int		ft_putchar(char c)


{
	write(1, &c,1);
	return 0;
}


void	ft_print_numbers(void)
{
	char	c;
	int		i;

	i = 0;
	c = '0';
	while (i <= 9)
	{
		ft_putchar(c);
		i++;
		c++;
	}
}
int main()
{
	ft_print_numbers();
	return 0;
}
