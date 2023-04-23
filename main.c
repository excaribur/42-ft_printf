// #include "libftprintf.h"
#include <stdio.h>
#include "includes/libftprintf.h"
#include "../libft/libft.h"

int	main()
{
	int returnfunc;

	ft_putstr_fd("\n TEST conversion %d : ", 1);
	returnfunc = ft_printf("42 is %d",42);
	ft_putstr_fd(" and length : ", 1);
	ft_putnbr_fd(returnfunc, 1);
	ft_putstr_fd("\n", 1);

	ft_putstr_fd("\n TEST conversion %c : ", 1);
	returnfunc = ft_printf("A is %c",'A');
	ft_putstr_fd(" and length : ", 1);
	ft_putnbr_fd(returnfunc, 1);
	ft_putstr_fd("\n", 1);

	ft_putstr_fd("\n TEST conversion %s : ", 1);
	returnfunc = ft_printf("BKK is %s","BKK");
	ft_putstr_fd(" and length : ", 1);
	ft_putnbr_fd(returnfunc, 1);
	ft_putstr_fd("\n", 1);


	ft_putstr_fd("\n==== DONE MAIN() ==\n", 1);

	return 0;
}
