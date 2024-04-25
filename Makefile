# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmorello <pmorello@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/01 12:32:41 by pmorello          #+#    #+#              #
#    Updated: 2024/04/25 08:29:44 by pmorello         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# <-- Library's Name --> #
NAME = libft.a

# <-- Compilation Command --> #
CC	= gcc

# <-- Compilation Flags --> #
CFLAGS	= -Wall -Werror -Wextra

# <-- Remove Command -->#
RM	= rm -f

# <-- AR --> #
AR = ar -rcs

# <-- FILES -->#
MANDATORY_SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
				  ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c \
				  ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c  \
				  ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c \
				  ft_itoa.c ft_putendl_fd.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
				  ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS_SRCS =  ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
			  ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c



# <-- Objects --> #
OBJS = ${MANDATORY_SRCS:.c=.o}

BONUS_OBJS = ${BONUS_SRCS:.c=.o}

# <-- Main Target --> #
all:		 ${NAME}

# <--Library Creation-->
${NAME}:	${OBJS}
	${AR} ${NAME} ${OBJS}

# <-- Objects Creation --> #
%.o:%.c	libft.h Makefile	
		${CC} ${CFLAGS} -c $< -o $@

# <-- Objects Destruction --> #
clean:
				${RM} ${OBJS} ${BONUS_OBJS}

# <-- Clean Execution + libft.a Destruction --> #
fclean: 	clean
				${RM} ${NAME} ${BONUS}

# <-- Fclean Execution -->
re: 		fclean all

# <-- Bonus -->
bonus: ${BONUS_OBJS}
			${AR} ${NAME} ${BONUS_OBJS}

# <-- Targets Declaration --> #
.PHONY:		all clean fclean re bonus
