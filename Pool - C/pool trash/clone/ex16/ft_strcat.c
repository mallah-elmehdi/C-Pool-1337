/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 00:29:58 by emallah           #+#    #+#             */
/*   Updated: 2019/04/28 22:57:57 by emallah          ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = size_arr(dest);
	while (src[i] != 0)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	if (src[i] == 0)
		dest[j] = '\0';
	return (dest);
}
