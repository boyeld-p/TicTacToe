/*
** aff_grille.c for morpion in /home/boyeld_p/rendu/cursus/morpion/src
** 
** Made by Paul BOYELDIEU
** Login   <boyeld_p@epitech.net>
** 
** Started on  Mon Apr 28 10:58:47 2014 Paul BOYELDIEU
** Last update Wed Apr 30 10:40:45 2014 Paul BOYELDIEU
*/

#include	"../includes/morpion.h"

int		aff_grille(char **grille)
{
  int		i;
  int		j;
  char		c;
  
  i = 0;
  j = 0;

  write(1, "\n --- --- ---\n", 14); 
  while(j < NBCOLONES)
    {
      write(1, "|", 1);
      while(i < NBLIGNES)
	{
	  write(1, " ", 1);
	  my_putchar(grille[i][j]);
	  write(1, " |", 2);
	  i++;
	}
      write(1, "\n --- --- ---\n", 14); 
      i = 0;
      j++;
    }
}
