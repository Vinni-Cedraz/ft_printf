/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:27:22 by vcedraz-          #+#    #+#             */
/*   Updated: 2023/03/26 11:40:03 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	convert_recursively(char *a, unsigned int toi);
static int	is_whitespace(char c);
static int	is_valid_number(char *str);

int	my_atoi(char *str)
{
	int	sign;

	sign = 1;
	while (is_whitespace(*str))
		str++;
	if (!is_valid_number(str))
		return (0);
	if (*str == '-')
		sign = -1;
	if (sign == -1 || *str == '+')
		str++;
	return (convert_recursively(str, 0) * sign);
}

static int	is_whitespace(char c)
{
	return (c == ' ' || ('\t' <= c && c <= '\r'));
}

static int	is_valid_number(char *str)
{
	while (*str && !is_whitespace(*str))
	{
		if ((*str < '0' || *str > '9') && *str != '-' && *str != '+')
			return (0);
		str++;
	}
	return (1);
}

static int	convert_recursively(char *a, unsigned int toi)
{
	int	single_digit;

	if (!*a || is_whitespace(*a))
		return (toi);
	single_digit = *a - '0';
	toi = toi * 10 + single_digit;
	return (convert_recursively(a + 1, toi));
}

// #include <assert.h>
// #include <stdio.h>
// int main() {
//     assert(my_atoi("4") == atoi("4"));
//     assert(my_atoi("  4") == atoi("  4"));
//     assert(my_atoi("  4  ") == 4);
//     assert(my_atoi("  4  5") == 4);
//     assert(my_atoi("1235") == 1235);
//     assert(my_atoi("\r1235\n") == 1235);
//     assert(my_atoi("  1235") == 1235);
//     assert(my_atoi("0") == 0);
//     assert(my_atoi("1") == 1);
//     assert(my_atoi("-1") == -1);
//     assert(my_atoi("-101") == -101);
//     assert(my_atoi("-101") == -101);
//     assert(my_atoi("-2147483648") == -2147483648);
//     assert(my_atoi("2147483647") == 2147483647);
//     assert(my_atoi("+123") == 123);
//     assert(my_atoi("  +123") == 123);
//     assert(my_atoi("abc1") == atoi("abc1"));
//     assert(my_atoi("	abc1") == atoi("	abc1"));
//     assert(my_atoi("\n\rabc1") == atoi("\n\rabc1"));
//     printf("All tests passed.");
// }
