/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybellaaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 08:17:04 by ybellaaz          #+#    #+#             */
/*   Updated: 2025/08/16 10:20:04 by ybellaaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	s;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j <= i)
		{
			if (tab[j] > tab[i])
			{
				s = tab[j];
				tab[j] = tab[i];
				tab[i] = s;
			}
			j++;
		}
		i++;
	}
}
