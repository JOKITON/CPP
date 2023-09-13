NAME = megaphone

CC = c++

RM = rm

CFLAGS = -fsanitize=address -Wall -Wextra -Werror -std=c++98

STD = -std=c++98

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)


all : $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) $(STD) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re : fclean all
