# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/21 12:32:44 by mkovoor           #+#    #+#              #
#    Updated: 2023/03/21 12:33:06 by mkovoor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CCFLAGS = -g -Wall -Wextra -Werror -std=c++98

RM = rm -f

NAME = scavtrap

SRCS = main.cpp ClapTrap.cpp  ScavTrap.cpp

OBJS = $(SRCS:.cpp=.o)

INCLUDE = ClapTrap.hpp ScavTrap.hpp

all:    $(NAME)

$(NAME): $(OBJS) $(SRCS) $(INCLUDE)
	$(CC) $(CCFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: 
	$(RM) $(NAME) $(OBJS)

re: fclean all

.PHONY: all re clean fclean
