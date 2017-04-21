/*
** verifArgument.c for  in /home/piscine/chifumi
** 
** Made by BENKRIZI El harag
** Login   <benkri_e@etna-alternance.net>
** 
** Started on  Fri Mar 31 11:10:07 2017 BENKRIZI El harag
** Last update Sat Apr  1 11:15:08 2017 BENKRIZI El harag
*/

int	my_strcmp(char *s1, char *s2);
void	erreurArgument();
int	my_getnbr(char *str);

int	verifDuree(char *av4)
{
  int	dur;

  dur = my_getnbr(av4);
  if(dur < 1)
    return(1);
  if((dur % 2) == 0)
    return(1);
  else if((dur % 2) == 1)
    return(0);
  return(0);
}

int     verifArgument(char **argv)
{
  int   i;
  int   j;
  int flags;
  
  i = 1;
  j = 12;
  flags = verifDuree(argv[4]);
  while(argv[i])
  {
    if((my_strcmp(argv[i], "-v") == 0) || (my_strcmp(argv[i], "3") == 0) || (my_strcmp(argv[i],"5") == 0) || (my_strcmp(argv[i], "-e") == 0) || (flags == 0))
    {
      if(my_strcmp(argv[i], "3") == 0)
	j = 0;
      else if(my_strcmp(argv[i], "5") == 0)
	j = 1;
    }
    else
    {
      erreurArgument();
      return 12;
    }
    i++;
  }
  return j;
}
