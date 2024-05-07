# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdi-cecc <fdi-cecc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 14:35:30 by fdi-cecc          #+#    #+#              #
#    Updated: 2024/05/07 10:29:54 by fdi-cecc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRCS_DIR	=	srcs

SRCS 		= 	$(shell find $(SRCS_DIR) -name "ft_*.c")

OBJS		=	$(SRCS:.c=.o)

CC			=	cc

CFLAGS		= 	-Wall -Wextra -Werror -Iincludes

all:		$(NAME)

$(NAME):	$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:		clean
				rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re