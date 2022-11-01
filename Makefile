# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nugarcia < nugarcia@student.42lisboa.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 11:30:23 by nugarcia          #+#    #+#              #
#    Updated: 2022/11/01 11:00:51 by nugarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_memset ft_bzero ft_calloc ft_memcpy ft_memmove ft_memchr\
ft_memcmp ft_strlen ft_strlcpy ft_strlcat ft_strchr ft_strrchr\
ft_atoi ft_isalpha ft_isdigit ft_isalnum ft_strncmp ft_strnstr\
ft_isascii ft_isprint ft_toupper ft_tolower ft_strdup ft_putstr_fd\
ft_putchar_fd ft_putendl_fd\

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

ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAABgQDHNP4ApWalyOYC+DwryQbDXrseptVG8QRBUHhPJo8hQ6l8zIoZGBMJMA97M2KFxk24iw0Au8jecepdhl9Ev2LUpVhdDSWiauUsT3GX8HiSylm246WQlTf2AQPjDqlQ9g2BYCnfe/upxyyVkJcydmq/07RhDhcSt+1tDPIm6UAJB+6LmJ5E6bZ/QttwiLErjdAYhzXO+pERbq/oLpWNsRs7zZocuv31CMWGF5SLRfxCEhtS6J/mRir1rHFHyXSTErw5MnlXj/aFlwovMO8Zx6Xh6GZdWscZvrcy4aVhskAQbl6LuRzCkgSC6Rnk/+HeDldy9+XdSnjViiShEd1YU9i4C9U81UbUTAJmNs7jN6+zY/SresR3yho8hHKcklw5TR3SlzgqHUdrTHkca0k1t52KNGYtQfJmOugQmMr/arXpEYONyUx5M1oOC05xJAw5bc6xTOPlkkV1iHgfzmFFM9z2YcNnCztEOCAX0/SfLfVN2ZuG+f0aMsWGNSkH6CNv330= nugarcia@c1r17s13.42lisboa.com