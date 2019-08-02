# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csinglet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/22 18:59:57 by csinglet          #+#    #+#              #
#    Updated: 2019/02/08 14:35:41 by csinglet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= array

CC			= clang++
CFLAGS		= -Wall -Werror -Wextra
FLAGS		= $(CFLAGS)

FILES		= main.cpp

OBJ			= $(addprefix build/, $(FILES:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Creating: $(NAME)"
	@$(CC) -I includes $(FLAGS) $(OBJ) -o $@

build:
	@echo "Creating build directory"
	@mkdir build

build/%.o: sources/%.cpp | build
	@echo "  Building $@"
	@$(CC) -I includes -c $< -o $@

clean:
	@rm -fr build

fclean: clean
	@rm -f $(NAME)

re: fclean all
