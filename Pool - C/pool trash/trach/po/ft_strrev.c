/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 22:49:21 by emallah           #+#    #+#             */
/*   Updated: 2019/04/22 22:15:38 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
