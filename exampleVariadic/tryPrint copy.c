// C program for the above approach
#include <stdarg.h>
#include <stdio.h>
# include "../libft/libft.h"


// Variadic function to find the largest number
int tryPrint(char *str, ...)
{
	// Declaring pointer to the
	// argument list
	va_list ptr;

	// Initializing argument to the
	// list pointer
	va_start(ptr, str);

	// find %[d] and replace variadic argument
	int d;
	while(*str)
	{
		if(*str == '%')
		{
			str++;
			d = va_arg(ptr, int);
			//printf("%d", d);
			ft_putnbr_fd(d, 1);
			str++;
		}
		else{
			//printf("%c", *str);
			ft_putchar_fd(*str, 1);
			str++;
		}
	}

	// End of argument list traversal
	va_end(ptr);

	return 0;
}

// Driver Code
int main()
{
	printf("\n\nVariadic functions: \n");

	char *str = "I have a number %d";
	tryPrint(str, 20);

	//printf("\n\nI am:%d in %c year %d \n", 42, "BKK", 2023);

	return 0;
}


