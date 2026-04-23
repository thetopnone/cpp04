CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g
SRCS = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
OBJS = $(patsubst %.cpp,objs/%.o, $(SRCS))
NAME = ex03

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

objs/%.o: %.cpp
	@mkdir -p objs
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -rf objs

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
