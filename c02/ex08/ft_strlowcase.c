/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 17:33:51 by nide-mel          #+#    #+#             */
/*   Updated: 2020/11/30 17:34:00 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		i;
	int		upper_min;
	int		upper_max;
	int		actual;
	char	new;

	upper_min = 65;
	upper_max = 90;
	i = 0;
	while (str[i] != '\0')
	{
		actual = str[i];
		if (actual >= upper_min && actual <= upper_max)
		{
			new = actual + 32;
			str[i] = new;
		}
		i++;
	}
	return (str);
}
