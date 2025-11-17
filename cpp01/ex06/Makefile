NAME = harlFilter
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp HarlFilter.cpp
OBJS = $(SRCS:.cpp=.o)
INCLUDES = -I HarlFilter.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
