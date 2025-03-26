NAME = Bureaucrat

CXX = c++

SRC = Bureaucrat.cpp main.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

all: $(NAME)

$(NAME):
	@$(CXX) $(SRC) $(CFLAGS) -o $(NAME)

clean:
	@rm -f $(NAME) *_shrubbery

re:	clean all

.PHONY: all clean re