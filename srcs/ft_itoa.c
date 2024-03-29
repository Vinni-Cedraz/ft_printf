/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:23:40 by vcedraz-          #+#    #+#             */
/*   Updated: 2023/07/25 10:23:55 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_includes.h"

static char	*mstr(char *s, int n);
static int	numlen(int n);
static int	handle_negative(int nbr, char **iter);
static void	build_str(int nbr, char *str, char **iter);

char	*ft_itoa(int nbr)
{
	int		strlen;
	char	*str;
	char	*iter;

	if (nbr == INT_MIN)
		return (mstr("-2147483648", 12));
	strlen = numlen(nbr);
	str = (char *)malloc(sizeof(char) * strlen + 1);
	iter = str;
	nbr = handle_negative(nbr, &iter);
	build_str(nbr, str, &iter);
	*iter = '\0';
	return (str);
}

static char	*mstr(char *s, int n)
{
	int		i;
	char	*mstr;

	i = -1;
	mstr = (char *)malloc((n + 1) * sizeof(char));
	while (++i < n)
		*(mstr + i) = *s++;
	mstr[i] = '\0';
	return (mstr);
}

static int	numlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

int	handle_negative(int nbr, char **iter)
{
	if (nbr < 0)
	{
		*(*iter)++ = '-';
		nbr *= -1;
	}
	return (nbr);
}

static void	build_str(int nbr, char *str, char **iter)
{
	if (nbr > 9)
		build_str(nbr / 10, str, iter);
	*(*iter)++ = (nbr % 10) + '0';
}

// // ------------TESTS ---------------
//
// #include <assert.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
//
// int main(void) {
//     char *test;
//
//     test = ft_itoa(1234);
//     assert(!strcmp("1234", test));
//     free(test);
//     test = ft_itoa(87);
//     assert(!strcmp("87", test));
//     free(test);
//     test = ft_itoa(9);
//     assert(!strcmp("9", test));
//     free(test);
//     test = ft_itoa(0);
//     assert(!strcmp("0", test));
//     free(test);
//     test = ft_itoa(-12);
//     assert(!strcmp("-12", test));
//     free(test);
//     test = ft_itoa(-122);
//     assert(!strcmp("-122", test));
//     free(test);
//     test = ft_itoa(-12999812);
//     assert(!strcmp("-12999812", test));
//     free(test);
//     test = ft_itoa(INTMIN);
//     assert(!strcmp("-2147483648", test));
//     free(test);
//     test = ft_itoa(-2147483648);
//     assert(!strcmp("-2147483648", test));
//     free(test);
//     printf("all tests passed!");
// }
