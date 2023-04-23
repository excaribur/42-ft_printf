/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <phonyiam.jirayut@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 22:33:41 by <your usern       #+#    #+#             */
/*   Updated: 2023/04/23 00:01:09 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *data, ...);
char	*conversion(va_list ptr, char c);
char	*to_str(char c);
char	*get_char(va_list ptr);
char	*get_str(va_list ptr);
char	*get_ptr(va_list ptr);
char	*get_dec(va_list ptr);
char	*get_int(va_list ptr);
char	*get_unsigned_dec(va_list ptr);
char	*get_hex(va_list ptr, int i_type);
char	*get_percent(va_list ptr);
char	*make_buffer(char *buffer, char *str_con);


#endif
