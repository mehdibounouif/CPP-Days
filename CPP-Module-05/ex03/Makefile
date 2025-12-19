# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbounoui <mbounoui@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/11 09:34:03 by mbounoui          #+#    #+#              #
#    Updated: 2025/12/16 09:27:52 by mbounoui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = form

CC = c++

FLAGS = -g3 -Wall -Wextra -Werror -std=c++98

SRC_FILES = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp  ShrubberyCreationForm.cpp

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
