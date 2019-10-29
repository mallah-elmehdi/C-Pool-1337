/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 00:36:16 by emallah           #+#    #+#             */
/*   Updated: 2019/04/30 03:27:47 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	argc = 0;
	while (argv[0][i] != '\0' || argc)
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	ft_putchar('\n');
}
