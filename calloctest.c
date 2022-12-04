/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloctest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 21:49:20 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/12/03 19:05:19 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "42/libft_revisited/libft.h"
#include <stdio.h>
#include <time.h>

// IN MY ARCHLINUX THE CURRENT FT_CALLOC IS THE FASTEST BY 12 SECONDS
// IN 42's UBUNTU:


// static void	*oldcalloc(size_t nmemb, size_t size)
// {
// 	if (!size || !nmemb)
// 		return (malloc(0));
// 	if (nmemb > __SIZE_MAX__ / size)
// 		return (NULL);
// 	return (ft_memset(malloc(size * nmemb), 0, size * nmemb));
// }
//

// static		void	*not_faster_calloc(size_t nmemb, size_t size)
// {
// 	char	*ptr;
// 	size_t	i;
//
// 	i = 0;
// 	if (!size || !nmemb)
// 		return (malloc(0));
// 	if (nmemb > __SIZE_MAX__ / size)
// 		return (NULL);
// 	ptr = malloc(size * nmemb);
// 	while (i < size * nmemb)
// 	{
// 		ptr[i] = 0;
// 		i++;
// 	}
// 	return (ptr);
// }

int	main(void)
{
	size_t	i;
	char	*foo;
	clock_t	begin;
	clock_t	end;

	i = -1;
	begin = clock();
	foo = ft_calloc(3 * (size_t)__INT_MAX__, sizeof(char));
	if (foo)
	{
		while (++i < 3 * (size_t)__INT_MAX__ - 1)
			foo[i] = 'a';
		// foo[i++] = '\0';
	}
	printf("%zu\n", ft_strlen(foo));
	free(foo);
	end = clock();
	printf("Time elapsed: %f\n", (double)(end - begin) / CLOCKS_PER_SEC);
}
