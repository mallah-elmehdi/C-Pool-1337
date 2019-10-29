/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 09:18:56 by emallah           #+#    #+#             */
/*   Updated: 2019/04/19 15:57:24 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *upper(char *str)
{
    int i;
    int j;
    int k;
    char tab1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char tab2[] = "QRSTUVWXYZABCDEFGHIJKLMNOP";
	char tab3[] = "abcdefjhijklmnopqrstuvwxyz";
	char tab4[] = "qrstuvwxyzabcdefghijklmnop";

	j = 0;
	i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    while (j < i)
    {
		if (str[j] >= 'A' && str[j] <= 'Z')
		{
			k = 0;
			while (k<26)
			{
				if (str[j] == tab1[k])
				{
					printf("%c", tab2[k]);
				}
				k++;
			}
		}
		else if (str[j] >= 'a' && str[j] <= 'z')
		{
			k = 0;
			while (k < 26)
			{
				if (str[j] == tab3[k])
				{
					printf("%c", tab4[k]);
				}
				k++;
			}
		}
		else
		{
			printf("%c", str[j]);
		}
		j++;
    }
    return str;
}
char *ft_rot42(char *str)
{
    upper(str);
    return str;
}
