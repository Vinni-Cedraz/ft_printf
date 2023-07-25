# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 12:57:13 by vcedraz-          #+#    #+#              #
#    Updated: 2023/05/07 11:31:48 by vcedraz-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## VARIABLES ##

SHELL := /bin/bash
NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -f
AR = ar rcs
INCLUDES = -Iincludes/
DEF_COLOR = \033[0;39m
GRAY = \033[0;37m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

SRCS = ft_printf \
		   parser \
		   writers \
	    num_writers \
        call_writers \
  	 call_num_writers \
			   ft_putchar \
			   ft_calloc \
			   ft_strlen \
			   ft_memset \
			   ft_itoa_base \
			   ft_itoa \
			   ft_ishexup \
			   ft_strlcat \
			   ft_strdup \
			   ft_swap \


SRCS_PATH = ./srcs/
OBJS_PATH = ./objs/
OBJS = $(addprefix $(OBJS_PATH), $(addsuffix .o, $(SRCS)))

## RULES ##
all: $(NAME)

$(NAME): $(OBJS)
	@printf "\n$(GREEN)[linking objects into library]	... $(DEF_COLOR)\n"
	ar rcs $(NAME) $?
	@printf "\nObjects are now $(GREEN)linked$(DEF_COLOR) into $(RED) $(NAME) $(DEF_COLOR)\n";

$(OBJS_PATH)%.o: $(SRCS_PATH)%.c
	@mkdir -p $(OBJS_PATH)
	@printf "$(CYAN)[Compiling]	$(DEF_COLOR) $<\n"
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJS_PATH): 
	@mkdir -p $(OBJS_PATH)

clean: 
	rm -rf $(OBJS_PATH)

fclean: clean
	rm -f $(NAME)

re: fclean all
