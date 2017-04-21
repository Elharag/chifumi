##
## Makefile for  in /home/piscine/chifumi
## 
## Made by BENKRIZI El harag
## Login   <benkri_e@etna-alternance.net>
## 
## Started on  Sat Apr  1 10:24:47 2017 BENKRIZI El harag
## Last update Sat Apr  1 11:05:00 2017 BENKRIZI El harag
##

CC	=	gcc -W -Wall -Werror -Wextra
NAME	=	chifumi
SRC	=	add_params.c \
		choixIA.c \
		comparePartie.c \
		main.c \
		my_find_elm_eq_in_list.c \
		my_getnbr.c \
		my_put_nbr.c \
		my_putstr.c \
		my_strcat.c \
		my_strcmp.c \
		my_strdup.c \
		readLine.c \
		resultatTour.c \
		run.c \
		tour.c \
		verifArgument.c \
		verifEntree.c \
		afficheResumer.c
OBJ	=	$(SRC:%.c=%.o)
RM	=	rm -f

$(NAME):	$(OBJ)
		$(CC)	$(OBJ)	-o	$(NAME)
		$(RM)	$(OBJ)
all:	$(NAME)

clean:
	$(RM)	$(OBJ)

fclean:		clean
	$(RM)	$(NAME)
re:	fclean	all
