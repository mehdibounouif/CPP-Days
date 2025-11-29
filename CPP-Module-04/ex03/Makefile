# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/28 09:58:45 by mbounoui          #+#    #+#              #
#    Updated: 2025/11/29 03:11:29 by mbounoui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = interfaces

CC = c++

FLAGS = -g3 -Wall -Wextra -Werror -std=c++98

SRC_FILES = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

SRC_OBJS = $(SRC_FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(SRC_OBJS)
	$(CC) $(FLAGS) $(SRC_OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -o $@ -c $<

clean:
	rm -f $(SRC_OBJS)

fclean: clean
	rm -f  $(NAME)

re: fclean all

.PHONY: all clean fclean re
