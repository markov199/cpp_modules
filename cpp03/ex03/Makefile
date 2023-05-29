# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/21 12:45:35 by mkovoor           #+#    #+#              #
#    Updated: 2023/03/21 13:10:43 by mkovoor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CCFLAGS = -g -Wall -Wextra -Werror -std=c++98

RM = rm -f

NAME = diamondtrap

SRCS = main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp

INCLUDE = ClapTrap.hpp FragTrap.hpp ScavTrap.hpp DiamondTrap.hpp

OBJS = $(SRCS:.cpp=.o)

all:    $(NAME)

$(NAME): $(OBJS) $(SRCS) $(INCLUDE)
	$(CC) $(CCFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: 
	$(RM) $(NAME) $(OBJS)

re: fclean all

.PHONY: all re clean fclean
