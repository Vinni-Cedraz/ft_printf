/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoabasetest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:39:53 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/11/20 17:41:31 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// this is a test to check hex conversion from ft_itoa_base

int	main(void)
{
	int		i;
	char	*str;

	i = 98798;
	str = ft_itoa_base(i, "0123456789abcdef");
	printf("%s\n", str);
}
