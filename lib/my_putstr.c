/*
** my_putstr.c for morpion in /home/boyeld_p/rendu/cursus/morpion
** 
** Made by Paul BOYELDIEU
** Login   <boyeld_p@epitech.net>
** 
** Started on  Mon Apr 28 10:43:53 2014 Paul BOYELDIEU
** Last update Mon Apr 28 10:45:04 2014 Paul BOYELDIEU
*/

int		my_putstr(char *str)
{
  int		i;
  i = 0;
  
  while(str[i++] != '\0')
      my_putchar(i);
}
