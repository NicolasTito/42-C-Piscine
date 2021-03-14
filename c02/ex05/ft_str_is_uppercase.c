/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 16:28:43 by nide-mel          #+#    #+#             */
/*   Updated: 2020/11/30 16:28:48 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int x;
	int upper_min;
	int upper_max;
	int actual;

	x = 0;
	upper_min = 65;
	upper_max = 90;
	while (str[x])
	{
		actual = str[x];
		if (actual == '\0')
			return (1);
		if (actual < upper_min || actual > upper_max)
			return (0);
		x++;
	}
	return (1);
}
