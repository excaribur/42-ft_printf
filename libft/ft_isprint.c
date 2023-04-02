/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <your username> <your@email.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:36:49 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/02 20:52:03 by <your usern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* @Desc: ensure that is in printable ascii(can read character) or not
* @Params: a character
* @Return: 1 true, 0 false
*/
int	ft_isprint(int letter)
{
	if (letter >= 32 && letter < 127)
	{
		return (1);
	}
	return (0);
}
