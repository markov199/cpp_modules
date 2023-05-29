# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/23 10:59:20 by mkovoor           #+#    #+#              #
#    Updated: 2023/03/23 12:30:52 by mkovoor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CCFLAGS = -g -Wall -Wextra -Werror -std=c++98

RM = rm -f

NAME = animal

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

INCLUDE = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

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
