/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 05:43:19 by emallah           #+#    #+#             */
/*   Updated: 2019/04/22 05:43:24 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int char_conditions(int j, int i, char *str, int a)
{
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i + 1]>='0' && str[i + 1]<='9')
		{
			i++;
		}
		else
		{
			j = 1;
			return 0;
		}
	}
	return j;
}

int outp(char *str, int i, int a)
{
	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] == '-')
		{
			return (-a);
		}
		else
		{
			return (a);
		}
		i++;
	}
	return 0;
}

int ft_atoi(char *str)
{
	int i;
	int j;
	int a;

	j = 0;
	i = 0;
	a = 0;
	while (str[i] != '\0' && j != 1)
	{
		j = char_conditions(j, i, str, a);
		if(str[i]>='0' && str[i]<='9')
		{
			a = a + (str[i] - '0');
			if (str[i + 1]>='0' && str[i + 1]<='9')
			{
				a = a * 10;
			}
			else
			{
				j = 1;
			}
			i++;
		}
		else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
			i++;
		else
		{
			char_conditions(j, i, str, a);
			if (!(str[i] == '-' || str[i] == '+'))
			{
				j = 1;
			}
			i++;
		}
	}
	outp(str, i, a);
	return 0;
}
