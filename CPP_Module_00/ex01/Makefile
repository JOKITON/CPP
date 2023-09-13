
CC = c++

RM = rm

CFLAGS = -fsanitize=address -Wall -Wextra -Werror -g3 -std=c++98

STD = -std=c++98

SRCS = PhoneBook.cpp Contact.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = PhoneBook

all : $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) $(STD) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
