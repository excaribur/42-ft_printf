/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilprintf_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <phonyiam.jirayut@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 12:56:18 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/24 22:50:04 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

/*
* @Desc: to concatnate "str" to "dst" string
* @Params:
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
	// else if (c == 'p')
	// 	lenght = get_ptr(ptr);
	else if (c == 'd')
		lenght = get_dec(ptr);
	else if (c == 'i')
		lenght = get_int(ptr);
	else if (c == 'u')
		lenght = get_unsigned_dec(ptr);
	// else if (c == 'x')
	// 	lenght = get_hex(ptr, 0);
	// else if (c == 'X')
	// 	lenght = get_hex(ptr, 1);
	else if (c == '%')
		lenght = get_percent();
	return (lenght);
}

char	*to_str(char c)
{
	char	*str;
	size_t	len_char_nul;

	len_char_nul = 2;
	str = (char *)ft_calloc(len_char_nul, sizeof(char));
	if (str == NULL)
		return (NULL);
	str[0] = c;
	return (str);
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
