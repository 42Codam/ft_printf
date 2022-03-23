# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rbulbul <rbulbul@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2022/03/22 18:05:22 by rbulbul       #+#    #+#                  #
#    Updated: 2022/03/23 13:15:35 by rbulbul       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		= 	libftprintf.a
LIBFTDIR	=	./libft
LIBFTFILE	=	libft.a
SRC_PATH	=	srsc

CC			= 	gcc
CFLAGS		= 	-Wall -Wextra -Werror
AR			=	ar rcs
RM			=	rm -rf

SRCS		=	ft_printf.c \
				ft_printf_pars.c \
				ft_printf_ch.c 
#				ft_printf_str.c \
				ft_printf_mem.c \
				ft_printf_int.c \
				ft_printf_unsigned_int.c \
				ft_printf_hexadecimal.c
BONUS		=
		
OBJS		=	${SRCS:.c=${SRC_PATH}%.o}
BONUS		=	${BONUS:.c=${SRC_PATH}%.o}

all: ${NAME}

${NAME}: ${LIBFT} ${SRC_OBJ}
	@ar rc $@ $(OBJS)

%.o: %.c
	@echo "$(GREEN)Compiling:$(NORMAL)"
	@echo "making object file" $< "->" $@
	@$(CC) $(CFLAGS) -o $@ -c $<

bonus:
	

clean:
	@echo "$(RED)Removing all object files...$(NORMAL)"
	@rm -f $(SRCS:.c=.o) $(BONUS:.c=.o)
	@echo "$(GREEN)Object files succesfully removed!$(NORMAL)"

fclean: clean
	@echo "$(RED)Removing libft.a$(NORMAL)"
	@rm -f ${NAME}
	@echo "$(GREEN)libft.a removed!"
	
re: fclean all

.PHONY: all clean fclean re bonus