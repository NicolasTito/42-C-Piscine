/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 15:42:55 by nide-mel          #+#    #+#             */
/*   Updated: 2020/12/01 15:43:07 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			i = 1;
			while (str[i] == to_find[i] && str[i] && to_find[i])
				i++;
			if (to_find[i] == '\0')
				return (str);
		}
		str++;
	}
	return (0);
}
