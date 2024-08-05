/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houzddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:14:05 by houzddou          #+#    #+#             */
/*   Updated: 2024/07/07 15:07:32 by houzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*som;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	som = malloc((i * sizeof(char ) + 1));
	if (som == NULL)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		som[i] = src[i];
		i++;
	}
	som [i] = '\0';
	return (som);
}
