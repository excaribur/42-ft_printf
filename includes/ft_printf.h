/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <phonyiam.jirayut@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 22:33:41 by <your usern       #+#    #+#             */
/*   Updated: 2023/04/27 22:56:20 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

# define PERCENT '%'
# define S_NULL "(null)"
# define FORM_MEMORY "0x"

int		ft_printf(const char *data, ...);
int		conversion(va_list ptr, char c);

int		get_char(va_list ptr);
int		get_str(va_list ptr);
int		get_ptr(va_list ptr);
int		get_dec(va_list ptr);
int		get_int(va_list ptr);
int		get_unsigned_dec(va_list ptr);
int		get_hex(va_list ptr, int is_lower);
int		get_percent(void);
char	*ft_unsigned_tostr(unsigned int n);
int		ft_putchar(char c);
int		ft_putstr(char *str);
char	*to_str_hex(unsigned long long nbr, char *str, size_t lenght, int base);
char	*ft_str_to_upper(char *str);
size_t	find_digit(unsigned long long nbr, int base);
char	*make_hex(unsigned long long nbr, int base, char *str);


#endif
