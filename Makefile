# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nugarcia < nugarcia@student.42lisboa.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 11:30:23 by nugarcia          #+#    #+#              #
#    Updated: 2022/11/14 10:53:45 by nugarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_memset ft_bzero ft_calloc ft_memcpy ft_memmove ft_memchr\
ft_memcmp ft_strlen ft_strlcpy ft_strlcat ft_strchr ft_strrchr\
ft_atoi ft_isalpha ft_isdigit ft_isalnum ft_strncmp ft_strnstr\
ft_isascii ft_isprint ft_toupper ft_tolower ft_strdup ft_putstr_fd\
ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_substr ft_strjoin ft_strtrim\
ft_strmapi ft_striteri ft_itoa ft_split\

BONUS = ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast ft_lstadd_back\
ft_lstdelone ft_lstclear ft_lstmap ft_lstiter\

CC = gcc
RM =rm -f
CFLAGS = -Wall -Werror -Wextra 
#'ar rc' is the command used to create libraries: c means the library 
#will be created if it does not exist, 
#and r that new objects replace old objects with the same name (if any).
all:$(NAME)

$(NAME): $(SRC:=.o)
			ar rc $(NAME) $(SRC:=.o)
clean:
	$(RM)	$(SRC:=.o) $(BONUS:=.o) 
fclean: clean 
		$(RM)	$(NAME)
re:	fclean	$(NAME)

bonus: $(SRC:=.o) $(BONUS:=.o) 
			ar rc $(NAME) $(SRC:=.o) $(BONUS:=.o) 
