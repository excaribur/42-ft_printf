/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <your username> <your@email.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 21:56:11 by jphonyia          #+#    #+#             */
/*   Updated: 2023/04/02 20:49:17 by <your usern      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* @Desc: to Ensure this character is alphabet or number
* @Params: a letter or character
* @Return: 1 if true, 0 if false
*/
int	ft_isalnum(int letter)
{
	if (letter >= 'a' && letter <= 'z')
	{
		return (1);
	}
	if (letter >= 'A' && letter <= 'Z')
	{
		return (1);
	}
	if (letter >= '0' && letter <= '9')
	{
		return (1);
	}
	return (0);
}
