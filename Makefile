# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nugarcia < nugarcia@student.42lisboa.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 11:30:23 by nugarcia          #+#    #+#              #
#    Updated: 2022/11/01 15:20:10 by nugarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_memset ft_bzero ft_calloc ft_memcpy ft_memmove ft_memchr\
ft_memcmp ft_strlen ft_strlcpy ft_strlcat ft_strchr ft_strrchr\
ft_atoi ft_isalpha ft_isdigit ft_isalnum ft_strncmp ft_strnstr\
ft_isascii ft_isprint ft_toupper ft_tolower ft_strdup ft_putstr_fd\
ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_substr\

CC =gcc
RM =rm -f
CFLAGS = -Wall -Werror -Wextra -I.

all:$(NAME)

$(NAME): $(SRC:=.o)
			ar rc $(NAME) $(SRC:=.o)
clean:
	$(RM)	$(SRC:=.o) 
fclean: clean 
		$(RM)	$(NAME)
re:	fclean	$(NAME)
