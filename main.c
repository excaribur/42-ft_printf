// #include "libftprintf.h"
#include <stdio.h>
#include "includes/ft_printf.h"
#include "libft/libft.h"

int	main()
{
	int returnfunc;
	int l;

	ft_putstr_fd("\n TEST conversion %d :\n", 1);
	returnfunc = ft_printf("42 is %d",42);
	ft_putstr_fd("\nlength : ", 1);
	ft_putnbr_fd(returnfunc, 1);
	printf("\n___________________________\n");
	l = printf("42 is %d",42);
	printf("\nprintf l: %i\n",l);
	ft_putstr_fd("\n", 1);

	// ft_putstr_fd("\n TEST conversion %c : ", 1);
	// returnfunc = ft_printf(": %c %c %c :", '0', 0, '1');
	// ft_putstr_fd(" and length : ", 1);
	// l = printf(": %c %c %c :", '0', 0, '1');
	// printf("\nprintf l: %i\n",l);
	// ft_putnbr_fd(returnfunc, 1);
	// ft_putstr_fd("\n", 1);

	ft_putstr_fd("\n TEST conversion %s :\n", 1);
	returnfunc = ft_printf(" NULL %s NULL ", NULL);
	ft_putstr_fd("\nlength : ", 1);
	ft_putnbr_fd(returnfunc, 1);
	printf("\n___________________________\n");
	l = printf(" NULL %s NULL ", NULL);
	printf("\nprintf l: %i\n",l);
	ft_putstr_fd("\n", 1);

	ft_putstr_fd("\n TEST conversion %i :\n", 1);
	returnfunc = ft_printf("2023 is %i",2023);
	ft_putstr_fd("\nlength : ", 1);
	ft_putnbr_fd(returnfunc, 1);
	printf("\n___________________________\n");
	l = printf("2023 is %i",2023);
	printf("\nprintf l: %i\n",l);
	ft_putstr_fd("\n", 1);

	ft_putstr_fd("\n TEST conversion %u : ", 1);
	returnfunc = ft_printf("0 is %u", 0);
	ft_putstr_fd("\nlength : ", 1);
	ft_putnbr_fd(returnfunc, 1);
	printf("\n___________________________\n");
	l = printf("0 is %u", 0);
	printf("\nprintf l: %i\n",l);
	ft_putstr_fd("\n", 1);

	// ft_putstr_fd("\n TEST conversion %% : ", 1);
	// returnfunc = ft_printf("%% is %%");
	// ft_putstr_fd(" and length : ", 1);
	// ft_putnbr_fd(returnfunc, 1);
	// ft_putstr_fd("\n", 1);

	// unsigned char a=0x64;
	// int b=0xFAFA;
	// printf("value of a: %X [%x]\n",a,a);
	// printf("value of b: %X [%x]\n",b,b);
	ft_putstr_fd("\n TEST conversion %x : ", 1);
	returnfunc = ft_printf("hex is %x and %x", 0xFAFA, __LONG_MAX__);
	ft_putstr_fd("\nlength : ", 1);
	ft_putnbr_fd(returnfunc, 1);
	printf("\n___________________________\n");
	l = printf("hex is %x and %lx", 0xFAFA, __LONG_MAX__);
	printf("\nprintf l: %i\n",l);
	ft_putstr_fd("\n", 1);


	ft_putstr_fd("\n TEST conversion %X : ", 1);
	returnfunc = ft_printf("HEX is %X and %X", 999, 3735929054u);
	ft_putstr_fd("\nlength : ", 1);
	ft_putnbr_fd(returnfunc, 1);
	printf("\n___________________________\n");
	l = printf("HEX is %X and %X", 999, 3735929054u);
	printf("\nprintf l: %i\n",l);
	ft_putstr_fd("\n", 1);

	ft_putstr_fd("\n TEST conversion %p : \n", 1);
	returnfunc = ft_printf("address of l is %p\n", &l);
	ft_putstr_fd("\nlength : ", 1);
	ft_putnbr_fd(returnfunc, 1);
	printf("\n___________________________\n");
	l = printf("address of l is %p\n", &l);
	printf("\nprintf l: %i\n",l);
	ft_putstr_fd("\n", 1);

	ft_putstr_fd("\n==== DONE MAIN() ==\n", 1);


	// int m = printf(" NULL %s NULL ", NULL);
	// printf("\nprintf m: %i\n",m);


	return 0;
}
