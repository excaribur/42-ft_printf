/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <phonyiam.jirayut@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 12:56:18 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/28 22:45:27 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

/*
* @Desc: To initialize variadict funtion and invoke function to_print
* @Params: *data = String data will print, including with cspduxIX%
* @Params: variadic argument = ...
* @Return: lenght = the lenght of print out
*/
int	ft_printf(const char *data, ...)
{
	size_t		lenght;
	va_list		ptr;
	const char	*str;

	str = ft_strdup(data);
	va_start(ptr, data);
	lenght = to_print(ptr, (char *)str);
	va_end(ptr);
	if (str)
		free((char *)str);
	return (lenght);
}

/*
* @Desc: To print string and to converse varia arg
* @Params:	ptr = list of the variadic argument
*			str = string data from ft_print
* @Return:	length = lenght of string
*/
int	to_print(va_list ptr, char *str)
{
	size_t	length;

	length = 0;
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			length += conversion(ptr, *str);
		}
		else
			length += ft_putchar(*str);
		str++;
	}
	return (length);
}
