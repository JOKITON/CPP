NAME = a.out

CFLAGS = -Wall -Wextra -Werror

STD = -std=c++98

SRCS = main.cpp

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

fclean :clean 
	$(RM) $(NAME)
