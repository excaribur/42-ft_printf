/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_tostr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <phonyiam.jirayut@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:06:02 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/23 19:19:12 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

/***   count the length for malloc a string   ***/
size_t	len_num(unsigned int n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		count ++;
	}
	return (count);
}

char *ft_reverse_str(char *ptr, size_t len)
{
	int		left;
	int		right;
	char	*tmp;

	left = 0;
	tmp = (char *)malloc(1);
	if (NULL)
		return (NULL);
	right = len;
	while (left < right)
	{
		*tmp = ptr[left];
		ptr[left] = ptr[right];
		ptr[right] = *tmp;
		left++;
		right--;
	}
	free(tmp);
	return (ptr);
}

/*
* @Desc: to generate string from interger number
* @Params: interger
* @Return: a String
*/
char	*ft_unsigned_tostr(unsigned int n)
{
	char	*ptr;
	size_t	len;
	int		i;

	len = len_num(n);
	ptr = (char *)ft_calloc(len + 1, sizeof(char));
	if (ptr == NULL)
		return (NULL);
	if (n == 0)
	{
		ptr[0] = '0';
		return (ptr);
	}
	i = 0;
	ptr[0] = '\0';
	while (n > 0)
	{
		ptr[++i] = '0' + n % 10;
		n = n / 10;
	}
	return (ft_reverse_str(ptr, len));
}
