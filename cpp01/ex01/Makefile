NAME = zombiehorde

CXX = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Zombie.cpp zombieHorde.cpp

all:
	@$(CXX) $(SRC) $(CFLAGS) -o $(NAME)

clean:
	@rm $(NAME)

re:	clean all

.PHONY: all clean re