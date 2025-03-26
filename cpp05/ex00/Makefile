NAME = Bureaucrat

CXX = c++

SRC = Bureaucrat.cpp main.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

all: $(NAME)

$(NAME):
	@$(CXX) $(SRC) $(CFLAGS) -o $(NAME)

clean:
	@rm $(NAME)

re:	clean all

.PHONY: all clean re