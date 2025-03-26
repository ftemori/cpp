NAME = convert

CXX = c++

CFLAGS = -Wall -Wextra -Werror -g -std=c++98

SRC = ScalarConverter.cpp main.cpp

all: $(NAME)

$(NAME):
	@$(CXX) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@rm -rf $(NAME)

re: clean all

.PHONY: re clean all
