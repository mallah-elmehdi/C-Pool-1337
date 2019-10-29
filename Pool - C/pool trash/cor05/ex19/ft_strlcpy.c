/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 02:12:33 by emallah           #+#    #+#             */
/*   Updated: 2019/04/30 13:41:40 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	size_str(char *src)
{
	unsigned int i;

	i = 0;
	while (src[i] != 0)
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	j = size_str(src);
	i = 0;
	while (src[i] != 0 && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == 0 || i == size)
		dest[i] = 0;
	return (j);
}
