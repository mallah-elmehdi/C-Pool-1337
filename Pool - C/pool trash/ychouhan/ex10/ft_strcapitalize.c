/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 13:04:28 by emallah           #+#    #+#             */
/*   Updated: 2019/05/02 03:19:38 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	all_lowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	all_lowcase(str);
	if (str[0] <= 122 && str[0] >= 98)
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		while (!(str[i] >= 97 && str[i] <= 122) &&
				!(str[i] >= 48 && str[i] <= 57) &&
				!(str[i] >= 65 && str[i] <= 90))
		{
			if ((str[i + 1] >= 97 && str[i + 1] <= 122))
			{
				str[i + 1] = str[i + 1] - 32;
				i++;
				break ;
			}
			else
				break ;
		}
		i++;
	}
	return (str);
}
