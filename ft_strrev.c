/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:28:57 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/11/16 18:01:15 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	t_ools	tool;

	tool.i = -1;
	tool.len = ft_strlen(str);
	tool.half = tool.len / 2;
	tool.tmp = malloc(sizeof(char));
	while (++tool.i < tool.half)
	{
		*tool.tmp = *(str + tool.i);
		*(str + tool.i) = *(--tool.len + str);
		*(str + tool.len) = *tool.tmp;
	}
	return (free(tool.tmp), str);
}
