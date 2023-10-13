# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alibourb <alibourb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/07 15:04:06 by alibourb          #+#    #+#              #
#    Updated: 2023/10/13 11:59:40 by alibourb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= zombieHorde

SRC 			= \
					main.cpp \
					Zombie.cpp \
					zombieHorde.cpp \

OBJ = $(SRC:.cpp=.o)

CC				= g++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror --std=c++98

all:			$(NAME)

$(NAME): $(OBJ)
				$(CC) $(OBJ) -o $(NAME)

clean:
				$(RM) $(OBJ)

fclean:			clean
					$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
