# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/02 20:08:54 by omartela          #+#    #+#              #
#    Updated: 2025/01/02 20:08:56 by omartela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


COMPILER = c++

TARGET = BraiiiiiiinnnzzzZ
INC_DIR = inc
SRC = src/main.cpp src/newZombie.cpp src/Zombie.cpp src/randomChump.cpp
OBJ = $(SRC:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror -I$(INC_DIR)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(COMPILER) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp
	$(COMPILER) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all