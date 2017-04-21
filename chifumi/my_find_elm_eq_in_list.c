/*
** my_find_elm_eq_in_list.c for  in /home/piscine/chifumi
** 
** Made by BENKRIZI El harag
** Login   <benkri_e@etna-alternance.net>
** 
** Started on  Fri Mar 31 12:28:35 2017 BENKRIZI El harag
** Last update Fri Mar 31 16:15:55 2017 BENKRIZI El harag
*/

#include <stdlib.h>
#include "my_list.h"

int	my_strcmp(char *s1, char *s2);

void	*my_find_elm_eq_in_list(t_list *begin, void *data_ref, int (*cmp)())
{
  while((begin != NULL) && (cmp(begin->dataJoueur, data_ref) != 0))
    {
      if(begin->next == NULL)
	return begin;
      begin = begin->next;
    }
  return(begin->dataJoueur);
}
