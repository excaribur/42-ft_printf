#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int AddNumbers(int n, ...);
void my_printf(char *format, ...);
int	ft_printf(const char *data, ...);

#endif
