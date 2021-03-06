/*
** test_winner.c for morpion in /home/boyeld_p/rendu/cursus/morpion/src
** 
** Made by Paul BOYELDIEU
** Login   <boyeld_p@epitech.net>
** 
** Started on  Mon Apr 28 18:13:24 2014 Paul BOYELDIEU
** Last update Wed Apr 30 10:37:02 2014 Paul BOYELDIEU
*/

#include	"../includes/morpion.h"

int		test_winner(char **grille, char symbole)
{
  int		i;
  int		j;
  int		somme;
  int		win;

  i = 0;
  j = 0;
  somme = 0;
  win = 0;
  while(i < NBLIGNES)
    {
      while(j < NBCOLONES)
	{
	  somme = (somme + grille[i][j]);
	  if(somme == 264 || somme == 237)
	    win = 1;
	  else
	    j++;
	}
      somme = 0;
      j = 0;
      i++;
    }
  somme = 0;
  j = 0;
  i = 0;
  while(j < NBCOLONES)
    {  
      while(i < NBLIGNES)
	{
	  somme = somme + grille[i][j];
	  if(somme == 264 || somme == 237)
	    win = 1;
	  else
	    i++;
	}
      somme = 0;
      i = 0;
      j++;
    }
  if((grille[0][0] + grille[1][1] + grille[2][2] == 237) ||
     (grille[0][0] + grille[1][1] + grille[2][2] == 264) ||
     (grille[0][2] + grille[1][1] + grille[2][0] == 237) ||
     (grille[0][2] + grille[1][1] + grille[2][0] == 264))
    win = 1;
  if(win == 1)
    {
      write(1,"Bravo au joueur avec les ", 25);
      write(1, &symbole, 1);
      write(1, " qui a remporté la partie\n", 26);
      exit(1);
    }
  else
    {
      somme = 0;
      while(j < NBCOLONES)
	{
	  while(i < NBLIGNES)
	    {
	      if(grille[i][j] == ' ')
		put_symbole(grille, symbole);
	      else
		i++;	      
	    }
	  i = 0;
	  j++;
	}
    }
}
