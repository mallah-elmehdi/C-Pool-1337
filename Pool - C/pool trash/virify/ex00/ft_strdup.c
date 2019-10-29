/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 04:58:25 by emallah           #+#    #+#             */
/*   Updated: 2019/05/02 05:11:04 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		size_str(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (0);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	dup = (char*)malloc(sizeof(char) * (size_str(src) + 1));
	i = 0;
	while (src[i] != 0)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}
