/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:28:57 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/11/19 07:59:03 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str, size_t strlen)
{
	t_ools	tool;

	tool.frmbgn = -1;
	tool.frmend = strlen;
	tool.tmp = malloc(sizeof(char));
	while (++tool.frmbgn < strlen / 2)
	{
		ft_swap(&str[tool.frmbgn], &str[--tool.frmend], sizeof(char));
	}
	return (free(tool.tmp), str);
}
