NAME = a.out

FLAGS = -Wall -Werror -Wextra

OBJ = $(SRC:.cpp=.o)

SRC =

SRC += Convertor.cpp
SRC += main.cpp

all: $(NAME)

$(NAME): $(OBJ)
	clang++ -o $(NAME) $(OBJ)

%.o: %.c
	clang++ $(FLAGS) -c -I. $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

