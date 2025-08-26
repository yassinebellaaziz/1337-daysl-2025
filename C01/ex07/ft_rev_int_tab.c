/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybellaaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 18:35:39 by ybellaaz          #+#    #+#             */
/*   Updated: 2025/08/16 08:35:46 by ybellaaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		swap = tab [i];
		tab [i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}
