/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 16:16:28 by emallah           #+#    #+#             */
/*   Updated: 2019/04/19 16:58:31 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_i(int i, int j, int k)
{
	int a;
	if((j>i && i>k) || (k>i && i>j))
	{
		a = i;
		printf("%d", a);
	}
	return a;
}
int ft_j(int i, int j, int k)
{
	int a;
	if((i>j && j>k) || (k>=j && j>=i))
	{
		a = j;
		printf("%d", a);
	}
	return a;
}

int ft_k(int i, int j, int k)
{
	int a;
	if((i>k && k>j) || (j>k && k>i) )
	{
		a = k;
		printf("%d", a);
	}
	return a;
}

int ft_antidote(int i, int j, int k)
{
	ft_i(i, j, k);
	ft_j(i, j, k);
	ft_k(i, j, k);
	if (i == j && j > k)
	{
		printf("%d", j);
	}
	else if(i == k && k > j)
	{
		printf("%d", k);
	}
	return 0;
