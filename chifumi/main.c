/*
** main.c for  in /home/piscine/chifumi
** 
** Made by BENKRIZI El harag
** Login   <benkri_e@etna-alternance.net>
** 
** Started on  Fri Mar 31 09:39:46 2017 BENKRIZI El harag
** Last update Sat Apr  1 11:11:56 2017 BENKRIZI El harag
*/

#include <stdlib.h>

void	my_putstr(char *str);
int	my_strcmp(char *s1, char *s2);
char	*my_strcat(char *dest, char *src);
int	verifArgument(char **argv);
void	erreurArgument();
void	run(int choix, char *av);

void	erreurArgument()
{
  my_putstr("\nMissing argument.\n");
  my_putstr("USAGE: ./chifumi -v 'version(3 or 5)' -e 'duration of the game (odd number)'\n\n");
}

int	main(int argc, char **argv)
{
  int ok;

  ok = 12;
  if(argc != 5)
    erreurArgument();
  else
  {
    ok = verifArgument(argv);
    if(ok == 0 || ok == 1)
    {
      my_putstr("\033[H\033[2J");
      run(ok, argv[4]);
    }
  }
  return 0;
}
