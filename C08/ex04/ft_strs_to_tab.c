/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houzddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 09:57:03 by houzddou          #+#    #+#             */
/*   Updated: 2024/07/18 13:43:57 by houzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*newdest;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	newdest = malloc(sizeof(char) * (i + 1));
	if (newdest == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		newdest[i] = src[i];
		i++;
	}
	newdest[i] = '\0';
	return (newdest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		if (tab[i].copy == NULL)
			return (NULL);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
