# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/07 12:57:05 by omartela          #+#    #+#              #
#    Updated: 2025/01/07 12:57:06 by omartela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER = c++

TARGET = harlFilter
SRC = src/main.cpp src/Harl.cpp
INC_DIR = inc
OBJ = $(SRC:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror -I$(INC_DIR) -Wno-implicit-fallthrough

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