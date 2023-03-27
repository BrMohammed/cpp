NAME = PmergeMe

CC = c++

CPPFLAGS =  -Wall -Werror -Wextra -std=c++98 -fsanitize=address -g3

FILES = main.cpp PmergeMe.cpp

RM = rm -f

objects = $(FILES:.c=.o)

all : $(NAME)

$(NAME):$(objets)
		$(CC) $(CPPFLAGS) -o $(NAME) $(FILES)

clean :
		$(RM) $(NAME)

re : clean all

