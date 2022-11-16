/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:49:25 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/11/16 17:17:02 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	t_ools	tool;

	tool.i = -1;
	tool.words = ft_word_counter(s, c);
	tool.start = (char *)s;
	tool.end = tool.start;
	tool.str_arr = (char **)ft_calloc(tool.words + 1, sizeof(char *));
	while (++tool.i < tool.words)
	{
		while (*tool.end == c && tool.end++)
			if (*tool.end != c)
				tool.start = tool.end;
		tool.end = ft_strchr(tool.start, c);
		if (!tool.end)
			tool.end = tool.end + ft_strlen(tool.start);
		tool.str_arr[tool.i] = ft_substr(tool.start, 0, tool.end - tool.start);
		if (!tool.str_arr[tool.i])
			ft_free_arr(tool.str_arr, (void **)tool.str_arr);
	}
	return (tool.str_arr);
}
