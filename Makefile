# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdi-cecc <fdi-cecc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 14:35:30 by fdi-cecc          #+#    #+#              #
#    Updated: 2024/05/07 09:44:09 by fdi-cecc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

NAME		=	ft_printf.a

SRCS 		= 	$(shell find . -name "ft_*.c")

OBJS		=	$(SRCS:.c=.o)

CC			=	cc

CFLAGS		= 	-Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:		clean
				rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re