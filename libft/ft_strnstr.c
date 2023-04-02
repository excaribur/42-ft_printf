/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <your username> <your@email.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:18:39 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/02 20:38:17 by <your usern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* @Desc: The strnstr function locates the first occurrence
* of the null-terminated string little(needle) in the string big(haystack),
* where not more than len characters are searched.
* Characters that appear after a \0 character are not searched.
*
* @Params: big string, little string, specific lenght
* @Return: If needle is an empty string, haystack is returned;
* if needle occurs nowhere in haystack, NULL is returned;
* otherwise a pointer to the first character of the first occurrence
* of needle is returned.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_need;
	size_t	i;

	if (*needle == 0)
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	len_need = ft_strlen(needle);
	i = 0;
	while ((haystack[i] != '\0') && ((i + len_need) <= len))
	{
		if (ft_strncmp(&haystack[i], needle, len_need) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
