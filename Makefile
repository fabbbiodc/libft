# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdi-cecc <fdi-cecc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 14:35:30 by fdi-cecc          #+#    #+#              #
#    Updated: 2024/04/23 11:53:25 by fdi-cecc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRCS 		= 	$(shell find . -name "*.c")

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