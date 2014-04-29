/*
** aff_grille.c for morpion in /home/boyeld_p/rendu/cursus/morpion/src
** 
** Made by Paul BOYELDIEU
** Login   <boyeld_p@epitech.net>
** 
** Started on  Mon Apr 28 10:58:47 2014 Paul BOYELDIEU
** Last update Mon Apr 28 18:10:02 2014 Paul BOYELDIEU
*/

#include	"../includes/morpion.h"

int		aff_grille(char **grille)
{
  int		i;
  int		j;
  char		c;
  
  i = 0;
  j = 0;

  printf("\n --- --- ---\n"); 
  while(j < NBCOLONES)
    {
      printf("|");
      while(i < NBLIGNES)
	{
	  printf(" %c |", grille[i][j]);
	  i++;
	}
      printf("\n --- --- ---\n"); 
      i = 0;
      j++;
    }
}
