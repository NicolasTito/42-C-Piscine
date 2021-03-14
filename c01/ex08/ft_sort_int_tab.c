/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 13:29:46 by nide-mel          #+#    #+#             */
/*   Updated: 2020/11/30 13:30:01 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int a;
	int b;
	int c;
	int min;

	a = 0;
	c = size - 1;
	while (a < c)
	{
		min = a;
		b = a + 1;
		while (b <= c)
		{
			if (tab[b] < tab[min])
				min = b;
			b++;
		}
		ft_swap(&tab[a], &tab[min]);
		a++;
	}
}
