# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 14:19:41 by mkovoor           #+#    #+#              #
#    Updated: 2023/03/08 13:37:20 by mkovoor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= zombie

CC			= c++

CFLAGS		= -g -Wall -Werror -Wextra -std=c++98 

RM			= rm -rf

SRCS		= main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

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




