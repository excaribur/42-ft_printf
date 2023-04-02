/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <your username> <your@email.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:54:55 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/02 20:12:40 by <your usern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* @Desc: to copy a string with malloc
* @Params: string s
* @Return: a copy string
*/
char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*ptr;

	len = ft_strlen(s1) + 1;
	ptr = (char *)malloc(sizeof(char) * len);
	if (ptr)
	{
		ptr = (char *)ft_memcpy(ptr, s1, len);
	}
	return (ptr);
}
