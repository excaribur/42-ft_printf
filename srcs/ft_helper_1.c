/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <phonyiam.jirayut@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 12:56:18 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/24 22:31:37 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

/*
* @Desc: to print out character
* @Params: c = character
* @Return: lenght: 1
*/
int	ft_putchar(char c)
{
	ft_putchar_fd(c, 1);
	return(1);
}

/*
* @Desc: to print out String
* @Params: str is String
* @Return: lenght of String
*/
int	ft_putstr(char *str)
{
	size_t	length;

	length = 0;
	while (str[length])
	{
		length += ft_putchar(str[length]);
	}
	return (length);
}
