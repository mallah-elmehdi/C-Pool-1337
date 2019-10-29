/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 18:15:18 by emallah           #+#    #+#             */
/*   Updated: 2019/04/28 19:07:58 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		size_arr(char *chaine)
{
	int c;

	c = 0;
	while (chaine[c] != 0)
	{
		c++;
	}
	return (c);
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int j;

	i = 0;
	j = size_arr(dest);
	while (src[i] != 0 && i < nb)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	if (src[i] == 0 || i == nb)
		dest[j] = 0;
	return (dest);
}
