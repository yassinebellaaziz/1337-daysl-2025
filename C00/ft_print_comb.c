/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybellaaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:31:13 by ybellaaz          #+#    #+#             */
/*   Updated: 2025/08/14 10:27:34 by ybellaaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	f;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8' )
		{
			f = j + 1;
			while (f <= '9')
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(f);
				if (i < '7')
					write(1, ", ", 2);
				f++;
			}
			j++;
		}
		i++;
	}
}
