/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:28:57 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/11/20 07:57:09 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// tool.frmbgn starts from the beginning of the string
// tool.frmend starts from the end of the string
char	*ft_strrev(char *str, size_t strlen)
{
	t_ools	tool;

	tool.frmbgn = -1;
	tool.frmend = strlen;
	while (++tool.frmbgn < strlen / 2)
		ft_swap(&str[tool.frmbgn], &str[--tool.frmend], sizeof(char));
	return (str);
}
