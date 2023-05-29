# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/06 08:56:35 by mkovoor           #+#    #+#              #
#    Updated: 2023/03/06 08:59:50 by mkovoor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		= replace

CC			= c++

CFLAGS		= -Wall -Werror -Wextra -std=c++98

RM			= rm -rf

SRCS		= main.cpp 

OBJS		= $(SRCS:.cpp=.o)

all:	 $(NAME)

$(NAME): $(OBJS)
			@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:		fclean all
