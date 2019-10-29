/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 01:12:15 by emallah           #+#    #+#             */
/*   Updated: 2019/05/02 05:36:16 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int				*tab;
	unsigned int	i;
	long			a;

	i = 0;
	if (min >= max)
		return (0);
	a = max - min;
	tab = (int*)malloc(sizeof(int) * a);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

int		ft_ultimate_range(int **range, int min, int max)
{
	long len;

	len = max - min - 1;
	*range = ft_range(min, max);
	return (len);
}
