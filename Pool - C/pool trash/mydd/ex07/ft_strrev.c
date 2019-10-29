/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommagour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 03:49:29 by ommagour          #+#    #+#             */
/*   Updated: 2019/04/23 22:27:12 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>


char	*ft_strrev(char *str)
{
	int		i;
	int		n;
	int		len;
	char	swp;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	n = 0;
	i = len - 1;
	while (i > n)
	{
		swp = str[i];
		str[i] = str[n];
		str[n] = swp;

		i--;
		n++;
	}
	return (str);
}

int	main()
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	ft_strrev(str);
	printf("%s", str);
}
