/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <phonyiam.jirayut@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 12:56:18 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/24 22:12:34 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	to_print(va_list ptr, char *data);

/*
* @Desc: to initialize variadict funtion and invoke to_print
* @Params: *data = String data will print out including with cspduxIX%
* @Params: varia args : ...
* @Return: lenght = the lenght of print out
*/
int	ft_printf(const char *data, ...)
{
	size_t	lenght;
	va_list	ptr;
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
* @Desc: to prepare string and each types in va_list ptr to string only
* @Params:
* @Return:
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

