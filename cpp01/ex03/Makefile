NAME = Unnecessary_violence

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 #-fsanitize=address -g

FILES = Makefile main.cpp Weapon.hpp Weapon.cpp, HumanA.hpp\
		HumanA.cpp HumanB.hpp, HumanB.cpp

RM = rm -f

all : $(NAME)

$(NAME) : $(FILES)
			$(CC) $(CPPFLAGS) $(FILES) -o $(NAME)

clean :
		$(RM) $(NAME)

re : clean all