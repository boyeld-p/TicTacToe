/*
** put_symbole.c for morpion in /home/boyeld_p/rendu/cursus/morpion/src
** 
** Made by Paul BOYELDIEU
** Login   <boyeld_p@epitech.net>
** 
** Started on  Mon Apr 28 23:05:55 2014 Paul BOYELDIEU
** Last update Tue Apr 29 16:28:39 2014 Paul BOYELDIEU
*/

#include	"../includes/morpion.h"

int		put_symbole(char **grille, char symbole)
{
  int		lignes;
  int		colones;

  lignes = 0;
  colones = 0;
  while (42)
    {
      printf("\nVeuillez donner les numeros de la ligne et de la colonne :");
      scanf("%d %d", &colones, &lignes);	
      if ((lignes > 0) && (lignes <= NBLIGNES) && (colones>0) && (colones <= NBCOLONES))
	{
	  lignes--;
	  colones--;
	  if (grille[lignes][colones] != ' ')
	    printf("La case a deja ete remplie.");
	  else
	    {
	      grille[lignes][colones] = symbole;
	      aff_grille(grille);
	    }
	  test_winner(grille, symbole);
	  if (symbole == 'O')
	    symbole = 'X';
	  else
	    symbole = 'O';
	}
      else
	{
	  printf("Indice de ligne ou colonne incorrect.");
	  put_symbole(grille, symbole);
	}
    }
}

