/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilprintf_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <phonyiam.jirayut@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 12:56:18 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/28 22:48:35 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

/*
* @Desc: To print out integer number from variadic agrument
* @Params: ptr = Variadic argument
* @Return: lenght = Lenght of printed out string
*/
int	get_int(va_list ptr)
{
	int		interger;
	size_t	lenght;
	char	*str;

	lenght = 0;
	interger = va_arg(ptr, int);
	str = ft_itoa(interger);
	lenght = ft_putstr(str);
	if (str)
		free(str);
	return (lenght);
}

/*
* @Desc: to print out unsigned decimal variadic agrument by conversion
* @Params: ptr = Variadic argument
* @Return: lenght = Lenght of printed out string
*/
int	get_unsigned_dec(va_list ptr)
{
	size_t			length;
	unsigned int	unsigned_dec;
	char			*str;

	length = 0;
	unsigned_dec = va_arg(ptr, unsigned int);
	str = ft_unsigned_tostr(unsigned_dec);
	length = ft_putstr(str);
	if (str)
		free(str);
	return (length);
}

/*
* @Desc: helper fuction of to make Hexadecimal to string by allcating of memory
* @Params:	nbr = the number that converse to Hexadecimal
*			base = base of the number
*			*str = A string to allocate
* @Return: String
*/
char	*make_hex(unsigned long long nbr, int base, char *str)
{
	size_t	length;

	length = 0;
	length = find_digit(nbr, base);
	str = (char *)malloc(sizeof(char) * length + 1);
	if (!str)
		return (0);
	str[length] = '\0';
	str = to_str_hex((unsigned long long)nbr, str, length, base);
	return (str);
}

/*
* @Desc: The main fuction prints Hexadecimal variadic agrument by conversion
* @Params:	ptr = Variadic argument
*			is_lower = mode to print in lower or upper case String
* @Return: lenght = Lenght of printed out string
*/
int	get_hex(va_list ptr, int is_lower)
{
	unsigned long long	nbr;
	size_t				length;
	int					base;
	char				*str;

	base = 16;
	length = 0;
	str = NULL;
	nbr = va_arg(ptr, unsigned int);
	if (nbr == 0)
	{
		str = ft_strdup("0");
		length = ft_putstr(str);
		free(str);
		return (length);
	}
	str = make_hex(nbr, base, str);
	if (!is_lower)
		str = ft_str_to_upper(str);
	length += ft_putstr(str);
	if (str)
		free(str);
	return (length);
}

/*
* @Desc: To print a symbol percent
* @Params:
* @Return: lenght = Lenght of printed out a character
*/
int	get_percent(void)
{
	size_t	length;

	length = ft_putchar(PERCENT);
	return (length);
}
