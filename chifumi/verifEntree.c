/*
** verifEntree.c for  in /home/piscine/chifumi
** 
** Made by BENKRIZI El harag
** Login   <benkri_e@etna-alternance.net>
** 
** Started on  Fri Mar 31 13:15:13 2017 BENKRIZI El harag
** Last update Fri Mar 31 14:32:01 2017 BENKRIZI El harag
*/

#include <stdio.h>

int	my_strcmp(char *s1, char *s2);
void	my_putstr(char *str);

char	*strupcase(char *str)
{
  int	i;

  i = 0;
  while(str[i])
  {
    if(str[i] >= 'a' && str[i] <= 'z')
    {
      str[i] = str[i] - 32;
      i++;
    }
    else
      i++;
  }
  return(str);
}

char	*readLine();
void	verifEntree(char **entree)
{
  strupcase(*entree);
  while((my_strcmp(*entree, "ROCK") != 0) && (my_strcmp(*entree, "PAPER")!= 0) && (my_strcmp(*entree, "SCISSORS") != 0) && (my_strcmp(*entree, "LIZARD") != 0) && (my_strcmp(*entree, "SPOCK") != 0))
  {
    my_putstr("A vous de jouer > ");
    *entree = readLine();
    strupcase(*entree);
  }
}
