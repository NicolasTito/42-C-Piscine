/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nide-mel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 13:16:20 by nide-mel          #+#    #+#             */
/*   Updated: 2020/11/30 13:16:22 by nide-mel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int left;
	int right;

	left = 0;
	right = size - 1;
	while (left < right)
		ft_swap(&tab[left++], &tab[right--]);
}
