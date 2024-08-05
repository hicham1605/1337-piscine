/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houzddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:18:22 by houzddou          #+#    #+#             */
/*   Updated: 2024/07/06 14:01:29 by houzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	nbr;

	nbr = nb;
	if (nbr <= 0)
		return (0);
	if (nbr == 1)
		return (1);
	i = 2;
	if (nbr >= 2)
	{
		while (i * i <= nbr)
		{
			if (i * i == nbr)
				return (i);
			i++;
		}
	}
	return (0);
}
