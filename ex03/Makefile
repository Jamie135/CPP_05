NAME = Intern
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
FILES = Bureaucrat \
		AForm \
		PresidentialPardonForm \
		RobotomyRequestForm \
		ShrubberyCreationForm \
		Intern \
		main

INCLS = Bureaucrat.hpp \
		AForm.hpp \
		PresidentialPardonForm.hpp \
		RobotomyRequestForm.hpp \
		ShrubberyCreationForm.hpp \
		Intern.hpp

SRCS = $(addsuffix .cpp, $(FILES))
OBJS = $(addsuffix .o, $(FILES))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $^

.cpp.o: $(SRCS) $(INCLS)
	$(CC) $(FLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re