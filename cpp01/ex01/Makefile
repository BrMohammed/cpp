NAME = moor_brains

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 #-fsanitize=address -g

FILES = zombieHorde.cpp Zombie.cpp main.cpp

RM = rm -f

all : $(NAME)

$(NAME) : $(FILES)
			$(CC) $(CPPFLAGS) $(FILES) -o $(NAME)

clean :
		$(RM) $(NAME)

re : clean all