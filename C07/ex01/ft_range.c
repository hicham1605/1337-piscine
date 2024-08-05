/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houzddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 17:00:06 by houzddou          #+#    #+#             */
/*   Updated: 2024/07/07 17:18:57 by houzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (max <= min)
		return (0);
	arr = malloc ((max - min) * sizeof(int));
	if (arr == NULL)
		return (0);
	i = 0;
	while (i < max - min)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
