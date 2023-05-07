#include <cstdio>
#include <iostream>
#include <stack>

#include "libft_bonus.h"

// theres no need for cpp here just use addfront
void ft_lstrev(t_node *head, int size) {
}

int main() {
    int i = 0;
    t_node *head = ft_lstnew(ft_itoa(i));
    while (++i <= 20) ft_lstadd_back((t_node **)&head, ft_lstnew(ft_itoa(i)));
    ft_lstprint((t_node **)&head);
    ft_lstrev((t_node *)head, ft_lstsize(head));
}
