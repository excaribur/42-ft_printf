// C program for the above approach

#include "libftprintf.h"
#include "../libft/libft.h"

int tryPrint(char *data, ...)
{


	size_t len;


	len = ft_strlen(data);
	va_list ptr;
	va_start(ptr, data);

	while (data)
	{

		if (*data == '%')
			write(1, "$", 1);
		write(1, data++, 1);
	}

	va_end(ptr);

	return 0;
}

