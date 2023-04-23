// C program for the above approach
#include <stdarg.h>
#include <stdio.h>
# include <unistd.h>

void	putnbr(long n, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);

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

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	putnbr(long n, int fd)
{
	char	c;

	if (n > 9)
		putnbr(n / 10, fd);
	c = '0' + (n % 10);
	ft_putchar_fd(c, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = (long) n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = -1 * num;
	}
	putnbr(num, fd);
}
