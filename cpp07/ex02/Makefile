NAME = Array

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 #-fsanitize=address -g

FILES =  main.cpp

RM = rm -f
objets = $(FILES:.c=.o)

$(NAME):$(objets)
	$(CC) $(CPPFLAGS) -o $(NAME) $(FILES)

all : $(NAME)

clean :
		$(RM) $(NAME)

re : clean all