# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rbulbul <rbulbul@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/03/22 18:05:22 by rbulbul       #+#    #+#                  #
#    Updated: 2022/03/25 16:17:45 by rbulbul       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= 	libftprintf.a
LIBFTDIR	=	./includes/libft
LIBFTFILE	=	libft.a

CC			= 	gcc
CFLAGS		= 	-c -Wall -Wextra -Werror
AR			=	ar rcs
RM			=	rm -rf

SRC			=	src
OBJ			=	obj
SRCS		=	$(wildcard $(SRC)/*.c)
OBJS		=	${patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SRCS)}
INCLUDES	=	-I./includes

GREEN = \033[38;5;2m
NORMAL = \033[38;5;255m
RED = \033[38;5;1m
BLUE = \033[38;5;4m

all: ${NAME}

${NAME}: ${OBJS}
	@ar -rcs $@ $(OBJS)

$(OBJ)/%.o: $(SRC)/%.c
	@echo "$(GREEN)Compiling:$(NORMAL)"
	@echo "making object file" $< "->" $@
	@$(MAKE) bonus -C ./libft
	@cp ./libft/libft.a $(NAME)
	@$(CC) $(CFLAGS) $(INCLUDES) $(SRCS)

bonus:
	@${MAKE} all

clean:
	@echo "$(RED)Removing all object files...$(NORMAL)"
	@$(MAKE) clean -C ./libft
	@${RM} $(SRCS:.c=.o) $(BONUS:.c=.o)
	@echo "$(GREEN)Object files succesfully removed!$(NORMAL)"

fclean: clean
	@echo "$(RED)Removing libft.a$(NORMAL)"
	@${RM} ${NAME}
	@echo "$(GREEN)libft.a removed!"
	
re: fclean all

.PHONY: all clean fclean re bonus