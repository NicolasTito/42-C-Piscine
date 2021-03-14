/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:11:14 by nide-mel          #+#    #+#             */
/*   Updated: 2020/11/30 15:11:27 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int x;
	int min;
	int max;
	int actual;

	x = 0;
	min = 48;
	max = 57;
	while (str[x])
	{
		actual = str[x];
		if (actual == '\0')
			return (1);
		if (actual < min || actual > max)
			return (0);
		x++;
	}
	return (1);
}
