/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 10:23:26 by emallah           #+#    #+#             */
/*   Updated: 2019/05/02 13:00:56 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
char **ft_split_whitespaces(char *str)
{
	int *cont = 0;
	int d;
	int j;
	int i;
	int a;

	j = 0;
	i = 0;
	d = 1;
	while (str[i] != 0)
	{
		if (str[i] != 32 && str[i] != '\t' && str[i] != '\n')
		{
			while(str[i + 1] != 32 && str[i + 1] != '\t' && str[i + 1] != '\n')
			{	
				cont[j] = d;
				d++;
				i++;
			}
			j++;
		}
		i++;
	}
	i = 0;
	char **tab = 0;
	while (i < j+1)
	{
		a = cont[i];
		*(tab + i) = (char*)malloc(sizeof(char) * (a + 1));
		i++;
	}
	*tab[i] = 0;
	i = 0;
	j = 0;
	while (str[i] != 0)
	{
		if (str[i] != 32 && str[i] != '\t' && str[i] != '\n')
		{
			a = 0;
			while(str[i + 1] != 32 && str[i + 1] != '\t' && str[i + 1] != '\n')
			{
				tab[j][a] = str[i];
				i++;
				a++;
			}
			tab[j][a] = 0;
			j++;
		}
		i++;
	}
	return (tab);
}

int main()
{
	char d[] = "hello every body i want to say go away";
	printf("%s", *ft_split_whitespaces(d));
}










