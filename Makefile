# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rbulbul <rbulbul@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/03/22 18:05:22 by rbulbul       #+#    #+#                  #
#    Updated: 2022/04/04 17:55:05 by rbulbul       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= 	libftprintf.a
LIBFTDIR	=	./libft
LIBS		=	-Llibft -lft

CC			= 	gcc
CFLAGS		= 	-Wall -Wextra -Werror
AR			=	ar rc
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

${NAME}: libft.a ${OBJS}
	@cp $(LIBFTDIR)/libft.a $(NAME)
	@ar -rc $@ $(OBJS)

libft.a:
	@$(MAKE) bonus -C $(LIBFTDIR)
	

$(OBJ)/%.o: $(SRC)/%.c
	@echo "$(GREEN)Compiling ft_printf object file:$(NORMAL)"
	@echo "making object file" $< "->" $@
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@


bonus:
	@${MAKE} all

test: all
	@gcc ./bin/main.c libftprintf.a -o bin/test
	@./bin/test

clean:
	@$(MAKE) fclean -C ./libft
	@echo "$(RED)Removing printf object files...$(NORMAL)"
	@$(RM) obj/*.o
	@echo "$(GREEN)Printf object files succesfully removed!$(NORMAL)"

fclean: clean
	@echo "$(RED)Removing libftprintf.a$(NORMAL)"
	@${RM} ${NAME}
	@echo "$(GREEN)libftprintf.a removed!"
	
re: fclean all

.PHONY: all clean fclean re bonus