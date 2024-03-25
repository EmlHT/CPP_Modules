# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehouot <ehouot@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/19 15:55:47 by ehouot            #+#    #+#              #
#    Updated: 2024/03/25 11:42:10 by ehouot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_MAIN 	= 	./main.cpp \
				./AMateria.cpp \
				./Ice.cpp \
				./Cure.cpp \
				./Character.cpp \

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