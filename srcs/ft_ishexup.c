/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ishexup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:23:18 by vcedraz-          #+#    #+#             */
/*   Updated: 2023/07/25 10:23:38 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_includes.h"

static inline int	is_digit(int c);
static inline int	is_hexup(int c);

int	ft_ishexup(char *s)
{
	if (!s)
		return (0);
	while (*s)
	{
		if (!is_digit(*s) && !is_hexup(*s))
			return (0);
		s++;
	}
	return (1);
}

static inline int	is_digit(int c)
{
	return ('0' <= c && c <= '9');
}

static inline int	is_hexup(int c)
{
	return ('A' <= c && c <= 'F');
}
