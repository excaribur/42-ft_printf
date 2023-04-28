/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilprintf_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <phonyiam.jirayut@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 12:56:18 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/28 22:49:05 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

/*
* @Desc: This fuction sends the variable to converse varia args and print out
* @Params:	ptr = List of the varia args
*			c = A symbol character for conversion
* @Return: lenght = Lenght of printed out string
*/
int	conversion(va_list ptr, char c)
{
	size_t	lenght;

	lenght = 0;
	if (c == 'c')
		lenght = get_char(ptr);
	else if (c == 's')
		lenght = get_str(ptr);
	else if (c == 'p')
		lenght = get_ptr(ptr);
	else if (c == 'd')
		lenght = get_dec(ptr);
	else if (c == 'i')
		lenght = get_int(ptr);
	else if (c == 'u')
		lenght = get_unsigned_dec(ptr);
	else if (c == 'x')
		lenght = get_hex(ptr, 1);
	else if (c == 'X')
		lenght = get_hex(ptr, 0);
	else if (c == '%')
		lenght = get_percent();
	return (lenght);
}

/*
* @Desc: To get char variadic argument by conversion
* @Params: ptr = varia args
* @Return: lenght = Lenght of printed out string
*/
int	get_char(va_list ptr)
{
	char	c;
	size_t	lenght;

	lenght = 0;
	c = va_arg(ptr, int);
	lenght = ft_putchar(c);
	return (lenght);
}

/*
* @Desc: To get string from varia args and print it out
* @Params: ptr = varia args
* @Return: lenght = Lenght of printed out string
*/
int	get_str(va_list ptr)
{
	char	*str;
	size_t	lenght;

	lenght = 0;
	str = va_arg(ptr, char *);
	if (str == NULL)
		str = S_NULL;
	lenght = ft_putstr(str);
	return (lenght);
}

/*
* @Desc: To get void pointer in variadic argument by conversion  and print it out
* @Params: ptr = varia args
* @Return: lenght = Lenght of printed out string
*/
int	get_ptr(va_list ptr)
{
	size_t				length;
	char				*str;
	int					base;
	unsigned long long	address;

	address = va_arg(ptr, unsigned long long);
	str = NULL;
	base = 16;
	length = 0;
	str = ft_strdup(FORM_MEMORY);
	length += ft_putstr(str);
	if (str)
		free(str);
	if (address == 0)
	{
		str = ft_strdup("0");
		length += ft_putstr(str);
		if (str)
			free(str);
	}
	str = make_hex(address, base, str);
	length += ft_putstr(str);
	if (str)
		free(str);
	return (length);
}

/*
* @Desc: To get decimal in variadic argument by conversion and print it out
*
* @Params:
* @Return: lenght = Lenght of printed out string
*/
int	get_dec(va_list ptr)
{
	int		dec;
	size_t	lenght;
	char	*str;

	lenght = 0;
	dec = va_arg(ptr, int);
	str = ft_itoa(dec);
	lenght = ft_putstr(str);
	if (str)
		free(str);
	return (lenght);
}
