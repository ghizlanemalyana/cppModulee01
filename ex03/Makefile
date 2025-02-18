cmd = c++
flags = -Wall -Wextra -Werror -std=c++98
sources = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
objs = $(sources:.cpp=.o)
HEADERS = Weapon.hpp HumanA.hpp HumanB.hpp
NAME = weapons

all: $(NAME)

$(NAME): $(objs) 
	$(cmd) $(flags) $(objs) -o $(NAME)

%.o: %.cpp  $(HEADERS)
	$(cmd) $(flags) -c $< -o $@

clean:
	rm -f $(objs)

fclean: clean
	rm -f $(NAME)

re: fclean all