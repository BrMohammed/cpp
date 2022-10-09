NAME = Cast

CPP = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 #-fsanitize=address -g

FILES =  Makefile Cast.cpp

RM = rm -f

all : $(NAME)

$(NAME) : $(FILES)
			$(CPP) $(CPPFLAGS) $(FILES) -o $(NAME)

clean :
		$(RM) $(NAME)

re : clean all