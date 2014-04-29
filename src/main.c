/*
** main.c for morpion in /home/boyeld_p/rendu/cursus/morpion
** 
** Made by Paul BOYELDIEU
** Login   <boyeld_p@epitech.net>
** 
** Started on  Mon Apr 28 10:48:53 2014 Paul BOYELDIEU
** Last update Tue Apr 29 16:14:05 2014 Paul BOYELDIEU
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
  scanf("%c", &symbole);
  if(symbole != 'X')
    {
      if(symbole != 'O')
	{
	  printf("Error Symbole, Please choose between X and O.\n");
	  return (-1);
	}
    }
  put_symbole(grille, symbole);
}
