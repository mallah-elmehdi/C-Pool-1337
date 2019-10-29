/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 22:49:21 by emallah           #+#    #+#             */
/*   Updated: 2019/04/22 20:20:39 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		str_c(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	str0[str_c(str)];

	i = str_c(str);
	j = 0;
	while (i > 0)
	{
		str0[j] = str[i - 1];
		j++;
		i--;
	}
	return (str0);
}

int	main()
{
	char str[] = "yassir";
	printf("%s", ft_strrev(str));
	return (0);
}
