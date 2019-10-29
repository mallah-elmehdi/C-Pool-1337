/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 12:47:32 by emallah           #+#    #+#             */
/*   Updated: 2019/04/29 01:34:29 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		srting_comp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] >= 0)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

void	print_ft(int arggc, char *arggv[])
{
	int i;
	int a;

	i = 1;
	while (i < arggc)
	{
		a = 0;
		while (arggv[i][a] > 0)
		{
			ft_putchar(arggv[i][a]);
			a++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int		i;
	int		a;
	int		j;
	char	*c;

	i = 1;
	while (i < (argc - 1))
	{
		j = 1;
		while (j < argc - 1)
		{
			a = srting_comp(argv[j], argv[j + 1]);
			if (a > 0)
			{
				c = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = c;
			}
			j++;
		}
		i++;
	}
	print_ft(argc, argv);
}
