src= main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp
obj = $(src:.cpp=.o)
flags = -Wall -Wextra -Werror -std=c++98  -Wshadow  -Wno-shadow
NAME= DiamondTrap

all: $(NAME)

$(NAME): $(obj)
	c++ $(flags) $(obj) -o $@

%.o: %.cpp ClapTrap.hpp FragTrap.hpp ScavTrap.hpp DiamondTrap.hpp
	c++ $(flags) -o $@ -c $<

clean:
	rm -f $(obj)

fclean: clean
	rm -f $(NAME)

re: fclean all