/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilprintf_3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <phonyiam.jirayut@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 12:56:18 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/22 23:49:20 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

/*
* @Desc: to get integer variadic agrument by conversion
* @Params:
* @Return:
*/

char	*get_int(va_list ptr)
{
	va_arg(ptr, int);
	return (NULL);
}
/*
* @Desc: to get unsigned decimal variadic agrument by conversion
* @Params:
* @Return:
*/
char	*get_unsigned_dec(va_list ptr)
{
	va_arg(ptr, int);
	return (NULL);
}

/*
* @Desc: to get hex variadic agrument by conversion
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
* @Desc: to get percent variadic agrument by conversion
* @Params:
* @Return:
*/
char	*get_percent(va_list ptr)
{
	va_arg(ptr, int);
	return (NULL);
}

