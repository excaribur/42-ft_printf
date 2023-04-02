/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <jphonyia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 14:01:41 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/02 14:43:43 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "../libft/libft.h"
#include <stdio.h>
#include <stdarg.h>

void	my_printf(char *format, ...)
{
	va_list	args;
	char	c;
	int		d;
	char	*s;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				c = va_arg(args, int);
				putchar(c);
			}
			else if (*format == 'd')
			{
				d = va_arg(args, int);
				printf("%d", d);
			}
			else if (*format == 's')
			{
				s = va_arg(args, char *);
				printf("%s", s);
			}
			else
				putchar(*format);
		}
		else
			putchar(*format);
		format++;
	}
	va_end(args);
}
