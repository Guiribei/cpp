NAME = PmergeMe
PATH_SRCS = ./sources/
SRCS = main.cpp PmergeMe.cpp
PATH_OBJS = ./objects/
OBJS = ${SRCS:%.cpp=$(PATH_OBJS)%.o}
INCLUDE = -I ./includes/
FLAGS = -Wall -Wextra -Werror -std=c++98 -g3

all: $(NAME)

$(NAME): $(OBJS)
	@c++ $(FLAGS) $(OBJS) -o $(NAME)

$(PATH_OBJS)%.o: $(PATH_SRCS)%.cpp
	@mkdir -p $(PATH_OBJS)
	@cc $(FLAGS) $(INCLUDE) -c $< -o $@
	@echo "\033[1;92m[SUCCESS] Object creation done!\033[0m"

clean:
	@rm -rf $(PATH_OBJS)
	@echo "\33[1;93m[SUCCESS] Objects removed!\33[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[1;93m[SUCCESS] Full clean done!\33[0m"

re: fclean all

.PHONY: all clean fclean re
