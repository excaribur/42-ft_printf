/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <your username> <your@email.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:19:51 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/02 20:50:56 by <your usern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* @Desc: ensure that is in ascii character or not
* @Params: a character
* @Return: 1 true, 0 false
*/
int	ft_isascii(int letter)
{
	if (letter >= 0 && letter <= 127)
	{
		return (1);
	}
	return (0);
}
