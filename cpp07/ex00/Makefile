# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/12 10:05:21 by mkovoor           #+#    #+#              #
#    Updated: 2023/07/12 10:31:22 by mkovoor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXXFLAGS = -g -Wall -Wextra -Werror -std=c++98

RM = rm -f

NAME = whatever

SRCS = main.cpp

INCLUDE = whatever.hpp

OBJS = $(SRCS:.cpp=.o)

all:    $(NAME)

$(NAME): $(OBJS) $(SRCS) $(INCLUDE)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: 
	$(RM) $(NAME) $(OBJS)

re: fclean all

.PHONY: all re clean fclean
