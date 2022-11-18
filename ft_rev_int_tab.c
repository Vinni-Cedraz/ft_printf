/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:28:03 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/11/18 16:28:39 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_rev_int_tab(int *tab, int size)
{
	int	frmbgn;
	int	frmend;

	frmbgn = 0;
	frmend = size - 1;
	while (frmbgn < (size / 2))
	{
		ft_swap(&tab[frmbgn], &tab[frmend]);
		frmbgn++;
		frmend--;
	}
}
