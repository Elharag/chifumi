/*
** choixIA.c for  in /home/piscine/chifumi
** 
** Made by BENKRIZI El harag
** Login   <benkri_e@etna-alternance.net>
** 
** Started on  Fri Mar 31 12:51:05 2017 BENKRIZI El harag
** Last update Sat Apr  1 10:39:12 2017 BENKRIZI El harag
*/

#include <stdlib.h>
#include <time.h>

int	choixIA(int nb)
{
  int	random;

  srand(time(NULL));
  random = (rand() % nb) +1;
  return(random);
}
