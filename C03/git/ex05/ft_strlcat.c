/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houzddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:11:38 by houzddou          #+#    #+#             */
/*   Updated: 2024/07/02 14:58:40 by houzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	i;

	len_dest = 0;
	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}
	len_src = 0;
	while (src[len_src] != '\0')
	{
		len_src++;
	}
	if (len_dest >= size)
		return (size + len_src);
	i = 0;
	while (src[i] != '\0' && (len_dest + i) < (size - 1))
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}
