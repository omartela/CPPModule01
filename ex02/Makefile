# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/03 14:18:59 by omartela          #+#    #+#              #
#    Updated: 2025/01/03 14:19:00 by omartela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER = g++

TARGET = "HI THIS IS BRAIN"
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