# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 11:11:55 by vcedraz-          #+#    #+#              #
#    Updated: 2022/11/16 00:34:31 by vcedraz-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a


CFLAGS = -Wall -Werror -Wextra -O3

AR = ar -rsc

RM = rm -f

OBJS_PATH = ./objs/

SRCS = ft_isalpha.c \
  ft_isdigit.c \
  ft_isalnum.c \
  ft_isascii.c \
  ft_isprint.c \
  ft_strlen.c \
  ft_memset.c \
  ft_bzero.c \
  ft_memcpy.c \
  ft_memmove.c \
  ft_strlcpy.c \
  ft_strlcat.c \
  ft_toupper.c \
  ft_tolower.c \
  ft_strchr.c \
  ft_strrchr.c \
  ft_strncmp.c \
  ft_memchr.c \
  ft_memcmp.c \
  ft_strnstr.c \
  ft_atoi.c \
  ft_calloc.c \
  ft_strdup.c \
  ft_substr.c \
  ft_strjoin.c \
  ft_strtrim.c \
  ft_split.c \
  ft_itoa.c \
  ft_strmapi.c \
  ft_striteri.c \
  ft_putchar_fd.c \
  ft_putstr_fd.c \
  ft_putendl_fd.c \
  ft_putnbr_fd.c \
	ft_abs.c \
	ft_strrev.c \
	ft_free_arr.c \
	ft_numlen.c \
	ft_word_counter.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_itoa_base.c \
ft_lstadd_back.c \
ft_lstadd_front.c \
ft_lstdelone.c \
ft_lstlast.c \
ft_lstnew.c \
ft_lstsize.c \
	

OBJECTS = $(SRCS:%.c=$(OBJS_PATH)%.o)


all : $(NAME) 


$(OBJS_PATH)%.o : %.c
	@mkdir -p $(OBJS_PATH)
	$(CC) $(CFLAGS) -c $< -o $@


$(NAME) : $(OBJECTS)
	@$(AR) $(NAME) $(OBJECTS) 


clean :
	$(RM) -rf $(OBJS_PATH)
	@rm -f a.out
	@rm -f compile_commands.json


fclean : clean
	$(RM) $(NAME)


re : fclean all
