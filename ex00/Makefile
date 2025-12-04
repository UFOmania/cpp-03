src= main.cpp ClapTrap.cpp
obj = $(src:.cpp=.o)
flags = -Wall -Wextra -Werror -std=c++98
NAME= ClapTrap

all: $(NAME)

$(NAME): $(obj)
	c++ $(flags) $(obj) -o $@

%.o: %.cpp ClapTrap.hpp
	c++ $(flags) -o $@ -c $<

clean:
	rm -f $(obj)

fclean: clean
	rm -f $(NAME)

re: fclean all