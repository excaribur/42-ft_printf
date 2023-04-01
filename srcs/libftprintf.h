#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int AddNumbers(int n, ...);
int tryPrint(char *data, ...);
int	ft_printf(const char *data, ...);

#endif
