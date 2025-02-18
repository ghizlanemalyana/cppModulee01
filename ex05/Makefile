cmd = c++
flags = -Wall -Wextra -Werror -std=c++98
sources = main.cpp Harl.cpp
objs = $(sources:.cpp=.o)
NAME = harl

all: $(NAME)

$(NAME): $(objs) Harl.hpp
	$(cmd) $(flags) $(objs) -o $(NAME)

%.o: %.cpp 
	$(cmd) $(flags) -c $< -o $@

clean:
	rm -f $(objs)

fclean: clean
	rm -f $(NAME)

re: fclean all