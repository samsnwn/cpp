NAME = scavTrap
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp
OBJS = $(SRCS:.cpp=.o)
INCLUDES = -I ClapTrap.hpp -I ScavTrap.hpp

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
