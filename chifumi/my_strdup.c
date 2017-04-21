/*
** my_strdup.c for  in /home/piscine/jourC07/my_strdup
** 
** Made by BENKRIZI El harag
** Login   <benkri_e@etna-alternance.net>
** 
** Started on  Mon Mar 27 11:22:44 2017 BENKRIZI El harag
** Last update Mon Mar 27 11:39:45 2017 BENKRIZI El harag
*/

#include <stdlib.h>

char	*my_strdup(char *str)
{
  int	i;
  char	*new_str;

  i = 0;
  while(str[i])
    i++;
  new_str = malloc(sizeof(*str) * i + 1);
  i = 0;
  while(str[i])
  {
    new_str[i] = str[i];
    i++;
  }
  new_str[i] = '\0';
  return(new_str);
}
