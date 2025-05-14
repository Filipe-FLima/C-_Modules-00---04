# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: filipe <filipe@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/14 11:09:38 by filipe            #+#    #+#              #
#    Updated: 2025/05/14 12:02:59 by filipe           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

RESET   = \033[0m
GREEN   = \033[32m
YELLOW  = \033[33m
BOLD	= \033[1m

CPPFLAGS = -Wall -Wextra -Werror
CPPFLAGS += -std=c++98

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@g++ $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo "\n$(GREEN)One, two, three, testing...$(RESET)$(BOLD)LET'S SPEAK LOUD$(RESET)\n"

%.o: %.cpp
	@g++ $(CPPFLAGS) -c $< -o $@
	@echo "$(GREEN)Compiling: $< into $@$(RESET)"

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

