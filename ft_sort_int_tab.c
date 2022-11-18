/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:25:09 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/11/18 18:00:07 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	ft_swap(size_t *x, size_t *y)
{
	int	c;

	c = *x;
	*x = *y;
	*y = c;
}

void	ft_sort_int_tab(size_t *tab, size_t size)
{
	size_t	i;
	size_t	begin;

	i = 0;
	begin = 0;
	while (i < size - 1)
	{
		while (begin < size - 1)
		{
			if (tab[begin] > tab[begin + 1])
			{
				ft_swap(&tab[begin], &tab[begin + 1]);
			}
			begin++;
		}
		i++;
	}
}
