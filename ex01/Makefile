# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iportill <iportill@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/14 16:17:40 by iportill          #+#    #+#              #
#    Updated: 2024/03/14 16:17:42 by iportill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phone


SRCS = 	main.cpp\
		contact.cpp\
		phonebook.cpp

CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98  -fsanitize=address

OBJS = ${SRCS:.cpp=.o}
DEPS = ${SRCS:.cpp=.d}

%.o: %.cpp
	@echo "${BLUE} ◎ $(BROWN)Compiling   ${MAGENTA}→   $(CYAN)$< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -c $< -o $@

${NAME}: ${OBJS}
		@${CC} ${CFLAGS} ${SRCS} -o ${NAME}
		@echo "\n$(GREEN) Created $(NAME) ✓ $(DEF_COLOR)\n"

all:	${NAME}

-include ${DEPS}

clean:
		@${RM} ${OBJS} ${DEPS}
		@echo "\n${BLUE} ◎ $(RED)All objects cleaned successfully ${BLUE}◎$(DEF_COLOR)\n"
fclean:
		@${RM} ${OBJS} ${DEPS} ${NAME}
		@echo "\n${BLUE} ◎ $(RED)All objects and executable cleaned successfully${BLUE} ◎$(DEF_COLOR)\n"

re: fclean all

.PHONY: all clean fclean re