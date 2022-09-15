NAME = megaphone

CC = c++ 

CPPFLAGS	= -Wall -Wextra -Werror -std=c++98  -pedantic-errors  #-fsanitize=address -g

FILES = megaphone.cpp

RM = rm -f

all :$(NAME)

$(NAME): $(FILES)
		$(CC) $(CPPFLAGS) $(FILES) -o $(NAME) 

clean : 
		@$(RM) $(NAME)

re : clean all