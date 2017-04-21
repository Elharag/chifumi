/*
** my_putstr.c for  in /home/piscine/jourC03/my_putstr
** 
** Made by BENKRIZI El harag
** Login   <benkri_e@etna-alternance.net>
** 
** Started on  Tue Mar 21 20:01:04 2017 BENKRIZI El harag
** Last update Sun Mar 26 23:20:07 2017 BENKRIZI El harag
*/

#include <unistd.h>

void	my_putstr(char *str);

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while(str[i])
  {
    write(1, &str[i], 1);
    i++;
  }
}
