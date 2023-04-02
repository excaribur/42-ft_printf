/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <your username> <your@email.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:21:06 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/02 17:12:50 by <your usern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* @Desc: to split a string into a series of tokens based on
* a particular delimiter.
* A token is a substring extracted from the original string.
*
* @Params:
* @Return:
*/
size_t	len_arr(char const *s, char c)
{
	size_t	subarr;
	size_t	in_sub;

	subarr = 0;
	while (*s)
	{
		in_sub = 0;
		while (*s && *s == c)
			s++;
		while (*s && *(s++) != c)
			in_sub++;
		if (in_sub)
			subarr++;
	}
	return (subarr);
}

size_t	len_sub(char const *s, char c)
{
	size_t	n;

	n = 0;
	while (*s && *(s++) != c)
		n++;
	return (n);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	len;
	size_t	i;

	if (s == NULL)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * (len_arr(s, c) + 1));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			len = len_sub(s, c);
			arr[i] = ft_substr(s, 0, len);
			s += len;
			i++;
		}
	}
	arr[i] = NULL;
	return (arr);
}
