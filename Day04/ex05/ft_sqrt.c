/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 09:32:26 by emallah           #+#    #+#             */
/*   Updated: 2019/04/23 10:09:42 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int rac;

	if (nb < 0)
	{
		return (0);
	}
	else
	{
		rac = 0;
		while (rac <= nb)
		{
			if (rac * rac == nb)
			{
				return (rac);
			}
			rac++;
		}
		return (0);
	}
}
