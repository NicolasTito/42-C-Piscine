/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:51:35 by nide-mel          #+#    #+#             */
/*   Updated: 2020/11/30 18:51:40 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alphanum(char str)
{
	if (str > 47 && str < 58)
	{
		return (0);
	}
	if (str > 64 && str < 91)
	{
		return (0);
	}
	if (str > 96 && str < 123)
	{
		return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int inword;

	i = 0;
	inword = 0;
	while (str[i] != '\0')
	{
		if (is_alphanum(str[i]) == 0)
		{
			if (inword == 1 && 'A' <= str[i] && str[i] <= 'Z')
				str[i] = str[i] + 32;
			if (inword == 0 && 'a' <= str[i] && str[i] <= 'z')
				str[i] = str[i] - 32;
			inword = 1;
		}
		else
		{
			inword = 0;
		}
		i++;
	}
	return (str);
}
