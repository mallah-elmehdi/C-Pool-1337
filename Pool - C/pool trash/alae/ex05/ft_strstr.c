/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 14:27:22 by emallah           #+#    #+#             */
/*   Updated: 2019/04/29 00:26:14 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		lenfind(char *to_find)
{
	int i;

	i = 0;
	while (to_find[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		lenst(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (to_find[j] == str[i])
			{
				i++;
				j++;
			}
			if (j >= lenfind(to_find))
				return (&str[i - lenfind(to_find)]);
		}
		else if (i >= lenst(str))
			return (0);
		i++;
	}
	return (0);
}
