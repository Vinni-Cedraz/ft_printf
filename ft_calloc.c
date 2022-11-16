/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:01:20 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/11/16 16:50:43 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	mal0_clear(char *p, size_t n);

void	*ft_calloc(size_t m, size_t n)
{
	void	*p;

	if (n && m > (size_t)-1 / n)
	{
		return (0);
	}
	n *= m;
	p = malloc(n);
	if (!p)
		return (p);
	n = mal0_clear(p, n);
	return (ft_memset(p, 0, n));
}

static size_t	mal0_clear(char *p, size_t n)
{
	size_t	pagesz;
	char	*pp;
	size_t	i;

	pagesz = 4096;
	if (n < pagesz)
		return (n);
	pp = p + n;
	i = (size_t)pp & (pagesz - 1);
	while (1)
	{
		pp = ft_memset(pp - i, 0, i);
		if (pp - p < (long)pagesz)
			return (pp - p);
		i = pagesz;
		while (i)
		{
			i -= 2 * sizeof(t_uc);
			pp -= 2 * sizeof(t_uc);
			if (((t_uc *)pp)[-1] | ((t_uc *)pp)[-2])
				break ;
		}
	}
}
