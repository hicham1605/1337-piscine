/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houzddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 08:24:53 by houzddou          #+#    #+#             */
/*   Updated: 2024/06/30 18:29:54 by houzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		count;
	int		i;

	i = 0;
	size = size - 1;
	while (i < size)
	{
		count = tab [size];
		tab [size] = tab [i];
		tab [i] = count;
		i++;
		size--;
	}
}
