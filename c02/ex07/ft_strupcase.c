/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 17:30:28 by nide-mel          #+#    #+#             */
/*   Updated: 2020/11/30 17:31:02 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		lower_min;
	int		lower_max;
	int		actual;
	char	new;
	int		i;

	lower_min = 97;
	lower_max = 122;
	i = 0;
	while (str[i] != '\0')
	{
		actual = str[i];
		if (actual >= lower_min && actual <= lower_max)
		{
			new = actual - 32;
			str[i] = new;
		}
		i++;
	}
	return (str);
}
