NAME = a.out

SRCS = Character.cpp Ice.cpp Cure.cpp AMateria.cpp main.cpp MateriaSource.cpp

OBJS = $(SRCS:.cpp=.o)

CFLAGS = -fsanitize=address -Wall -Wextra -Werror

RM = rm

CC = c++

STD = -std=c++98

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
