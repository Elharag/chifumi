/*
** my_strcmp.c for  in /home/piscine/jourC04/my_strcmp
** 
** Made by BENKRIZI El harag
** Login   <benkri_e@etna-alternance.net>
** 
** Started on  Thu Mar 23 10:15:58 2017 BENKRIZI El harag
** Last update Thu Mar 23 10:32:12 2017 BENKRIZI El harag
*/

int	my_strcmp(char *s1, char *s2);

int	my_strcmp(char *s1, char *s2)
{
  int	i;
  int	flags;

  i = 0;
  flags = 0;
  while(s1[i] || s2[i] != '\0')
  {
    if(s1[i] == s2[i])
      flags = 0;
    if(s1[i] < s2[i])
    {
      flags = -1;
      return(flags);
    }
    if(s1[i] > s2[i])
    {
      flags = 1;
      return(flags);
    }
    i++;
  }
  return(flags);
}
