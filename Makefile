# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rbulbul <rbulbul@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/03/22 18:05:22 by rbulbul       #+#    #+#                  #
#    Updated: 2022/03/29 14:13:02 by rbulbul       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= 	ft_printf.a
LIBFTDIR	=	./libft
LIBS		=	-Llibft -lft

CC			= 	gcc
CFLAGS		= 	-Wall -Wextra -Werror
AR			=	ar rcs
RM			=	rm -rf

SRC			=	srcs
OBJ			=	obj
SRCS		=	$(wildcard $(SRC)/*.c)
OBJS		=	${patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SRCS)}
INC			=	-I$(LIBFTDIR)

GREEN = \033[38;5;2m
NORMAL = \033[38;5;255m
RED = \033[38;5;1m
BLUE = \033[38;5;4m

all: ${NAME}

${NAME}: ${OBJS}
	@ar -rcs $@ $(OBJS)

$(OBJ)/%.o: $(SRC)/%.c
	@mkdir -p obj
	@$(MAKE) bonus -sC $(LIBFTDIR)
	@echo "$(GREEN)Compiling:$(NORMAL)"
	@echo "making object file" $< "->" $@
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@

bonus:
	@${MAKE} all

clean:
	@$(MAKE) fclean -C ./libft
	@echo "$(RED)Removing all object files...$(NORMAL)"
	@$(RM) obj
	@echo "$(GREEN)Object files succesfully removed!$(NORMAL)"

fclean: clean
	@echo "$(RED)Removing libft.a$(NORMAL)"
	@${RM} ${NAME}
	@echo "$(GREEN)libft.a removed!"
	
re: fclean all

.PHONY: all clean fclean re bonus