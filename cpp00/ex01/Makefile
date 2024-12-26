CXX = c++

CXXFLAGS = -std=c++98 -Werror -Wall -Wextra

TARGET = phonebook

SRC = main.cpp phoneBook.cpp contact.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	@$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	@rm -f $(TARGET)

re:	clean all

.PHONY: all clean re