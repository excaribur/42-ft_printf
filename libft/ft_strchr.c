/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <your username> <your@email.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:03:04 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/02 17:07:06 by <your usern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* @Desc: to searches for the first occurrence of the character c in the string
* then return the pointer
*
* @Params:
* @Return:
*/
char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr)
	{
		if (*ptr == (char) c)
			return (ptr);
		if (*ptr == '\0')
			return (0);
		ptr++;
	}
	if (*ptr == (char) c)
		return (ptr);
	return (0);
}
