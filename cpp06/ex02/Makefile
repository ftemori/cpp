NAME = identify

CXX = c++

CFLAGS = -Wall -Wextra -Werror -g -std=c++11

SRC = main.cpp

all: $(NAME)

$(NAME):
	@$(CXX) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -rf $(NAME)

re: clean all

.PHONY: re clean all
