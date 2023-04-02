/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <your username> <your@email.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:47:41 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/02 20:51:16 by <your usern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* @Desc: ensure that is digit 0 - 9 or not
* @Params: a character
* @Return: 1 true, 0 false
*/
int	ft_isdigit(int letter)
{
	if (letter >= 48 && letter <= 57)
	{
		return (1);
	}
	return (0);
}
