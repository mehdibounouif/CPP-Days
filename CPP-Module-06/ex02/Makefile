# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbounoui <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/02 17:27:01 by mbounoui          #+#    #+#              #
#    Updated: 2026/01/02 17:28:43 by mbounoui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Identify

CC = c++

FLAGS = -g3 -Wall -Wextra -Werror -std=c++98

SRC_FILES = main.cpp Base.cpp A.cpp B.cpp C.cpp

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
