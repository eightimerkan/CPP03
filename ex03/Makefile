NAME = diaProblem
CC = g++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp Diamond.cpp
	@$(CC) $(FLAGS) main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp Diamond.cpp -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean: clean

re: fclean all
