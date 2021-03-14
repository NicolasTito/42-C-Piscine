/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:07:19 by nide-mel          #+#    #+#             */
/*   Updated: 2020/11/30 15:07:23 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int x;
	int lower[2];
	int upper[2];
	int actual;

	x = 0;
	lower[0] = 97;
	lower[1] = 122;
	upper[0] = 65;
	upper[1] = 90;
	while (str[x])
	{
		actual = str[x];
		if (actual == '\0')
			return (1);
		if (actual < upper[0] || actual > lower[1])
			return (0);
		if (actual < lower[0] && actual > upper[1])
			return (0);
		x++;
	}
	return (1);
}
