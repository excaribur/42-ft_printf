/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilprintf_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <phonyiam.jirayut@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 12:56:18 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/23 12:54:10 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

/*
* @Desc: to get char variadic agrument by conversion
* @Params:
* @Return:
*/
char	*get_char(va_list ptr)
{
	char	c;

	c = va_arg(ptr, int);
	return (to_str(c));
}

/*
* @Desc: to get char in variadic agrument by conversion
* @Params:
* @Return:
*/
char	*get_str(va_list ptr)
{
	char *str;

	str = ft_strdup(va_arg(ptr, char *));
	return (str);
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
char	*get_dec(va_list ptr)
{
	int		dec;

	dec = va_arg(ptr, int);
	return(ft_itoa(dec));
}
