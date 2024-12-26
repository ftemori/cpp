NAME = FixedPoint

SRC = main.cpp fixed.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

CXX = c++

all:
	@$(CXX) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@rm $(NAME)

fclean:	clean

re:	clean all

.PHONY:  all clean re fclean