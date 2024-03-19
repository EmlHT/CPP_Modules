SRC_MAIN 	= 	./main.cpp \
				./AAnimal.cpp \
				./Dog.cpp \
				./Cat.cpp \
				./WrongCat.cpp \
				./WrongAnimal.cpp \
				./Brain.cpp

SRC			= ${SRC_MAIN}

OBJ			= ${SRC:.cpp=.o}

HEADER		= ./

CC 			= c++

RM 			= rm -f

CPPFLAGS 	= -Wall -Werror -Wextra -std=c++98

NAME 		= Abstrait

ifdef DEBUG
	CPPFLAGS += -fsanitize=address -g3
endif

all:		$(NAME)

.cpp.o:
			@$(CC) $(CPPFLAGS) -I $(HEADER) -c $< -o $(<:.cpp=.o)

$(NAME):	$(OBJ)
			@$(CC) $(CPPFLAGS) $(OBJ) -I $(HEADER) -o $(NAME)

debug:
			${MAKE} DEBUG=1

clean:
			@$(RM) $(OBJ)

fclean: 	clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY: 	all clean fclean re