/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   speedtest.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 08:53:13 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/11/20 12:24:08 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <time.h>

// this function is a speedtest for the ft_calloc function

int	main(void)
{
	double	cpu_time_used;
	void	*ptr;

	clock_t start, end;
	start = clock();
	ptr = ft_calloc(__INT_MAX__, sizeof(int));
	end = clock();
	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("Time taken: %f\n", cpu_time_used);
	printf("%lu", ft_memorylen(ptr, __INT_MAX__));
	return (free(ptr), 0);
}
