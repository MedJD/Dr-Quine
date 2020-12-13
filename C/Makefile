# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-jadi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/21 12:44:31 by mel-jadi          #+#    #+#              #
#    Updated: 2020/11/21 12:44:33 by mel-jadi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= gcc -Wall -Wextra -Werror
COLLEEN_SRC=Colleen.c
COLLEEN_OUT=Colleen
GRACE_SRC=Grace.c
GRACE_OUT=Grace
SULLY_SRC=Sully.c
SULLY_OUT=Sully
OBJ_FILES=	Sully*.o \
			Grace.o \
			Collen.o
SULLY_C_OUT= Sully_*

all: colleen grace sully

colleen: $(COLLEEN_OUT)
	@$(CC) -o $(COLLEEN_OUT) $(COLLEEN_SRC)

grace: $(GRACE_OUT)
	@$(CC) -o $(GRACE_OUT) $(GRACE_SRC)

sully: $(SULLY_OUT)
	@$(CC) -o $(SULLY_OUT) $(SULLY_SRC)

clean:
	@rm -rf $(OBJ_FILES)

fclean: clean
	@rm -rf $(COLLEEN_OUT) $(GRACE_OUT) $(SULLY_OUT) $(SULLY_C_OUT)

re: fclean all