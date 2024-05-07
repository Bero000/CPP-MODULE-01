NAME = brain

CC = c++

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -std=c++98

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

s: re
	@./brain
	@make f

c:clean
f:fclean
r:re