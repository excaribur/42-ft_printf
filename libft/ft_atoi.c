/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <your username> <your@email.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:41:09 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/02 20:06:41 by <your usern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int letter);

char	*remove_whitespace(const char *str)
{
	while (*str && (*str == 32 || (*str >= 9 && *str <= 15)))
		str++;
	if (*str == '-' || ft_isdigit(*str))
		return ((char *)str);
	if (*str == '+' && ft_isdigit(*(str + 1)))
		return ((char *)++str);
	return (NULL);
}

/*
* @Desc: to generate an int from string
* @Params: string
* @Return: integer
*/
int	ft_atoi(const char *str)
{
	int	neg;
	int	result;

	neg = 1;
	result = 0;
	str = remove_whitespace(str);
	if (str == NULL)
		return (0);
	if (*str == '-')
	{
		neg = -1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		result = result * 10 + (neg * (*str - '0'));
		str++;
	}
	return (result);
}
