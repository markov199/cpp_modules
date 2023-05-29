CC = c++

CCFLAGS = -g -Wall -Wextra -Werror -std=c++98

RM = rm -f

NAME = Fixed

SRCS = main.cpp Fixed.cpp 

OBJS = $(SRCS:.cpp=.o)

all:    $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CCFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: 
	$(RM) $(NAME) $(OBJS)

re: fclean all

.PHONY: all re clean fclean

