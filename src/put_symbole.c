/*
** put_symbole.c for morpion in /home/boyeld_p/rendu/cursus/morpion/src
** 
** Made by Paul BOYELDIEU
** Login   <boyeld_p@epitech.net>
** 
** Started on  Mon Apr 28 23:05:55 2014 Paul BOYELDIEU
** Last update Wed Apr 30 10:23:35 2014 Paul BOYELDIEU
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
      write(1, "\nVeuillez donner les numeros de la ligne et de la colonne :", 59);
      scanf("%d %d", &colones, &lignes);	
      if ((lignes > 0) && (lignes <= NBLIGNES) && (colones>0) && (colones <= NBCOLONES))
	{
	  lignes--;
	  colones--;
	  if (grille[lignes][colones] != ' ')
	    write(1, "La case a deja ete remplie.", 27);
	  else
	    {
	      grille[lignes][colones] = symbole;
	      system("clear");
	      aff_grille(grille);
	      somme = somme + grille[lignes][colones];
	      if (somme == 747 || somme == 756)
		{
		  system("clear");
		  write(1, "\n\nEGALITE\n\n", 11);
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
	  write(1, "Indice de ligne ou colonne incorrect.", 37);
	  lignes = 0;
	  colones = 0;
	  put_symbole(grille, symbole);
	}
    }
}
