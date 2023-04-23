/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <phonyiam.jirayut@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:25:05 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/22 23:22:39 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* @Desc: to allocates the requested memory and returns a pointer to it
* It initializes each block element with a default value ‘0’.
*
* @Params:  count is the number of elements to be allocated,
* size is the size of each element.
*
* @Return:
*/
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size == SIZE_MAX || count == SIZE_MAX)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
