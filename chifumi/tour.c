/*
** tour.c for  in /home/piscine/chifumi
** 
** Made by BENKRIZI El harag
** Login   <benkri_e@etna-alternance.net>
** 
** Started on  Fri Mar 31 12:30:33 2017 BENKRIZI El harag
** Last update Fri Mar 31 16:21:51 2017 BENKRIZI El harag
*/

#include "my_list.h"

int	my_strcmp(char *s1, char *s2);
void	*my_find_elm_eq_in_list(t_list *begin, void *data_ref, int (*cmp)());

void	*tour(t_list *list, char *entree)
{
  t_list	*res;
  
  res =  my_find_elm_eq_in_list(list, entree, &my_strcmp);
  return(res);
}
