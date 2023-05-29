# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/21 12:42:04 by mkovoor           #+#    #+#              #
#    Updated: 2023/03/21 12:42:08 by mkovoor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CCFLAGS = -g -Wall -Wextra -Werror -std=c++98

RM = rm -f

NAME = fragtrap

SRCS = main.cpp ClapTrap.cpp FragTrap.cpp

INCLUDE = ClapTrap.hpp FragTrap.hpp

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
