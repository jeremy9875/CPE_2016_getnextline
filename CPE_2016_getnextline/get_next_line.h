/*
** get_next_line.h for get_next_line in /home/jeremy.elkaim/CPE_2016_getnextline
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Tue Jan  3 08:43:21 2017 jeremy elkaim
** Last update Wed Jan  4 08:16:41 2017 jeremy elkaim
*/
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

# ifndef READ_SIZE

#  define READ_SIZE (1000)

void	my_putchar(char c);
void	my_putstr(char *str);
char	*my_strcpy(char *dest, char *src);

# endif /* !READ_SIZE */
