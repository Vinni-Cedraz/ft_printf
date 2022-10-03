# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 11:11:55 by vcedraz-          #+#    #+#              #
#    Updated: 2022/10/02 19:52:01 by vcedraz-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

MANDATORY_SRCS	=	ft_isalpha.c \
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
					ft_calloc.c \
					ft_strdup.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_toupper.c \
					ft_tolower.c \
					ft_strncmp.c \
					ft_strchr.c \
					ft_strrchr.c \
					ft_strnstr.c \
					ft_atoi.c \
					ft_putstr_fd.c \
					ft_putchar_fd.c \
					ft_putnbr_fd.c \
					ft_putendl_fd.c \
					ft_itoa.c \
					ft_strjoin.c \
					ft_strtrim.c \
					ft_substr.c \
					ft_split.c \
					ft_strmapi.c \
					ft_striteri.c \
					ft_abs.c \
					ft_numlen.c \
					ft_strrev.c \
					ft_word_counter.c \
					ft_free_arr.c \
					

OBJS = $(MANDATORY_SRCS:.c=.o)

AR = ar -rc

CFLAGS = -Wall -Wextra -Werror -I includes -g

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus:
	make all WITH_BONUS=TRUE

clean:
	$(RM) $(OBJS) $(BOBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
