# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkovoor <mkovoor@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 08:51:29 by mkovoor           #+#    #+#              #
#    Updated: 2023/03/07 08:51:55 by mkovoor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		= harlFilter

CC			= c++

CFLAGS		= -Wall -Werror -Wextra -std=c++98

RM			= rm -rf

SRCS		= main.cpp Harl.cpp

OBJS		= $(SRCS:.cpp=.o)

all:	 $(NAME)

$(NAME): $(OBJS)
			@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:		fclean all
