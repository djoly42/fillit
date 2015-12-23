/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 17:39:51 by cdebord           #+#    #+#             */
/*   Updated: 2015/12/18 14:33:47 by cdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_header.h"

char	**ft_init_map(char **grid, int size)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (size > 1)
	{
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				grid[i][j] = '.';
				j++;
			}
			grid[i][j] = '\0';
			i++;
		}
		j = 0;
	}
	while (j <= size)
		grid[i][j++] = '\0';
	return (grid);
}
