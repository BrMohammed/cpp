NAME = megaphone

CC = c++ 

CFLAGS	= -Wall -Wextra -Werror -std=c++98  -pedantic-errors  #-fsanitize=address -g

FILES = megaphone.cpp

RM = rm -f

all :$(NAME)

$(NAME): $(FILES)
		$(CC) $(CFLAGS) $(FILES) -o $(NAME) 

clean : 
		@$(RM) $(NAME)

re : clean all