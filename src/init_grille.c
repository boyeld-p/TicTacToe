/*
** init_grille.c for morpion in /home/boyeld_p/rendu/cursus/morpion/src
** 
** Made by Paul BOYELDIEU
** Login   <boyeld_p@epitech.net>
** 
** Started on  Mon Apr 28 10:55:50 2014 Paul BOYELDIEU
** Last update Mon Apr 28 23:20:50 2014 Paul BOYELDIEU
*/

#include	"../includes/morpion.h"


int		init_grille(char **grille)
{
  int		i;
  int		j;

  i = 0;
  j = 0;

  while(j < NBCOLONES)
    {
      while(i < NBLIGNES)
	{
	  grille[i][j] = ' ';
	  i++;
	}
      i = 0;
      j++;
    }
}
