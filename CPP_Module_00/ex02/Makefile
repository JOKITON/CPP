
NAME = account

CFLAGS = -fsanitize=address -Wall -Wextra -Werror -std=c++98

SRCS = Account.cpp tests.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

RM = rm

all : $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean fclean re
