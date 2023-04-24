/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilprintf_3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <phonyiam.jirayut@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 12:56:18 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/24 22:53:39 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

/*
* @Desc: to print out integer number from variadic agrument
* @Params:
* @Return: lenght of String Number
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
* @Params:
* @Return:
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
	return(length);
}

/*
* @Desc: to print out hex variadic agrument by conversion
* @Params:
* @Return:
*/
char	*get_hex(va_list ptr, int i_type)
{
	va_arg(ptr, int);
	if (i_type == 0)
		return (NULL);
	if (i_type == 1)
		return (NULL);
	return (NULL);
}

/*
* @Desc: to print out percent variadic agrument by conversion
* @Params:
* @Return: lenght of '%'
*/
int	get_percent()
{
	size_t	length;

	//length = 0;
	length = ft_putchar(PERCENT);
	return (length);
}

