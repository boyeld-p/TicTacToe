/*
** put_symbole.c for morpion in /home/boyeld_p/rendu/cursus/morpion/src
** 
** Made by Paul BOYELDIEU
** Login   <boyeld_p@epitech.net>
** 
** Started on  Mon Apr 28 23:05:55 2014 Paul BOYELDIEU
** Last update Tue Apr 29 20:29:37 2014 Paul BOYELDIEU
*/

#include	"../includes/morpion.h"

int		put_symbole(char **grille, char symbole)
{
  int		lignes;
  int		colones;
  int		somme;

  lignes = 0;
  colones = 0;
  somme = 0;
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
	      system("clear");
	      aff_grille(grille);
	      somme = somme + grille[lignes][colones];
	      if (somme == 747 || somme == 756)
		{
		  system("clear");
		  printf("\n\nEGALITE\n\n");
		  exit (0);
		}
	      test_winner(grille, symbole); 
	      if (symbole == 'O')
		symbole = 'X';
	      else
		symbole = 'O';
	    }
	}
      else
	{
	  printf("Indice de ligne ou colonne incorrect.");
	  put_symbole(grille, symbole);
	}
    }
}
