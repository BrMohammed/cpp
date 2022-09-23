NAME = Serena

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 #-fsanitize=address -g

FILES =  ClapTrap.cpp main.cpp ScavTrap.cpp

RM = rm -f

all : $(NAME)

$(NAME) : $(FILES)
			$(CC) $(CPPFLAGS) $(FILES) -o $(NAME)

clean :
		$(RM) $(NAME)

re : clean all