/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiari <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 11:58:50 by abiari            #+#    #+#             */
/*   Updated: 2019/04/28 10:15:44 by abiari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int fact;

	i = 1;
	fact = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb > 12)
		return (0);
	if (nb >= 1)
	{
		while (i <= nb)
		{
			fact = fact * i;
			i++;
		}
	}
	return (fact);
}
