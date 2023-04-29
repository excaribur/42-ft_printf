/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilprintf_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <phonyiam.jirayut@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 12:56:18 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/29 15:16:42 by jphonyia         ###   ########.fr       */
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
	if (c == CHA_C)
		lenght = get_char(ptr);
	else if (c == CHA_S)
		lenght = get_str(ptr);
	else if (c == CHA_P)
		lenght = get_ptr(ptr);
	else if (c == CHA_D)
		lenght = get_dec(ptr);
	else if (c == CHA_I)
		lenght = get_int(ptr);
	else if (c == CHA_U)
		lenght = get_unsigned_dec(ptr);
	else if (c == CHA_X_LOWER)
		lenght = get_hex(ptr, 1);
	else if (c == CHA_X_UPPER)
		lenght = get_hex(ptr, 0);
	else if (c == CHA_PERCENT)
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
		str = STR_NULL;
	lenght = ft_putstr(str);
	return (lenght);
}

/*
* @Desc: To get void pointer in variadic argument by conversion  and print it out
* @Params: ptr = varia args
* @Return: lenght = Lenght of printed out string
*
* This code did't return the same lenght of printf function when ptr = null
* Becuase (when type cast to int, the function was failed in MIN_LONG)
*
*/
int	get_ptr(va_list ptr)
{
	size_t	length;
	char	*str;
	int		base;
	void	*address;

	str = NULL;
	address = NULL;
	base = 16;
	length = 0;
	address = va_arg(ptr, void *);
	if (!address)
		return (putstr_null_form_memory(str));
	length += putstr_form_memory(str);
	str = make_hex((unsigned long long)address, base, str);
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
	str = NULL;
	dec = va_arg(ptr, int);
	if (dec == 0)
		return (putstr_null(str));
	str = ft_itoa(dec);
	lenght = ft_putstr(str);
	if (str)
		free(str);
	return (lenght);
}
