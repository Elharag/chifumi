/*
** add_params.c for  in /home/piscine/chifumi
** 
** Made by BENKRIZI El harag
** Login   <benkri_e@etna-alternance.net>
** 
** Started on  Fri Mar 31 12:18:11 2017 BENKRIZI El harag
** Last update Sat Apr  1 10:39:03 2017 BENKRIZI El harag
*/

#include <stdlib.h>
#include "my_list.h"

char	*my_strdup(char *str);

t_list  *add_params(t_list *list, char *dataJoueur, char *dataIA)
{
  t_list        *node;
  node = malloc(sizeof(*node));
  if(node == 0)
    return 0;
  node->next = list;
  node->dataJoueur = my_strdup(dataJoueur);
  node->dataIA = my_strdup(dataIA);
  return(node);
}
