/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:31:03 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/11/16 17:37:56 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	t_ools	tool;

	tool.len = ft_strlen(s1) + ft_strlen(s2) + 1;
	tool.res = malloc(tool.len);
	ft_strlcpy(tool.res, s1, tool.len);
	ft_strlcat(tool.res, s2, tool.len);
	return (tool.res);
}
