/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houzddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 14:18:28 by houzddou          #+#    #+#             */
/*   Updated: 2024/07/18 14:20:05 by houzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

int	ft_putnbr(int nbr)
{
	char	i;

	if (nbr / 10)
		ft_putnbr(nbr / 10);
	i = (nbr % 10) + '0';
	write(1, &i, 1);
}

void	print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		print(par[i].str);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		print(par[i].copy);
		i++;
	}
}
