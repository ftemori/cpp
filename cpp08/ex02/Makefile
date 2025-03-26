NAME = mutantstack

CXX = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRC = main.cpp

all:	$(NAME)

$(NAME):
	@$(CXX) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -rf $(NAME)

re:	clean all

.PHONY: all clean re