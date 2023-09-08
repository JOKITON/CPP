NAME = harlFilter
CFLAGS = -Wall -Wextra -Werror
STD = -std=c++98
SRCS = main.cpp Harl.cpp
RM = rm
CC = c++

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) $(STD) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(STD) $(OBJS) -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	    $(RM) $(NAME)

