/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <phonyiam.jirayut@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:06:02 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/29 15:16:51 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

/*
* @Desc: To allocate string from unsigned interger number
* @Params: n = Number
* @Return: String of number
*/
char	*ft_unsigned_tostr(unsigned int n)
{
	char	*ptr;
	size_t	len;
	int		i;
	int		base;

	base = 10;
	len = find_digit(n, 10);
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

/*
* @Desc: To reverse String
* @Params:	ptr = String
* 			len = Length of String
* @Return:  String of number
*/
char	*ft_reverse_str(char *ptr, size_t len)
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
* @Desc: To print "0"
* @Params:	str = String
* @Return: Length of printed String
*/
int	putstr_null(char *str)
{
	int	length;

	length = 0;
	str = ft_strdup(STR_ZERO);
	length += ft_putstr(str);
	if (str)
		free(str);
	return (length);
}

/*
* @Desc: To print "0x"
* @Params:	str = String
* @Return: Length of printed String
*/
int	putstr_form_memory(char *str)
{
	int	length;

	length = 0;
	str = ft_strdup(STR_FORM_MEMORY);
	length += ft_putstr(str);
	if (str)
		free(str);
	return (length);
}

/*
* @Desc: To print "0x0"
* @Params:	str = String
* @Return: Length of printed String
*/
int	putstr_null_form_memory(char *str)
{
	int	length;

	length = 0;
	str = ft_strdup(STR_NULL_FORM_MEMORY);
	length += ft_putstr(str);
	if (str)
		free(str);
	return (length);
}
