# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 09:30:35 by mkovoor           #+#    #+#              #
#    Updated: 2023/03/01 09:55:17 by mkovoor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= zombiehorde

CC			= c++

CFLAGS		= -Wall -Werror -Wextra -std=c++98

RM			= rm -rf

SRCS		= main.cpp Zombie.cpp zombieHorde.cpp

OBJS		= $(SRCS:.cpp=.o)

all:	 $(NAME)

$(NAME): $(OBJS)
			@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
