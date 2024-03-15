# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iportill <iportill@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/14 16:17:09 by iportill          #+#    #+#              #
#    Updated: 2024/03/14 16:17:11 by iportill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account
CPP = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98
SRC_FILES = tests.cpp \
			Account.cpp

OBJS = $(SRC_FILES:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CPP) -c $(CFLAGS)  $^

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re lib