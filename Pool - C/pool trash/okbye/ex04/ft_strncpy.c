/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 11:39:41 by emallah           #+#    #+#             */
/*   Updated: 2019/04/24 13:29:38 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		str_size(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	cond(int i, int n, char *dest, char *src)
{
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j;

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
	{
		cond(i, n, dest, src);
	}
	return (dest);
}
