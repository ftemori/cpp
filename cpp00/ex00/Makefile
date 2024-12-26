NAME = megaphone

CFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++

SRC = megaphone.cpp

all:
	@$(CXX) $(CFLAGS) $(SRC) -o $(NAME)
clean:
	@rm -rf $(NAME)
re:	clean all

.PHONY: all clean re