cmd = c++
flags = -Wall -Wextra -Werror -std=c++98
sources = main.cpp Replace.cpp
objs = $(sources:.cpp=.o)
NAME = replace

all: $(NAME)

$(NAME): $(objs) replace.hpp
	$(cmd) $(flags) $(objs) -o $(NAME)

%.o: %.cpp 
	$(cmd) $(flags) -c $< -o $@

clean:
	rm -f $(objs)

fclean: clean
	rm -f $(NAME)

re: fclean all