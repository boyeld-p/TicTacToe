/*
** main.c for morpion in /home/boyeld_p/rendu/cursus/morpion
** 
** Made by Paul BOYELDIEU
** Login   <boyeld_p@epitech.net>
** 
** Started on  Mon Apr 28 10:48:53 2014 Paul BOYELDIEU
** Last update Tue Apr 29 19:36:19 2014 Paul BOYELDIEU
*/

#include	"../includes/morpion.h"

int		main(int ac, char **av)
{
  char		**grille;
  char		symbole;

  grille = my_malloc();
  if (grille == NULL)
    return (-1);
  init_grille(grille);
  aff_grille(grille);
  write(1, "\nVeuillez choisir votre symbole, O ou X :\n", 42);
  while(42)
    {
      scanf("%c", &symbole);
      if (symbole == 'X' || symbole == 'O')
	put_symbole(grille, symbole);
      write(1, "\n", 1);
    }
}
