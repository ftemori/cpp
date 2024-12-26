NAME = account

CFLAGS = -Wextra -Werror -Wall -std=c++98

CXX = c++

SRC = tests.cpp account.cpp

all:
	@$(CXX) $(SRC) -o $(NAME)
clean:
	@rm -f $(NAME)

re:	clean all

.PHONY: all clean re
