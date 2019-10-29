/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 05:40:22 by emallah           #+#    #+#             */
/*   Updated: 2019/05/02 06:15:44 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		len_params(int argc, char **argv)
{
	int i;
	int j;
	int a;

	a = 0;
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			a++;
			j++;
		}
		i++;
	}
	return (a);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		a;
	int		k;
	int		i;
	char	*str;

	k = 0;
	i = 1;
	str = (char*)malloc((len_params(argc, argv) + 1) * sizeof(char));
	while (i < argc)
	{
		a = 0;
		while (argv[i][a] != 0)
		{
			str[k] = argv[i][a];
			k++;
			a++;
		}
		i++;
	}
	str[k] = 0;
	return (str);
}
