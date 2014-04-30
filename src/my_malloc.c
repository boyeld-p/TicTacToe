/*
** my_malloc.c for morpion in /home/boyeld_p/rendu/cursus/morpion/src
** 
** Made by Paul BOYELDIEU
** Login   <boyeld_p@epitech.net>
** 
** Started on  Mon Apr 28 14:02:29 2014 Paul BOYELDIEU
** Last update Wed Apr 30 10:17:39 2014 Paul BOYELDIEU
*/

#include	"../includes/morpion.h"

char		**my_malloc()
{
  char		**grille;
  int		i;

  i = -1;

  grille = malloc(sizeof (char *) * NBLIGNES);
  if (grille == NULL)
    {
      write(1, "Error malloc\n", 13);
      exit(-1);
    }
  while (++i < NBLIGNES)
    if ((grille[i] = malloc(sizeof (char) * NBCOLONES)) == NULL)
      {
	write(1, "Error malloc\n", 13);
	exit(-1);
      }
  return (grille);
}
