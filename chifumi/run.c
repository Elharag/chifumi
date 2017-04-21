/*
** run.c for  in /home/piscine/chifumi
** 
** Made by BENKRIZI El harag
** Login   <benkri_e@etna-alternance.net>
** 
** Started on  Fri Mar 31 11:16:32 2017 BENKRIZI El harag
** Last update Sat Apr  1 11:19:19 2017 BENKRIZI El harag
*/

#include <stdlib.h>
#include <unistd.h>
#include "my_list.h"
#include "my_struct.h"

char	my_put_nbr(int n);
int	my_strcmp(char *s1, char *s2);
char	*resultatTour(int res, char *entree, int random, t_struct st);
void	my_putstr(char *str);
char	*readLine();
char	*my_strdup(char *str);
char	*tour(t_list *list, char *entree);
int	choixIA();
int	my_getnbr(char *str);
int	verifEntree(char **entree);
int	comparePartie(int iA, char *entree);
t_list	*add_params(t_list *list, char *dataJoueur, char *dataIA);
void	afficheResumer(t_list *tmp);


void	debutPartie(int choix, int duree)
{
  my_putstr("\n------------------------------\n");
  my_putstr("\nVous avez préparé la partie avec les paramètres suivants\n\n");
  if(choix == 0)
  {
    my_putstr("VERSION : ROCK - PAPER - SCISSORS\n");
    my_putstr("BEST OF : ");
    my_put_nbr(duree);
  }
  if (choix == 1)
  {
    my_putstr("VERSION : ROCK - PAPER - SCISSORS - LIZARD - SPOCK\n");
    my_putstr("BEST OF : \n");
    my_put_nbr(duree);
  }
  my_putstr("\n------------------------------\n");
}

int	verifRejouer(char **rejouer)
{
  int	flags;

  flags = 1;
  while((my_strcmp(*rejouer, "YES") != 0) && (my_strcmp(*rejouer, "NO") != 0))
  {
    my_putstr("Voulez-vous rejouez ? (YES or NO)");
    *rejouer = readLine();
  }
  if(my_strcmp(*rejouer, "YES") == 0)
    flags = 1;
  if(my_strcmp(*rejouer, "NO") == 0)
    flags = 0;
  return(flags);
}

t_list	*jouer(int choix, t_struct partie, int duree, t_list *list)
{
  int	random;
  char	*entree;
  int	res;
   char	*iA;
  
  while((partie.dataJoueur < duree) && (partie.dataIA < duree))
    {
      if(choix == 0)
	random = choixIA(3);
      else if (choix == 1)
	random = choixIA(5);
      my_putstr("\nA vous de jouer > ");
      entree = readLine();
      verifEntree(&entree);
      res = comparePartie(random, entree);
      if(res == -1)
	partie.dataIA ++;
      if(res == 1)
	partie.dataJoueur ++;
      if(res == 0)
	res = 0;
      iA = resultatTour(res, entree, random, partie);
      list = add_params(list, entree, iA);
    }
  return(list);
}

void	run(int choix, char *av)
{
  int		flags;
  t_struct	partie;
  t_list	*list;
  int		duree;
  t_list	*tmp;
  char		*rejouer;

  flags = 1;
  partie.dataJoueur = 0;
  partie.dataIA = 0;
  duree = my_getnbr(av);
  duree = (duree / 2) + 1;
  debutPartie(choix, duree);
  while(flags == 1)
  {
    partie.dataJoueur = 0;
    partie.dataIA = 0;
    list = NULL;
    tmp = jouer(choix, partie, duree, list);
    afficheResumer(tmp);
    my_putstr("Voulez-vous rejouez ?(YES or NO)");
    rejouer = readLine();
    flags = verifRejouer(&rejouer);
  }
  my_putstr("Merci ! Au revoir ! ! !\n\n");
}
