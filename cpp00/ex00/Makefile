# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/16 11:04:33 by mkovoor           #+#    #+#              #
#    Updated: 2023/02/27 08:41:15 by mkovoor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone

CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

RM			= rm -rf

SRCS		= Megaphone.cpp

OBJS		= $(SRCS:.cpp=.o)

CYAN    = \033[0;96m
WHITE   = \033[0;37m
MAGENTA = \033[35;1m
RED     = \e[0;31m
BLUE	= \x1b[34m


all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re