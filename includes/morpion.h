/*
** morpion.h for morpion in /home/boyeld_p/rendu/cursus/morpion/include
** 
** Made by Paul BOYELDIEU
** Login   <boyeld_p@epitech.net>
** 
** Started on  Mon Apr 28 10:38:31 2014 Paul BOYELDIEU
** Last update Tue Apr 29 10:48:18 2014 Paul BOYELDIEU
*/

#ifndef		_MORPION_H_
#define		_MORPION_H_

/*
**		Includes
*/

#include	<stdlib.h>
#include	<stdio.h>

/*
**		Define
*/

#define		NBLIGNES	3
#define		NBCOLONES	3

/*
**		Prototypages lib
*/

int		my_putchar(char w);
int		my_putstr(char *str);

/*
**		Prototypages src
*/

int		main(int ac, char **av);
char		**my_malloc();
int		init_grille(char **grille);
int		aff_grille(char **grille);
int		put_symbole(char **grille, char symbole);
int		test_winner(char **grille, char symbole);

#endif
