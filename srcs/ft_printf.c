/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <your username> <your@email.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 12:56:18 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/02 17:43:13 by <your usern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *data, ...)
{
	size_t	lenght;
	va_list	args;

	va_start(args, data);
	lenght = to_print(args, data);
	va_end(args);
	return (lenght);
}

/*
* @Desc: to prepare string and each types in va_list args to string only
* @Params:
* @Return:
*/
static char	*to_prepare_str(va_list args, size_t *length, char *str, char *data)
{
	char	*temp;

	str = data;
	while (data != NULL)
	{
		if (*data == '%')
		{
			// temp = to_convers(args, )
			// *lenght = *length + ??;
		}
		else
		{
			*str = *data++;
			*length += 1;
		}
	}
	return (str);
}

/*
* @Desc: to write the string to screen
* @Params:
* @Return:
*/
static int	to_print(va_list args, char *data)
{
	size_t	length;
	char	*str;

	str = to_prepare_str(args, &length, str, data);
	write (1, str, length);
	return (length);
}
