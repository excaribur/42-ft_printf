/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilprintf_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <phonyiam.jirayut@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 12:56:18 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/27 22:58:50 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

/*
* @Desc: This fuction sends the variable to converse varia args and print
* @Params:	ptr = list of the varia args
*			c = a symbol character for conversion
* @Return:
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
