/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 11:39:41 by emallah           #+#    #+#             */
/*   Updated: 2019/05/01 13:14:02 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		str_size(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

void	cond(int i, int n, char *dest, char *src)
{
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i++;
	while (i <= n)
	{
		dest[i] = '\0';
		i++;
	}
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	j = str_size(src);
	i = 0;
	if (n > j)
	{
		while (i < j)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		i++;
	}
	else
		cond(i, n, dest, src);
	return (dest);
}
