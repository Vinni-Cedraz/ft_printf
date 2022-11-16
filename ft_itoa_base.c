/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 21:46:59 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/11/15 21:47:01 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen_base(unsigned long long n, char *base)
{
	unsigned long long	baselen;
	size_t				len;

	len = 1;
	baselen = ft_strlen(base);
	while (n >= baselen)
	{
		n /= baselen;
		len++;
	}
	return (len);
}

char	*ft_itoa_base(unsigned long long n, char *base)
{
	char				*str;
	unsigned long long	numlen;
	unsigned long long	baselen;

	numlen = ft_intlen_base(n, base);
	baselen = ft_strlen(base);
	str = ft_calloc((numlen + 1), sizeof(char));
	if (!str)
		return (NULL);
	while (numlen)
	{
		numlen = numlen - 1;
		str[numlen] = base[n % baselen];
		n /= baselen;
	}
	return (str);
}
