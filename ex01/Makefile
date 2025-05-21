# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flima <flima@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/21 10:13:08 by flima             #+#    #+#              #
#    Updated: 2025/05/21 10:47:09 by flima            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = myphonebook

RESET   = \033[0m
GREEN   = \033[32m
YELLOW  = \033[33m
BOLD	= \033[1m

CPPFLAGS = -Wall -Wextra -Werror
CPPFLAGS += -std=c++98

SRCS = Contact.cpp PhoneBook.cpp main.cpp
OBJS_DIR = objs/
OBJS_O = $(SRCS:.cpp=.o)
OBJS = $(addprefix $(OBJS_DIR), $(OBJS_O))

all: $(NAME)

$(NAME): $(OBJS)
	@g++ $(CPPFLAGS) $(OBJS) -o $(NAME)
	@echo "\n$(GREEN)Creating your PhoneBook...$(RESET)"
	@echo "$(GREEN)Done! You can now add your favorite contacts! 📒$(RESET)\n"

$(OBJS_DIR)%.o: %.cpp
	@mkdir -p $(dir $@)
	@g++ $(CPPFLAGS) -c $< -o $@
	@echo "$(GREEN)Compiling: $< into $@$(RESET)"

clean:
	@rm -fr $(OBJS_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

