/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 22:49:21 by emallah           #+#    #+#             */
/*   Updated: 2019/04/23 21:51:17 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		str_c(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	char	*str0;
	char	*str1;
	char	a;
	int		i;

	i = str_c(str);
	str0 = str;
	str1 = str + (i - 1);
	while (str0 < str1)
	{
		a = *str0;
		*str0 = *str1;
		*str1 = a;
		str0++;
		str1--;
		i--;
	}
	return (str);
}
int main(int argc, char *argv[])
{
	if (argc < 2)
		return 0;
	printf("%s \n", ft_strrev(argv[1]));
	return 0;
}
