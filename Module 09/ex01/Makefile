# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgeisler <mgeisler@student.42mulhouse.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/14 18:42:21 by mgeisler          #+#    #+#              #
#    Updated: 2025/05/05 21:11:09 by mgeisler         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	RPN

# ------------------------------ Sources -----------------------------

SRCS		:=	main.cpp RPN.cpp\

OBJ_DIR		:=	.objs
OBJS		:=	$(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

# ------------------------------ Flags -------------------------------
CXX			:=	c++
CXXFLAGS	:=	-Wall -Wextra -Werror -std=c++98 -g3
RM			:=	rm -rf
SHELL		:= /bin/bash

$(OBJ_DIR)/%.o :%.cpp
	@ mkdir -p $(dir $@)
	@ $(CXX) $(CXXFLAGS) $(INC_RL) -c $< -o $@

# ------------------------------ Colors ------------------------------

CLR_RMV		:=	\033[0m
RED			:=	\033[1;31m
GREEN		:=	\033[1;32m
YELLOW		:=	\033[1;33m
BLUE		:=	\033[1;34m
CYAN 		:=	\033[1;36m

# ------------------------------ Compilation -------------------------

all:			$(NAME)

$(NAME):		$(OBJS)
				@ echo -e "$(GREEN)Compilation $(CLR_RMV)of $(YELLOW)$(NAME) $(CLR_RMV)..."
				@ $(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
				@ echo -e "$(YELLOW)$(NAME) $(GREEN)created $(CLR_RMV)✔️"



# -------------------------------- Rules -----------------------------

clean:
				@ $(RM) $(OBJ_DIR)
				@ echo -e "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)objs ✔️"

fclean:			clean
				@ $(RM) $(NAME) $(RM)
				@ echo -e "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)binary ✔️"

re:				fclean all

.PHONY:			all bonus clean fclean re
