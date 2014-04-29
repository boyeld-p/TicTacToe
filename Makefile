##
## Makefile for morpion in /home/boyeld_p/rendu/cursus/morpion
## 
## Made by Paul BOYELDIEU
## Login   <boyeld_p@epitech.net>
## 
## Started on  Mon Apr 28 10:59:50 2014 Paul BOYELDIEU
## Last update Tue Apr 29 13:38:19 2014 Paul BOYELDIEU
##

NAME	=	morpion

SRC	=	src/my_malloc.c		\
		src/init_grille.c	\
		src/aff_grille.c	\
		src/put_symbole.c	\
		src/test_winner.c	\
		src/main.c

OBJ	=	$(SRC:.c=.o)

CC	=	cc

CFLAGS	=	-g

RM	=	rm -vf

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ)

clean:		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)