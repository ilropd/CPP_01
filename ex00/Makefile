# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: irozhkov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/31 16:49:33 by irozhkov          #+#    #+#              #
#    Updated: 2024/07/31 17:08:05 by irozhkov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brainz

CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJ = $(SRC:.cpp=.o)
DEPS = Zombie.hpp

REMOVE = rm -f

GREEN = \033[0;32m
DEFAULT = \033[0m

all: $(NAME)

%.o: %.cpp $(DEPS) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@echo "---> object files $(GREEN)CREATED$(DEFAULT)\n"
	$(CC) $(OBJ) -o $(NAME)
	@echo "---> $(NAME) is $(GREEN)AVAILABLE NOW$(DEFAULT)\n"
	
clean:
	$(REMOVE) $(shell find . -name "*.o")
	@echo "---> object files $(GREEN)DELETED$(DEFAULT)\n"

fclean: clean
	$(REMOVE) $(NAME)
	@echo "---> $(NAME) $(GREEN)DELETED$(DEFAULT)\n"

re: fclean all

.PHONY: all clean fclean re
