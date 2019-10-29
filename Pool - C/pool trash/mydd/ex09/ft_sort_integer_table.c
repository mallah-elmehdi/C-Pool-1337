/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommagour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 02:09:37 by ommagour          #+#    #+#             */
/*   Updated: 2019/04/23 17:40:20 by ommagour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int done;
	int swp;

	while (1)
	{
		done = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swp;
				done = 1;
			}
			i++;
		}
		if (done == 0)
			break ;
	}
}
