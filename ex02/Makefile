cmd = c++
flags = -Wall -Wextra -Werror -std=c++98
sources = main.cpp
objs = $(sources:.cpp=.o)
NAME = brain

all: $(NAME)

$(NAME): $(objs) 
	$(cmd) $(flags) $(objs) -o $(NAME)

%.o: %.cpp Zombie.hpp
	$(cmd) $(flags) -c $< -o $@

clean:
	rm -f $(objs)

fclean: clean
	rm -f $(NAME)

re: fclean all