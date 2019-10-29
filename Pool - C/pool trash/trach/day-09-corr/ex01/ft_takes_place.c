/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 19:15:23 by emallah           #+#    #+#             */
/*   Updated: 2019/04/18 23:46:12 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_pm(int hour)
{
	if (hour >= 12 && hour <= 23)
	{
		if (hour == 12)
		{
			printf("THE FOLLOWING TAKES PLACE BETWEEN ");
			printf("%d.00 P.M. AND %d.00 P.M.\n", hour, (hour + 1) - 12);
		}
		else
		{
			hour = hour - 12;
			if (hour == 11)
			{
				printf("THE FOLLOWING TAKES PLACE BETWEEN ");
				printf("%d.00 P.M. AND %d.00 A.M.\n", hour, hour + 1);
			}
			else
			{
				printf("THE FOLLOWING TAKES PLACE BETWEEN ");
				printf("%d.00 P.M. AND %d.00 P.M.\n", hour, hour + 1);
			}
		}
	}
}

void	ft_am(int hour)
{
	if (hour >= 0 && hour <= 11)
	{
		if (hour == 0)
		{
			printf("THE FOLLOWING TAKES PLACE BETWEEN ");
			printf("%d.00 A.M. AND %d.00 A.M.\n", hour, hour + 1);
		}
		else
		{
			if (hour == 11)
			{
				printf("THE FOLLOWING TAKES PLACE BETWEEN ");
				printf("%d.00 A.M. AND %d.00 P.M.\n", hour, hour + 1);
			}
			else
			{
				printf("THE FOLLOWING TAKES PLACE BETWEEN ");
				printf("%d.00 A.M. AND %d.00 A.M.\n", hour, hour + 1);
			}
		}
	}
}

void	ft_takes_place(int hour)
{
	ft_pm(hour);
	ft_am(hour);
}
