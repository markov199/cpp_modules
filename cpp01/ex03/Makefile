# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 12:17:05 by mkovoor           #+#    #+#              #
#    Updated: 2023/03/01 14:02:47 by mkovoor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= war

CC			= c++

CFLAGS		= -Wall -Werror -Wextra -std=c++98

RM			= rm -rf

SRCS		= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp 

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
