/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houzddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 09:27:41 by houzddou          #+#    #+#             */
/*   Updated: 2024/07/16 11:15:22 by houzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	join_now(int size, char **strs, char *sep, char *str)
{
	int		i;
	int		j;
	int		k;
	int		p;
	char	*ptr;

	i = 0;
	p = 0;
	ptr = str;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			ptr[p++] = strs[i][j++];
		if (i < size - 1)
		{
			k = 0;
			while (sep[k])
				ptr[p++] = sep[k++];
		}
		i++;
	}
	ptr[p] = '\0';
}

int	total_lenght(int size, char **strs, char *sep)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (i < size)
	{
		n += len(strs[i]);
		if (i < size - 1)
			n += len(sep);
		i++;
	}
	return (n);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		n;

	if (size == 0)
		return (malloc(sizeof(char)));
	n = total_lenght(size, strs, sep);
	str = malloc(sizeof(char) * (n + 1));
	if (str == NULL)
		return (NULL);
	join_now(size, strs, sep, str);
	return (str);
}
