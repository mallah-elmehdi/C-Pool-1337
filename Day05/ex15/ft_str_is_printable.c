/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 21:34:38 by emallah           #+#    #+#             */
/*   Updated: 2019/04/28 22:55:42 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		str_size(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (0);
}

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= '\0' && str[i] <= 32)
			return (0);
		i++;
	}
	return (1);
}
