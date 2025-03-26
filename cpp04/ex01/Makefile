NAME = IwantToSetTheWoldOnFire

CXX = c++

WFLAGS = -Wall -Wextra -Werror -Iincludes

SRC = src/*

all: $(NAME)

$(NAME):
	@$(CXX) $(WFLAGS) $(SRC) -o $(NAME)

clean:
	@rm $(NAME)

re: clean all

.PHONY: all re clean