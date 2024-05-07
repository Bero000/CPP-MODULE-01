NAME = zombieHorde

CC = c++

SRC = Zombie.cpp zombieHorde.cpp
OBJ = $(SRC:.cpp=.o)

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -std=c++98

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) main.cpp $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

s: re
	@./zombieHorde
	@make f

c:clean
f:fclean
r:re