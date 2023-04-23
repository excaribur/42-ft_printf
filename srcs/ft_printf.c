/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <phonyiam.jirayut@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 12:56:18 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/23 12:55:35 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
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

	va_start(ptr, data);
	lenght = to_print(ptr, (char *)data);
	va_end(ptr);
	return (lenght);
}

/*
* @Desc: to prepare string and each types in va_list ptr to string only
* @Params:
* @Return:
*/
char	*to_prepare_str(va_list ptr, size_t *length, char *str)
{
	char	*buffer;
	char	*str_con;

	buffer = NULL;
	str_con = NULL;
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str_con = conversion(ptr, *(++str));
		}
		else
	 		str_con = to_str(*str);
		str++;
		buffer = make_buffer(buffer, str_con);
	}
	*length = ft_strlen(buffer);
	return (buffer);
}

/*
* @Desc: to write the string to screen
* @Params:
* @Return:
*/
int	to_print(va_list ptr, char *data)
{
	size_t	length;
	char	*str;

	str = NULL;
	length = 0;
	str = to_prepare_str(ptr, &length, data);
	ft_putstr_fd(str, 1);
	free(str);
	return (length);
}
