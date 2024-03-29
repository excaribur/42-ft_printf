/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <your username> <your@email.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:03:46 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/02 20:57:18 by <your usern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* @Desc: to searches for the last occurrence of the character c
* in a string and then return the pointer; otherwise, it returns a null pointer.
*
* @Params: string , character to find in
* @Return: substring start at last character c
*/
char	*ft_strrchr(const char *s, int c)
{
	char	*start;

	start = NULL;
	while (*s)
	{
		if ((char) c == *s)
			start = (char *)s;
		s++;
	}
	if (c == *s)
		start = (char *)s;
	return (start);
}
