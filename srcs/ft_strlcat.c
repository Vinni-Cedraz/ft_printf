/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:25:09 by vcedraz-          #+#    #+#             */
/*   Updated: 2023/07/25 10:25:27 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_includes.h"

static size_t	aux_strlen(const char *str);
static void		*aux_memcpy(void *dst, const void *src, size_t n);
static size_t	aux_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_sz;

	dst_sz = aux_strlen(dst);
	if (size < dst_sz + 1 || size == 0)
		dst_sz = size;
	if (size > dst_sz)
		aux_strlcpy(dst + dst_sz, src, size - dst_sz);
	return (dst_sz + aux_strlen(src));
}

static size_t	aux_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str && *(str + i))
		i++;
	return (i);
}

static void	*aux_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*source;

	i = -1;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (++i < n)
		*(dest + i) = *(source + i);
	return (dest);
}

static size_t	aux_strlcpy(char *dst, const char *src, size_t size)
{
	if (aux_strlen(src) + 1 < size)
		return (aux_strlen(aux_memcpy(dst, src, aux_strlen(src) + 1)));
	if (!size)
		return (aux_strlen(src));
	aux_memcpy(dst, src, size - 1);
	*(dst + size - 1) = '\0';
	return (aux_strlen(src));
}
