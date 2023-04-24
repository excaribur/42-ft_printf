/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilprintf_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <phonyiam.jirayut@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 12:56:18 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/24 22:49:49 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

/*
* @Desc: to get char variadic agrument by conversion
* @Params:
* @Return:
*/
int	get_char(va_list ptr)
{
	char	c;
	size_t 	lenght;

	lenght = 0;
	c = va_arg(ptr, int);
	lenght = ft_putchar(c);
	return (lenght);
}

/*
* @Desc: to get char in variadic agrument by conversion
* @Params:
* @Return:
*/
int get_str(va_list ptr)
{
	char *str;
	size_t lenght;

	lenght = 0;
	str = va_arg(ptr, char *);
	if (str == NULL)
		str = S_NULL;
	lenght = ft_putstr(str);
	return (lenght);
}

/*
* @Desc: to get void pointer in variadic agrument by conversion
* @Params:
* @Return:
*/
char	*get_ptr(va_list ptr)
{
	va_arg(ptr, int);
	return (NULL);
}

/*
* @Desc: to get decimal in variadic agrument by conversion
*
* @Params:
* @Return:
*/
int get_dec(va_list ptr)
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
	return(lenght);
}
