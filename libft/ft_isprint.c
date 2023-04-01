/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:36:49 by jphonyia          #+#    #+#             */
/*   Updated: 2023/02/15 09:50:33 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int letter)
{
	if (letter >= 32 && letter < 127)
	{
		return (1);
	}
	return (0);
}
