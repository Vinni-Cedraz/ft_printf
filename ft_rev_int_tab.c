/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:28:03 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/11/19 08:00:04 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_rev_int_tab(size_t *tab, size_t size)
{
	t_ools	tool;

	tool.frmbgn = 0;
	tool.frmend = size - 1;
	while (tool.frmbgn < (size / 2))
	{
		ft_swap(&tab[tool.frmbgn], &tab[tool.frmend], sizeof(size_t));
		tool.frmbgn++;
		tool.frmend--;
	}
}
