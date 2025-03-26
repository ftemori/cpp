NAME = iter

CXX = c++

SRC = main.cpp

CFLAGS = -Wall -Wextra -Werror -g -std=c++98

all: $(NAME)

$(NAME):
	@$(CXX) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -rf $(NAME)

re:	clean all

.PHONY: re clean all