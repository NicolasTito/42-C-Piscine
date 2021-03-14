/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <nide-mel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 23:35:18 by nide-mel          #+#    #+#             */
/*   Updated: 2020/12/08 18:47:33 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	index;

	count = 0;
	index = 0;
	while (src[count] != '\0')
		count++;
	if (size != 0)
	{
		while (src[index] != '\0' && index < (size - 1))
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (count);
}

int main(void)
{
	char dest[15];
	char orig[] = "trucmachin";
	printf("%u\n", ft_strlcpy(dest, orig, 5));
	printf("%s\n", dest);
	printf("%lu\n", strlcpy(dest, orig, 5));
	printf("%s\n", dest);
	return (0);
}
