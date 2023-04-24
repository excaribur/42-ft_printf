/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <phonyiam.jirayut@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 22:33:41 by <your usern       #+#    #+#             */
/*   Updated: 2023/04/24 22:53:03 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

#define PERCENT '%'
#define S_NULL "(null)"

int	ft_printf(const char *data, ...);
int		conversion(va_list ptr, char c);
char	*to_str(char c);
int		get_char(va_list ptr);
int		get_str(va_list ptr);
char	*get_ptr(va_list ptr);
int		get_dec(va_list ptr);
int		get_int(va_list ptr);
int		get_unsigned_dec(va_list ptr);
char	*get_hex(va_list ptr, int i_type);
int		get_percent();
char	*make_buffer(char *buffer, char *str_con);
char	*ft_unsigned_tostr(unsigned int n);
int		ft_putchar(char c);
int		ft_putstr(char *str);


#endif
