# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alejarod <alejarod@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/14 00:18:13 by alejarod          #+#    #+#              #
#    Updated: 2023/06/25 13:22:13 by alejarod         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ========== VARIABLES ==========
NAME		= libft.a

SRC			= $(shell find ./src -name "*.c")
OBJ			= $(SRC:.c=.o)
HEADERS	=	-I ./inc

CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
RM	 		= rm -rf

# ========== COLORS ==========
DEFAULT = \033[0;39m
YELLOW = \033[0;93m
GREEN = \033[0;92m
RED = \033[0;31m
WHITE = \033[0;97m

# ========== RULES ==========

%.o: %.c
	@echo "$(DEFAULT)Compiling...$(DEFAULT)"
	@$(CC) $(CFLAGS) -o $@ -c $< $(HEADERS)
	@echo "$(GREEN)Done!$(DEFAULT)"
	
$(NAME) : $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "$(YELLOW)libft.a compiled!$(DEFAULT)"

# ========== FUNCTIONS ==========

all: $(NAME)

clean:
	@$(RM) $(OBJ)
	@echo "$(YELLOW)$(NAME) object files removed!$(DEFAULT)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)$(NAME) removed!$(DEFAULT)"


re: fclean all

.PHONY: all clean fclean re
