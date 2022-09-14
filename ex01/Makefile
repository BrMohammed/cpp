NAME = phonebook

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98 #-fsanitize=address -g

FILES = phonebook.cpp

RM = rm -f

all : $(NAME)

$(NAME) : $(FILES)
			$(CC) $(CFLAGS) $(FILES) -o $(NAME)

clean :
		$(RM) $(NAME)

re : clean all