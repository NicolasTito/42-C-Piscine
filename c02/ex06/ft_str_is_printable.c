/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 16:31:05 by nide-mel          #+#    #+#             */
/*   Updated: 2020/11/30 16:31:07 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int i;
	int min;
	int max;
	int actual;

	i = 0;
	min = 0;
	max = 32;
	while (str[i])
	{
		actual = str[i];
		if (actual >= min && actual < max)
			return (0);
		else if (actual == 127)
			return (0);
		i++;
	}
	return (1);
}
