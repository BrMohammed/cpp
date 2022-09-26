
NAME = Polymorphism

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 #-fsanitize=address -g

FILES =  Brain.cpp main.cpp Dog.cpp Cat.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp

RM = rm -f

all : $(NAME)

$(NAME) : $(FILES)
			$(CC) $(CPPFLAGS) $(FILES) -o $(NAME)

clean :
		$(RM) $(NAME)

re : clean all