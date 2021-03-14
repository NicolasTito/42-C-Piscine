/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:25:23 by nide-mel          #+#    #+#             */
/*   Updated: 2020/11/30 15:26:39 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;
	int lower_min;
	int lower_max;
	int actual;

	i = 0;
	lower_min = 97;
	lower_max = 122;
	while (str[i])
	{
		actual = str[i];
		if (actual == '\0')
			return (1);
		if (actual < lower_min || actual > lower_max)
			return (0);
		i++;
	}
	return (1);
}
