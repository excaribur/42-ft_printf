/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilprintf_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <phonyiam.jirayut@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 12:56:18 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/23 12:56:08 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

/*
* @Desc: to concatnate "str" to "dst" string
* @Params:
* @Return:
*/
char	*conversion(va_list ptr, char c)
{
	char	*str;

	str = NULL;
	if (c == 'c')
		str = get_char(ptr);
	else if (c == 's')
		str = get_str(ptr);
	else if (c == 'p')
		str = get_ptr(ptr);
	else if (c == 'd')
		str = get_dec(ptr);
	else if (c == 'i')
		str = get_int(ptr);
	else if (c == 'u')
		str = get_unsigned_dec(ptr);
	else if (c == 'x')
		str = get_hex(ptr, 0);
	else if (c == 'X')
		str = get_hex(ptr, 1);
	else if (c == '%')
		str = get_percent(ptr);
	return (str);
}

char	*to_str(char c)
{
	char	*str;
	char	*ptr;
	size_t	len_char_nul;

	len_char_nul = 2;
	str = (char *)malloc(sizeof(char) * len_char_nul);

	if (str == NULL)
		return (NULL);
	ptr = str;
	*str = c;
	str++;
	*str = '\0';
	return (ptr);
}

char	*make_buffer(char *buffer, char *str_con)
{
	char	*ptr;

	ptr = NULL;
	if (buffer == NULL)
	{
		buffer = (char *)ft_calloc(1, sizeof(char));
		if (buffer == NULL)
			return (NULL);
	}
	ptr = buffer;
	ptr = ft_strjoin(buffer, str_con);
	if (buffer)
		free(buffer);
	if (str_con)
		free(str_con);
	return (ptr);
}
