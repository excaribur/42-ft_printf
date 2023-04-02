/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <your username> <your@email.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:06:02 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/02 20:56:03 by <your usern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/***   count the length for malloc a string   ***/
size_t	len_number(int n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count = 1;
	while (n != 0)
	{
		n = n / 10;
		count ++;
	}
	return (count);
}

/***   logic for positive number   ***/
char	*ft_positive(char *ptr, int n)
{
	*ptr = '\0';
	while (n != 0)
	{
		*(--ptr) = '0' + n % 10;
		n = n / 10;
	}
	return (ptr);
}

/***   logic for negative number   ***/
char	*ft_negative(char *ptr, int n)
{
	*ptr = '\0';
	while (n != 0)
	{
		*(--ptr) = '0' - n % 10;
		n = n / 10;
	}
	*(--ptr) = '-';
	return (ptr);
}

/***   if ZERO passed in parameter   ***/
char	*ft_o(char *ptr, size_t n)
{
	char	*temp;

	temp = ptr;
	while (n--)
	{
		*ptr++ = '0';
	}
	*ptr = '\0';
	return (temp);
}

/*
* @Desc: to generate string from interger number
* @Params: interger
* @Return: a String
*/
char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	len;

	len = len_number(n);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	if (n > 0)
		return (ft_positive(&ptr[0] + len, n));
	if (n < 0)
		return (ft_negative(&ptr[0] + len, n));
	return (ft_o(ptr, len));
}
