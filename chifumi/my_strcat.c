/*
** my_strcat.c for  in /home/piscine/jourC04/my_strcat
** 
** Made by BENKRIZI El harag
** Login   <benkri_e@etna-alternance.net>
** 
** Started on  Thu Mar 23 11:50:15 2017 BENKRIZI El harag
** Last update Thu Mar 23 12:43:39 2017 BENKRIZI El harag
*/

char	*my_strcat(char *dest, char *src);

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while(dest[i])
    i++;
  while(src[j])
  {
    dest[i] = src[j];
    j++;
    i++;
  }
  dest[i] = '\0';
  return(dest);
}
