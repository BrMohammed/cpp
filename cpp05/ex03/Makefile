
NAME = CoffeeTime

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 #-fsanitize=address -g

FILES =  Makefile main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp\
		RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

RM = rm -f

all : $(NAME)

$(NAME) : $(FILES)
			$(CC) $(CPPFLAGS) $(FILES) -o $(NAME)

clean :
		$(RM) $(NAME)

re : clean all
