/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:07:10 by vcedraz-          #+#    #+#             */
/*   Updated: 2023/01/09 21:56:04 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_BONUS_H
# define LIBFT_BONUS_H

# include <pthread.h>
# include <stdio.h>
# include <stdlib.h>

# define FIXED_BUFSZ 10000

typedef struct s_nodes	t_node;

typedef struct s_mod
{
	short				read_failed;
	char				*buf;
	int					l_bgn;
	int					l_end;
	int					l_sz;
	int					read;
}						t_mod;

typedef struct s_nodes
{
	void				*content;
	t_node				*next;
}						t_node;

// LINKED LISTS BASIC FUNCTIONS
// ft_lstnew creates a new element
t_node					*ft_lstnew(void *content);
// ft_lstadd_back adds a new element at the end of a list
void					ft_lstadd_back(t_node **head, t_node *new_node);
// ft_lstadd_front adds a new element at the beginning of a list
void					ft_lstadd_front(t_node **head, t_node *new_node);
// ft_lstfree frees each node in a list and frees the list itself at the end
void					ft_lstfree(t_node **list);

// LINKED LISTS SPECIFIC OPERATIONS
// ft_lstlast returns the last element of the list
t_node					*ft_lstlast(t_node *first_node);
// ft_lstsize returns the number of elements in a list
int						ft_lstsize(t_node *first_node);
// ft_lst_print prints the content of a list
void					ft_lstprint(t_node **lst);
// adds a node at a specific position in the list and returns a pointer to it
t_node					*ft_lstadd_here(t_node **lst, t_node *n, uint index);
// del a node at a given index
void					ft_lstdel_here(t_node **lst, uint index);
// returns a pointer to the node at the index position in the list
t_node					*ft_lstgetby_index(t_node *lst, uint index);
// returns the index at which a given content is found within a list
int						ft_lstgetby_content(t_node *lst, void *content);
// frees the nodes of a list but not the list itself:
void					ft_lstfree_nodes(t_node **lst);
// frees the first node of a list
t_node					*ft_lstshift(t_node **lst);
// frees the last node of a list
void					ft_lstpop(t_node **lst);

//  FORBIDDEN FUNCTIONS, USE ONLY WHEN THE BONUS ALLOWS ANY FUNCTION
// ft_special_gnl is a faster gnl with fread, fopen and a fixed buffersize
char					*ft_special_gnl(FILE *fp);

#endif
