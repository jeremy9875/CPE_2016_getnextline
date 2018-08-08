/*
** get_next_line.c for get_next_line in /home/jeremy.elkaim/CPE_2016_getnextline
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Tue Jan  3 08:43:29 2017 jeremy elkaim
** Last update Wed Jan  4 09:09:45 2017 jeremy elkaim
*/
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include "get_next_line.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i+1] != '\n')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  if (str[i+1] == '\n')
    {
      str[i+1] = '\0';
      my_putchar(str[i]);
    }
}

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  return (dest);
}

char	*get_next_line(const int fd)
{
  char	result[READ_SIZE + 1];
  char	*s;

  s = malloc(sizeof(char) * READ_SIZE);
  read(fd, result, READ_SIZE);
  my_strcpy(s, result);
  return (s);
}

int	main()
{
  char	*s;
  int	i;

  i = 0;
  s = get_next_line(0);
  while (i != 1)
    {
      my_putstr(s);
      my_putchar('\n');
      free(s);
      i = i + 1;
    }
  return (0);
}
