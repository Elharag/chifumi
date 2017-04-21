/*
** resultatTour.c for  in /home/piscine/chifumi
** 
** Made by BENKRIZI El harag
** Login   <benkri_e@etna-alternance.net>
** 
** Started on  Fri Mar 31 14:13:22 2017 BENKRIZI El harag
** Last update Sat Apr  1 10:44:59 2017 BENKRIZI El harag
*/

#include "my_struct.h"

void	my_putstr(char *str);
void	my_put_nbr(int n);

char *resIA(int res)
{
  if(res == 1)
    return("SPOCK");
  if(res == 2)
    return("ROCK");
  if(res == 3)
    return("PAPER");
  if(res == 4)
    return("SCISSORS");
  if(res == 5)
    return("LIZARD");
  return "0";
}

void	perdu(char *entree, int random, t_struct st)
{
  my_putstr("Vous avez joué '");
  my_putstr(entree);
  my_putstr("'\n");
  my_putstr("L'IA a joué '");
  my_putstr(resIA(random));
  my_putstr("'\n");
  my_putstr("GAME OVER ! ! !\n");
  my_putstr("VOUS ");
  my_put_nbr(st.dataJoueur);
  my_putstr(" : IA ");
  my_put_nbr(st.dataIA);
  my_putstr("\n");
}

void	gagner(char *entree, int random, t_struct st)
{
  my_putstr("Vous avez joué '");
  my_putstr(entree);
  my_putstr("'\n");
  my_putstr("L'IA a joué '");
  my_putstr(resIA(random));
  my_putstr("'\n");
  my_putstr("Bravo ! ! ! Vous avez gagner !\n");
  my_putstr("VOUS ");
  my_put_nbr(st.dataJoueur);
  my_putstr(" : IA ");
  my_put_nbr(st.dataIA);
  my_putstr("\n");
}

char	*resultatTour(int res, char *entree, int random, t_struct st)
{
  if(res == -1)
    perdu(entree, random, st);
  else if(res == 1)
    gagner(entree, random, st);
  else if(res == 0)
  {
    my_putstr("Vous avez joué '");
    my_putstr(entree);
    my_putstr("'\n");
    my_putstr("L'IA a joué '");
    my_putstr(resIA(random));
    my_putstr("'\n");
    my_putstr("EGALITE ! Rejouez le tour !\n");
    my_putstr("VOUS ");
    my_put_nbr(st.dataJoueur);
    my_putstr(" : IA ");
    my_put_nbr(st.dataIA);
    my_putstr("\n");
  }
  return(resIA(random));
}
