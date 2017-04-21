/*
** comparePartie.c for  in /home/piscine/chifumi
** 
** Made by BENKRIZI El harag
** Login   <benkri_e@etna-alternance.net>
** 
** Started on  Fri Mar 31 13:31:52 2017 BENKRIZI El harag
** Last update Sat Apr  1 10:39:23 2017 BENKRIZI El harag
*/

int	my_strcmp(char *s1, char *s2);

int	comparePartie(int iA, char *entree)
{
  if(iA == 1 && (my_strcmp(entree, "ROCK") == 0 || my_strcmp(entree, "SCISSORS") == 0))
    return(-1);
  if(iA == 2 && (my_strcmp(entree, "LIZARD") == 0 || my_strcmp(entree, "SCISSORS") == 0))
    return(-1);
  if(iA == 3 && (my_strcmp(entree, "ROCK") == 0 || my_strcmp(entree, "SPOCK") == 0))
    return(-1);
  if(iA == 4 && (my_strcmp(entree, "PAPER") == 0 || my_strcmp(entree, "LIZARD") == 0))
    return(-1);
  if(iA == 5 && (my_strcmp(entree, "PAPER") == 0 || my_strcmp(entree, "SPOCK") == 0))
    return(-1);
  if((my_strcmp(entree, "SPOCK") == 0) && (iA == 2 || iA == 4))
    return(1);
  if((my_strcmp(entree, "ROCK") == 0) && (iA == 4 || iA == 5))
    return(1);
  if((my_strcmp(entree, "PAPER") == 0) && (iA == 2 || iA == 1))
    return(1);
  if((my_strcmp(entree, "SCISSORS") == 0) && (iA == 3 || iA == 5))
    return(1);
  if((my_strcmp(entree, "LIZARD") == 0) && (iA == 3 || iA == 1))
    return(1);
  else
    return(0);
}
