NAME = ScavTrap

CXX = c++

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):
	@$(CXX) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@rm $(NAME)

re: clean all

.PHONY: all clean re