/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <your username> <your@email.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:57:09 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/02 20:28:49 by <your usern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* @Desc: to generate a substring of size len starting from the start position.
* @Params: String s, start location, specific length
* @Return: a Substring
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < len + start && (start + 1) <= ft_strlen(s))
		len = (size_t)(ft_strlen(s) - start);
	if (start + 1 > ft_strlen(s))
		len = 0;
	ptr = (char *)malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);
	if (len != 0)
		ft_strlcpy(ptr, &s[start], len + 1);
	else
		ptr[0] = '\0';
	return (ptr);
}
