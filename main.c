#include "libft.h"
#include <stdio.h>
// this int main is a test for the ft_free_arr function:

int	main(void)
{
	char	**arr;

	arr = ft_split("Hello World", ' ');
  printf("%s\n", arr[1]);
  ft_free_arr(arr);
}
