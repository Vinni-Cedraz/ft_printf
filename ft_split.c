/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:49:25 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/01 19:11:29 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	char	**str_arr;
	char	*start;
	char	*end;
	int		words;
	int		i;

	i = -1;
	words = ft_word_counter(s, c);
	start = (char *)s;
	end = start;
	str_arr = (char **)ft_calloc(words + 1, sizeof(char *));
	while (++i < words)
	{
		while (*end == c && end++)
			if (*end != c)
				start = end;
		end = ft_strchr(start, c);
		if (end == NULL)
			end = ft_strchr(start + 1, 0);
		*(str_arr + i) = (char *)malloc((end - start + 1) * sizeof(char));
		while (*(str_arr + i) == NULL)
			free(*(str_arr + i--));
		ft_strlcpy(*(str_arr + i), start, end - start + 1);
	}
	return (str_arr);
}
