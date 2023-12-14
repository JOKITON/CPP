NAME = a.out

SRCS = Data.cpp Serializer.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

CFLAGS = -fsanitize=address -Wall -Wextra -Werror -Wshadow -Wno-shadow

RM = rm

CC = c++

STD = -std=c++98 -pedantic

all : $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) $(STD) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(STD) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all fclean clean re
