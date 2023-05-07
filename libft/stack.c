#include "libft_bonus.h"
#include <assert.h>
#include <string.h>

static int is_open_meta(char c) {
	return (c == '{' || c == '[' || c == '(');
}

static int is_close_meta(char c) {
	return (c == '}' || c == ']' || c == ')');
}

int is_valid_expression(const char expression[]) {
	int i = -1;
	t_node *stack = ft_lstnew((void *){0});
	while (expression[i])
		if (is_open_meta(expression[i]))
			ft_lstadd_front(&stack, ft_lstnew((char *)&expression[i]));
		else if (is_close_meta(expression[i])) {
			if (!ft_lstsize(stack))
				return 0;
			else if (!strncmp(&expression[i], stack->content, 1))
				stack = ft_lstpop(&stack);
		}

	}
}

int main() {
    const char valid_expression[] = "${variavel} && $(comando)";
    const char invalid_expression[] = "${variavel} && $comando)";
	assert(is_valid_expression(valid_expression) == 1);
	assert(is_valid_expression(invalid_expression) == 0);
}
