# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/04 11:05:03 by omartela          #+#    #+#              #
#    Updated: 2025/01/04 11:05:04 by omartela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER = c++

TARGET = "Sed is for losers"
SRC = src/main.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror

all: $(TARGET)

$(TARGET): $(OBJ)
	$(COMPILER) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp
	$(COMPILER) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ)
	rm -f $(TARGET)

re: clean all
