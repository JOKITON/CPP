NAME = a.out

CFLAGS = -fsanitize=address -Wall -Wextra -Werror

STD = -std=c++98

SRCS = main.cpp Weapon.cpp HumanB.cpp  HumanA.cpp

OBJS = $(SRCS:.cpp=.o)

RM = rm

CC = c++

all : $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) $(STD) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(STD) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : fclean clean re
