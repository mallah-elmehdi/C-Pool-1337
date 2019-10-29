/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 01:28:29 by emallah           #+#    #+#             */
/*   Updated: 2019/04/30 15:48:30 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

unsigned int	str_size(char *dest)
{
	int i;

	i = 0;
	while (dest[i] != 0)
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int k;
	unsigned int a;

	i = 0;
	a = 0;
	k = str_size(dest);
	while (src[i] != 0 && i < size)
	{
		dest[k] = src[i];
		i++;
	}
	if (src[i] == 0 || i == size)
	{
		dest[i] = 0;
		if (i >= size)
			a = k + size + 1;
		else if (i == 0)
			a = 0;
		else
			a = k + str_size(src) + 1;
	}
	return (a);
}

int 	main()
{
	char s1[] = "football";
	char s2[] = "play";
	printf("%u\n",ft_strlcat(s1,s2,5));
	char s3[] = "football";
	char s4[] = "play";
	printf("%lu",strlcat(s3,s4,5));
}
