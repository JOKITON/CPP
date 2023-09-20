NAME = a.out
CFLAGS = -fsanitize=address -Wall -Wextra -Werror
STD = -std=c++98

SRCS = main.cpp StdReplace.cpp

RM = rm
CC = c++

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) $(STD) -c $< -o $@

$(NAME): $(OBJS)
	    $(CC) $(CFLAGS) $(STD) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	    $(RM) $(NAME)

re : fclean all

.PHONY : fclean clean re
