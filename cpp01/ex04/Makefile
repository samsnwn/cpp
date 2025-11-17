NAME = sed
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp 
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f text.replace

re: fclean all

.PHONY: all clean fclean re
