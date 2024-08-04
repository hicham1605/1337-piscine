/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houzddou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 17:00:28 by houzddou          #+#    #+#             */
/*   Updated: 2024/07/08 08:51:35 by houzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	mstrcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	print(int b, char **s)
{
	int	i;
	int	j;

	j = 1;
	while (s[j] && j < b)
	{
		i = 0;
		while (s[j][i])
		{
			write(1, &s[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*temp;

	j = 1;
	while (j < argc - 1)
	{
		i = j + 1;
		while (i < argc)
		{
			if (mstrcmp(argv[j], argv[i]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[i];
				argv[i] = temp;
			}
			i++;
		}
		j++;
	}
	print(argc, argv);
	return (0);
}
