/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <your username> <your@email.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:00:11 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/02 20:50:23 by <your usern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* @Desc: ensure that is alphabet or not
* @Params: a character
* @Return: 1 true, 0 false
*/
int	ft_isalpha(int letter)
{
	if (letter >= 'a' && letter <= 'z')
		return (1);
	if (letter >= 'A' && letter <= 'Z')
		return (1);
	return (0);
}
