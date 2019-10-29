/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 23:20:24 by emallah           #+#    #+#             */
/*   Updated: 2019/04/28 00:54:19 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		cond(int a, int i, char *str, int j)
{
	while (str[i + 1] >= '0' && str[i + 1] <= '9')
	{
		a = (a + str[i] - 48) * 10;
		i++;
	}
	a = a + (str[i] - 48);
	if (j == 1)
		return (-a);
	else
		return (a);
}

int		ft_atoi(char *str)
{
	int i;
	int j;
	int a;

	i = 0;
	j = 0;
	a = 0;
	while (str[i] != 0)
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			i++;
		if (str[i] == '-' || str[i] == '+')
		{
			if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
				return (0);
			else if (str[i] == '-')
				j = 1;
			i++;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			return (cond(a, i, str, j));
		else
			return (0);
	}
	return (0);
}
