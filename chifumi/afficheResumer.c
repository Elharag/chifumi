/*
** afficheResumer.c for  in /home/piscine/chifumi/benkri_e/chifumi
** 
** Made by BENKRIZI El harag
** Login   <benkri_e@etna-alternance.net>
** 
** Started on  Sat Apr  1 11:01:50 2017 BENKRIZI El harag
** Last update Sat Apr  1 11:06:05 2017 BENKRIZI El harag
*/

#include <unistd.h>
#include "my_list.h"

void	my_putstr(char *str);

void	afficheResumer(t_list *tmp)
{
  while(tmp != NULL)
    {
      my_putstr(tmp->dataJoueur);
      my_putstr("\t");
      my_putstr(tmp->dataIA);
      tmp = tmp->next;
      write(1, "\n", 1);
    }
}
