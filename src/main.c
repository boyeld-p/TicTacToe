/*
** main.c for morpion in /home/boyeld_p/rendu/cursus/morpion
** 
** Made by Paul BOYELDIEU
** Login   <boyeld_p@epitech.net>
** 
** Started on  Mon Apr 28 10:48:53 2014 Paul BOYELDIEU
** Last update Wed Apr 30 11:01:12 2014 Paul BOYELDIEU
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
      symbole = read(0);
      //scanf("%c", symbole);
      if (symbole == 'X' || symbole == 'O')
	put_symbole(grille, symbole);
      else if(symbole != 'X' && symbole != 'O')
	write(1, "Try Again\n", 11);
    }
}
