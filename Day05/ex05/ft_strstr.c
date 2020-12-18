/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 23:45:47 by emallah           #+#    #+#             */
/*   Updated: 2019/05/02 00:32:47 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int a;

	i = 0;
	while (str[i] != 0)
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			a = i;
			while (str[i + 1] == to_find[j + 1])
			{
				if ((str[i + 2] != to_find[j + 2]) && (to_find[j + 2] != 0))
					break ;
				i++;
				j++;
			}
			if (to_find[j + 1] == 0)
				return (&str[a]);
		}
		i++;
	}
	return (0);
}
