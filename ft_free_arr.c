/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:34:35 by vcedraz-          #+#    #+#             */
/*   Updated: 2022/10/02 19:51:17 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// this function is used to free a 2d array

#include <stdlib.h>
void	ft_free_arr(char **arr)
{
	*arr -= 1;
	while (*arr++)
		free(*arr);
	free(arr);
}
