/ ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 01:28:29 by emallah           #+#    #+#             */
/*   Updated: 2019/05/01 20:42:18 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	str_size(char *dest)
{
	int i;

	i = 0;
	while (dest[i] != 0)
		i++;
	return (i);
}

void	cond(unsigned int i, )
{
	while (i <= size)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	if (i == size + 1)
		dest[j] = 0;

}
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int j;
	unsigned int i;

	i = 0;
	j = str_size(dest);
	if (size >= str_size(src))
	{
		while (src[i] != 0)
		{
			dest[j] = src[i];
			i++;
			j++;
		}
		if (src[i] == 0)
		{
			dest[j] = 0;
			return (str_size(dest));
		}
	}
	else
	{
	}
	return (str_size(dest) + 2);
}
