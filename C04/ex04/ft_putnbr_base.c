/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houzddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:35:46 by houzddou          #+#    #+#             */
/*   Updated: 2024/07/13 14:38:44 by houzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	lenstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
		i++;
	return (i);
}

int	base_valid(char *base)
{
	int	i;
	int	j;

	if (lenstr(base) <= 1)
		return (1);
	i = 0;
	while (i < lenstr(base) - 1)
	{
		if (base[i] == '-' || base[i] == '+')
			return (1);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	if (base[lenstr(base) -1] == '-' || base[lenstr(base) -1] == '+')
		return (1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	n;
	int		base_len;

	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	base_len = lenstr(base);
	if (base_valid(base) == 1 || base_len <= 1)
		return ;
	if (nbr >= base_len)
	{
		ft_putnbr_base(nbr / base_len, base);
	}
	n = base[nbr % base_len];
	write(1, &n, 1);
}
